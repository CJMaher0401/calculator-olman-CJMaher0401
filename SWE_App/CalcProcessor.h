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
	void ShuntYardAlgo(string inputs);
	void ReversePolNotationAlgo(string inputs);
};

