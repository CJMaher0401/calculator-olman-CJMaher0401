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
	
	static bool CheckOperator(const string& token);
	static bool CheckAssociation(const string& token, const int& type);
	static int CompareImportance(const string& token1, const string& token2);
	static bool ShuntYardAlgo(const vector<string>& CalcInputs, const int EquationSize, vector<string> RPNtoOutput);
	static double RPNtoDouble(vector<string> tokens);
	
};

