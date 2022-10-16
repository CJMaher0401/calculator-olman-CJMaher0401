#include "CalcProcessor.h"
#include "AppWindow.h"
#include <vector>
#include <string>

using namespace std;

ShuntYard

CalcProcessor* CalcProcessor::GetInstance()
{
	if (_calcProcessor == nullptr)
	{
		_calcProcessor = new CalcProcessor();
	}
	return _calcProcessor;
}
