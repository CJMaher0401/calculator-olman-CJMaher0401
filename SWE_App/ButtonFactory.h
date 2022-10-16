#pragma once
#include "wx/wx.h"
#include "AppWindow.h"

class ButtonFactory
{
public:

	static wxButton* CreateZeroButton(wxWindow *window);
	static wxButton* CreateOneButton(wxWindow *window);
	static wxButton* CreateTwoButton(wxWindow *window);
	static wxButton* CreateThreeButton(wxWindow *window);
	static wxButton* CreateFourButton(wxWindow *window);
	static wxButton* CreateFiveButton(wxWindow *window);
	static wxButton* CreateSixButton(wxWindow *window);
	static wxButton* CreateSevenButton(wxWindow *window);
	static wxButton* CreateEightButton(wxWindow *window);
	static wxButton* CreateNineButton(wxWindow *window);

	static wxButton* CreateADDButton(wxWindow *window);
	static wxButton* CreateSUBButton(wxWindow *window);
	static wxButton* CreateMULTButton(wxWindow *window);
	static wxButton* CreateDIVIButton(wxWindow *window);
	static wxButton* CreateEQUALButton(wxWindow *window);
	static wxButton* CreateCLEARButton(wxWindow *window);
	static wxButton* CreatePLUSandMINButton(wxWindow *window);

	static wxButton* CreateLPAREButton(wxWindow *window);
	static wxButton* CreateRPAREButton(wxWindow *window);
	static wxButton* CreateMODButton(wxWindow *window);
	static wxButton* CreateSINButton(wxWindow *window);
	static wxButton* CreateCOSButton(wxWindow *window);
	static wxButton* CreateTANButton(wxWindow *window);

	wxDECLARE_EVENT_TABLE();

	ButtonFactory(wxWindow *window);

};

