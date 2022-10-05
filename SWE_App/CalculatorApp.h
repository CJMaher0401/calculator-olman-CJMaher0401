#pragma once

#include "AppWindow.h"
#include "wx/wx.h"

class CalculatorApp : public wxApp
{
	AppWindow* Win = nullptr;

public:

	virtual bool OnInit();

};

