#pragma once
#include "wx/wx.h"
#include "AppWindow.h"

class ButtonFactory
{
public:

	static wxButton* CreateZeroButton(wxWindow *window);
	static wxButton* CreateOneButton();
	static wxButton* CreateTwoButton();
	static wxButton* CreateThreeButton();
	static wxButton* CreateFourButton();
	static wxButton* CreateFiveButton();
	static wxButton* CreateSixButton();
	static wxButton* CreateSevenButton();
	static wxButton* CreateEightButton();
	static wxButton* CreateNineButton();

	static wxButton* CreateADDButton();
	static wxButton* CreateSUBButton();
	static wxButton* CreateMULTButton();
	static wxButton* CreateDIVIButton();
	static wxButton* CreateEQUALButton();
	static wxButton* CreateCLEARButton();
	static wxButton* CreatePLUSandMINButton();

	static wxButton* CreateLPAREButton();
	static wxButton* CreateRPAREButton();
	static wxButton* CreateMODButton();
	static wxButton* CreateSINButton();
	static wxButton* CreateCOSButton();
	static wxButton* CreateTANButton();


	ButtonFactory(wxWindow *window);

};

