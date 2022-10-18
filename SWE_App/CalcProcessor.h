#pragma once

#include "AppWindow.h"
#include <vector>
#include <string>
#include <map>

using namespace std;

class CalcProcessor
{
private:
	static CalcProcessor* _calcProcessor;
	vector<string> _inputs;
	CalcProcessor() {};
public:
	CalcProcessor(CalcProcessor& other) = delete;
	CalcProcessor& operator=(CalcProcessor& other) = delete;

	static CalcProcessor* GetInstance();
	
	static bool CheckOperator(const string& OPtoken);
	static bool CheckAssociation(const string& CurToken, const int& OP);
	static bool CheckFunction(const string& token);
	static bool CheckifParenthesis(const string& token);
	static int CompareImportance(const string& token1, const string& token2);
	static bool ShuntYardAlgo(const vector<string>& CalcInputs, const int EquationSize, vector<string> RPNtoOutput);
	static float RPNtoDouble(vector<string> tokens);	
};
