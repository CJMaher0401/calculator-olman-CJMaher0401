#include "CalcProcessor.h"
#include "AppWindow.h"
#include "wx/wx.h"
#include <iostream>
#include <sstream>
#include <list>
#include <stack>
#include <map>
#include <string>
#include <vector>
#include <iterator>
#include <stdlib.h>
#include <math.h>

using namespace std;

CalcProcessor* CalcProcessor::_calcProcessor = nullptr;

// I create a map for my operators to assign each operator a key, I can then use that key to access my operators and ensure
// they are considered unique across the entire program. It also allows me to have quick access to my operators when 
// referencing them in methods that check the operators association and checks the operators importance(a.k.a. is "*" more important than "+").
// In our pair for each operator we have two ints, the first int is realted to there importance, and the second is realted to their
//association (a.k.a, whether they are left or right associative). This is important for our CheckImportance and CheckAssociation methods.
typedef map<string, pair<int, int>> OperatorImportance;

const OperatorImportance::value_type OperatorAssociation[] =
{
	OperatorImportance::value_type("+", pair<int,int>(0, 0)),
	OperatorImportance::value_type("-", pair<int,int>(0, 0)),
	OperatorImportance::value_type("*", pair<int,int>(5, 0)),
	OperatorImportance::value_type("/", pair<int,int>(5, 0))
};

//Here I create a variable assoicated with our map that will look at the value in our map so I can use the .find
//function to check what operator we are dealing with.
const OperatorImportance operators(OperatorAssociation, OperatorAssociation + sizeof(OperatorAssociation) / sizeof(OperatorAssociation[0]));

//I create a method to check which operator I am dealing with so it can be used correctly inside the Shunting Yard Algorithm.
bool CalcProcessor::CheckOperator(const string& OPtoken)
{
	return OPtoken == "+" || OPtoken == "-" || OPtoken == "*" || OPtoken == "/";
}

//Here I just want to check if a function was inputed by reading what function was outputed to our vector in AppWindow.cpp
bool CalcProcessor::CheckFunction(const string& token)
{
    return token == "M" || token == "S" || token == "C" || token == "T";
}

//Here I just want to check if the current token we are looking at is a parenthesis for the last while loop in my shunting yard algorithm
//as if there is a parenthesis still in the stack when everything else has been popped out there are mismatched parenthesis, so we want to 
//be able to return an error
bool CalcProcessor::CheckifParenthesis(const string& token)
{
    return token == "(" || token == ")";
}

//In the Shunting Yard Algorithm wiki page it talks about "while(o2 has greater precedence than o1 or they have the 
//same precedence and o1 is left - associative". This method checks if that operator we are dealing with is left associative
//which is important as we need to know if the current operator is left associative in our while loop.
bool CalcProcessor::CheckAssociation(const string& CurToken, const int& OP)
{
	const pair<int, int> CurrentToken = operators.find(CurToken)->second;
	return CurrentToken.second == OP;
}

//Here we check the importance of two operators, so we will go through our pair and look at our two operators
//then we will want to find what operator we are looking and point to our second stored value in our pair to check its
//association, then lastly we want return what our operators first value is in the pair as it represents their importance.
int CalcProcessor::CompareImportance(const string& Operator1, const string& Operator2)
{
	const pair<int, int> FirstOperator = operators.find(Operator1)->second;
	const pair<int, int> SecondOperator = operators.find(Operator2)->second;

	return FirstOperator.first - SecondOperator.first;
}

//Here is my entire shunting yard algorithm.
bool CalcProcessor::ShuntYardAlgo(const vector<string>& CalcInputs, const int EquationSize, vector<string> RPNtoOutput)
{
	bool EquationToRPN = true;

	list<string> RPNoutput;
	stack<string> RPNstack;

	//While there are tokens(aka "CalcInputs") to be converted to RPN we will continue to loop
	for (int i = 0; i < EquationSize; i++)
	{
		//assign the current token to current calculator input being read, as well as read the CurToken
		const string CurToken = CalcInputs[i];

		// if the current token being read is an operator continue down the loop
		if (CheckOperator(CurToken))
		{
			// assign this current token to the first operator we see
			const string operator1 = CurToken;

			//if the stack is not empty continue to loop through
			if (!RPNstack.empty())
			{
				// assign our second token to whatever operator is at the top of the stack
				string operator2 = RPNstack.top();

				// So while there is an operator token at the top of the stack AND    
				// either operator1 is left-associative AND its importance is equal to that of operator2,    
          		// OR operator1 has precedence less than that of o2 ->
				while((CheckAssociation(operator1, 0) && CompareImportance(operator1, operator2) == 0 ||
					(CompareImportance(operator1, operator2) < 0)))
				{
					//-> pop operator2 off the stack and into the output
					RPNstack.pop();
					RPNoutput.push_back(operator2);
						
					//if the stack is not empty then move through the check
					if (!RPNstack.empty())
					{
						//and then assign operator2 to the top of the stack
						operator2 = RPNstack.top();
					}
					else
					{
						//we break because at this point because the stack has runs out items to push to the output
						break;
					}
				}
			}
			//now we push operator1 to the stack 
			RPNstack.push(operator1);
		}
		//if the current token is a left parenthesis, then we are going to push it to the stack
		else if(CurToken == "(")
		{
			//pushing the current token to the stack
			RPNstack.push(CurToken);
		}
		//if the current token is a right parenthesis->
		else if (CurToken == ")")
		{
            //create a representation of our cur top token
            string CurTopToken = RPNstack.top();

            //while our current top token is not a left parenthesis continue to pop operators off the stack into the output queue
            while (CurTopToken != "(")
            {
                RPNoutput.push_back(CurTopToken);
                RPNstack.pop();

                //So if our stack is empty than we want to stop the program as their are mismatched parenthesis
                if (RPNstack.empty())
                {
                    break;
                }
                CurTopToken = RPNstack.top();
            }
            //if the stack is not empty ->
            if (!RPNstack.empty())
            {
                //-> then we want to pop out that left parenthesis 
                RPNstack.pop();
            }
            // if our current top token does not equal a left parenthesis that means the stack ran out of items
            //to look at which means we have mismatched parenthesis
            if (CurTopToken != "(")
            {
                //so we return false to stop the aglorithm, this also makes it easier for our equal sign event
                //as if the shunting yard algorithm returns flase then I can output a error message to the textbox
                return false;
            }
		}
        //if current token we are looking at is a function then we just want to push that current token to the stack
        else if (CheckFunction(CurToken))
        {
            RPNstack.push(CurToken);
        }
        //and lastly if the token is a number then we will want to just push to the output queue
        else
        {
            RPNoutput.push_back(CurToken);
        }
	}
    //so if there are still operators tokens in the stack then we will ->
    while (!RPNstack.empty())
    {
        //-> first create a variable to represent what is currently at the top of the stack ->
        string CurStackToken = RPNstack.top();

        //-> then check if the current token in stack is a parenthesis, because if it is then we have mismatched parenthesis
        if (CheckifParenthesis(CurStackToken))
        {
            return false;
        }
        //otherwise we will continue to pop that operator into the output queue
        RPNoutput.push_back(CurStackToken);
        RPNstack.pop();
    }
    //lastly we will want to assign our ouput to a vector that then can be called in our other algorithm to turn the RPN output to an actual answer
    RPNtoOutput.assign(RPNoutput.begin(), RPNoutput.end());
    //then return true because we have successfully turned our calculator input into a RPN output.
    return EquationToRPN;
}

CalcProcessor* CalcProcessor::GetInstance()
{
	if (_calcProcessor == nullptr)
	{
		_calcProcessor = new CalcProcessor();
	}
	return _calcProcessor;
}













