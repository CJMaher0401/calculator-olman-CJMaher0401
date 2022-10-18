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

using namespace std;

CalcProcessor* CalcProcessor::_calcProcessor = nullptr;

// I create a map for my operators to assign each operator a key, I can then use that key to access my operators and ensure
// they are considered unique across the entire program. It also allows me to have quick access to my operators when 
// referencing them in methods that check the operators association and checks the operators importance(a.k.a. "*" is more important than "+").
typedef map<string, pair<int, int>> OperatorImportance;

const OperatorImportance::value_type OperatorAssociation[] =
{
	OperatorImportance::value_type("+", pair<int,int>(0, 0)),
	OperatorImportance::value_type("-", pair<int,int>(0, 0)),
	OperatorImportance::value_type("*", pair<int,int>(5, 0)),
	OperatorImportance::value_type("/", pair<int,int>(5, 0))
};

//
const OperatorImportance operators(OperatorAssociation, OperatorAssociation + sizeof(OperatorAssociation) / sizeof(OperatorAssociation[0]));

//I create a method to check which operator I am dealing with, and since I use a map I am able to know what operator I am dealing with
//and their importance;
bool CalcProcessor::CheckOperator(const string& OPtoken)
{
	return OPtoken == "+" || OPtoken == "-" || OPtoken == "*" || OPtoken == "/";
}

bool CalcProcessor::CheckAssociation(const string& CurToken, const int& OP)
{
	const pair<int, int> CurrentToken = operators.find(CurToken)->second;
	return CurrentToken.second == OP;
}

int CalcProcessor::CompareImportance(const string& Operator1, const string& Operator2)
{
	const pair<int, int> FirstOperator = operators.find(Operator1)->second;
	const pair<int, int> SecondOperator = operators.find(Operator2)->second;

	return FirstOperator.first - SecondOperator.first;
}

bool CalcProcessor::ShuntYardAlgo(const vector<string>& CalcInputs, const int EquationSize, vector<string> RPNtoOutput)
{
	bool EquationToRPN = true;

	list<string> RPNoutput;
	stack<string> RPNStack;

}

double CalcProcessor::RPNtoDouble(vector<string> tokens)
{
	return 0.0;
}

CalcProcessor* CalcProcessor::GetInstance()
{
	if (_calcProcessor == nullptr)
	{
		_calcProcessor = new CalcProcessor();
	}
	return _calcProcessor;
}
//int CalcProcessor::CheckOperator(string operators)
//{
//    if (operators == "+")
//    {
//        return operators == "+";
//    }
//    if (operators == "-")
//    {
//        return operators == "-";
//    }
//    if (operators == "*")
//    {
//        return operators == "*";
//    }
//    if (operators == "/")
//    {
//        return operators == "/";
//    }
//}
//
//int CalcProcessor::CheckIfFunction(string functions)
//{
//    if (functions == "S")
//    {
//        return functions == "S";
//    }
//    if (functions == "C")
//    {
//        return functions == "C";
//    }
//    if (functions == "T")
//    {
//        return functions == "T";
//    }
//}
//
//int CalcProcessor::CompareImportance(string operators, string operators2)
//{
//    if (operators == "+" || operators == "-")
//    {
//        return 1;
//    }
//    return 2;
//}
//
//vector<string> CalcProcessor::ShuntYardAlgo(vector<string>& inputs)
//{
//    vector<string> SHYoutput;
//    stack<string> SHYcontainer;
//    string op1;
//    string op2;
//
//    for (int i = 0; i < inputs.size(); i++)
//    {
//        if (CheckOperator(inputs[i]))
//        {
//            string op1 = inputs[i];
//
//            if (!SHYcontainer.empty())
//            {
//                string op2 = SHYcontainer.top();
//
//                while (CheckOperator(op2) && CompareImportance(op1, op2) <= 0)
//                {
//                    SHYcontainer.pop();
//                    SHYoutput.push_back(op2);
//                    if (!SHYcontainer.empty())
//                    {
//                        op2 = SHYcontainer.top();
//                    }
//                    else
//                    {
//                        //figure out how to have textbox have error show up
//                        break;
//                    }
//                }
//                SHYcontainer.push(op1);
//            }
//        }
//        else if (inputs[i] == "(")
//        {
//            SHYcontainer.push(inputs[i]);
//        }
//        else if (inputs[i] == ")")
//        {
//            string TopInput = SHYcontainer.top();
//
//            while (SHYcontainer.top() != "(")
//            {
//                SHYoutput.push_back(TopInput);
//                SHYcontainer.top();
//
//                if (SHYcontainer.empty())
//                {
//                    //figure out how to dislpay error text to text box
//                    break;
//                }
//                TopInput = SHYcontainer.top();
//            }
//            if (!SHYcontainer.empty())
//            {
//                SHYcontainer.pop();
//            }
//        }
//        //else if (CheckIfFunction(inputs[i]))
//        //{
//        //    SHYcontainer.push(inputs[i]);
//        //}
//        else
//        {
//            SHYoutput.push_back(inputs[i]);
//        }
//    }
//    while (!SHYcontainer.empty())
//    {
//        string RestofInputs = SHYcontainer.top();
//        SHYoutput.push_back(RestofInputs);
//        SHYcontainer.pop();
//    }
//    return SHYoutput;
//}
//


