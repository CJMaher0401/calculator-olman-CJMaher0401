#include "CalcProcessor.h"
#include "AppWindow.h"
#include "wx/wx.h"
#include <vector>
#include <string>
#include <stack>

using namespace std;

int CheckOperator(string operators)
{
    if (operators == "+")
    {
        return operators == "+";
    }
    if (operators == "-")
    {
        return operators == "-";
    }
    if (operators == "*")
    {
        return operators == "*";
    }
    if (operators == "/")
    {
        return operators == "/";
    }
}

int CheckIfFunction(string functions)
{
    if (functions == "S")
    {
        return functions == "S";
    }
    if (functions == "C")
    {
        return functions == "C";
    }
    if (functions == "T")
    {
        return functions == "T";
    }
}

int CompareImportance(string operators)
{
    if (operators == "+" || operators == "-")
    {
        return 1;
    }
    return 2;
}

vector<string> CalcProcessor::ShuntYardAlgo(vector<string> inputs)
{
    vector<string> SHYoutput;
    stack<string> SHYcontainer;
    string op1;
    string op2;

    for (int i = 0; i < inputs.size(); i++)
    {
        if (CheckOperator(inputs[i]))
        {
            string op1 = inputs[i];

            if (!SHYcontainer.empty())
            {
                string op2 = SHYcontainer.top();

                while (CheckOperator(op2) && CompareImportance(op1) <= 0)
                {
                    SHYcontainer.pop();
                    SHYoutput.push_back(op2);
                    if (!SHYcontainer.empty())
                    {
                        op2 = SHYcontainer.top();
                    }
                    else
                    {
                        //figure out how to have textbox have error show up
                        break;
                    }
                }
                SHYcontainer.push(op1);
            }
        }
        else if (inputs[i] == "(")
        {
            SHYcontainer.push(inputs[i]);
        }
        else if (inputs[i] == ")")
        {
            string TopInput = SHYcontainer.top();

            while (SHYcontainer.top() != "(")
            {
                SHYoutput.push_back(TopInput);
                SHYcontainer.top();

                if (SHYcontainer.empty())
                {
                    //figure out how to dislpay error text to text box
                    break;
                }
                TopInput = SHYcontainer.top();
            }
            if (!SHYcontainer.empty())
            {
                SHYcontainer.pop();
            }
        }
        else if (CheckIfFunction(inputs[i]))
        {
            SHYcontainer.push(inputs[i]);
        }
        else
        {
            SHYoutput.push_back(inputs[i]);
        }
    }
    while (!SHYcontainer.empty())
    {
        string RestofInputs = SHYcontainer.top();
        SHYoutput.push_back(RestofInputs);
        SHYcontainer.pop();
    }
    return SHYoutput;
}




CalcProcessor* CalcProcessor::GetInstance()
{
	if (_calcProcessor == nullptr)
	{
		_calcProcessor = new CalcProcessor();
	}
	return _calcProcessor;
}
