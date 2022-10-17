#pragma once

#include "AppWindow.h"
#include <vector>
#include <string>

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
	int CheckOperator(string operators);
	int CheckIfFunction(string functions);
	int CompareImportance(string operators);
	vector<string> ShuntYardAlgo(vector<string> tokens);
	double ReversePolNotationAlgo(vector<string> tokens);

};

