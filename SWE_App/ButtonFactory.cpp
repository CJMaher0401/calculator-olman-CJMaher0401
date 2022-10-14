#include "ButtonFactory.h"
#include "AppWindow.h"
#include "CalculatorApp.h"
#include "wx/wx.h"


//void CreateZeroButton(wxFrame *window)
//{
//	wxButton* Zero = new wxButton (window, 0 , "0", wxPoint(100, 350), wxSize(50, 50));
//}

wxButton* ButtonFactory::CreateZeroButton(wxWindow *window)
{
	wxButton* Zero = new wxButton(window, 0, "0", wxPoint(100, 350), wxSize(50, 50));
	return Zero;
}

wxButton* ButtonFactory::CreateOneButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateTwoButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateThreeButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateFourButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateFiveButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateSixButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateSevenButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateEightButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateNineButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateADDButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateSUBButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateMULTButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateDIVIButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateEQUALButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateCLEARButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreatePLUSandMINButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateLPAREButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateRPAREButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateMODButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateSINButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateCOSButton(wxWindow* window)
{
	return nullptr;
}

wxButton* ButtonFactory::CreateTANButton(wxWindow* window)
{
	return nullptr;
}
