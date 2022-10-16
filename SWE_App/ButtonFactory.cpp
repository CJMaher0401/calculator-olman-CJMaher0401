#include "ButtonFactory.h"
#include "AppWindow.h"
#include "CalculatorApp.h"
#include "wx/wx.h"

using namespace std;

wxButton* ButtonFactory::CreateZeroButton(wxWindow *window)
{
	wxButton* Zero = new wxButton(window, 0, "0", wxPoint(100, 350), wxSize(50, 50));
	return Zero;
}

wxButton* ButtonFactory::CreateOneButton(wxWindow *window)
{
	wxButton* One = new wxButton(window, 1, "1", wxPoint(25, 275), wxSize(50, 50));
	return One;
}

wxButton* ButtonFactory::CreateTwoButton(wxWindow *window)
{
	wxButton* Two = new wxButton(window, 2, "2", wxPoint(100, 275), wxSize(50, 50));
	return Two;
}

wxButton* ButtonFactory::CreateThreeButton(wxWindow *window)
{
	wxButton* Three = new wxButton(window, 3, "3", wxPoint(175, 275), wxSize(50, 50));
	return Three;
}

wxButton* ButtonFactory::CreateFourButton(wxWindow *window)
{
	wxButton* Four = new wxButton(window, 4, "4", wxPoint(25, 200), wxSize(50, 50));
	return Four;
}

wxButton* ButtonFactory::CreateFiveButton(wxWindow *window)
{
	wxButton* Five = new wxButton(window, 5, "5", wxPoint(100, 200), wxSize(50, 50));
	return Five;
}

wxButton* ButtonFactory::CreateSixButton(wxWindow *window)
{
	wxButton* Six = new wxButton(window, 6, "6", wxPoint(175, 200), wxSize(50, 50));
	return Six;
}

wxButton* ButtonFactory::CreateSevenButton(wxWindow *window)
{
	wxButton* Seven = new wxButton(window, 7, "7", wxPoint(25, 125), wxSize(50, 50));
	return Seven;
}

wxButton* ButtonFactory::CreateEightButton(wxWindow *window)
{
	wxButton* Eight = new wxButton(window, 8, "8", wxPoint(100, 125), wxSize(50, 50));
	return Eight;
}

wxButton* ButtonFactory::CreateNineButton(wxWindow *window)
{
	wxButton* Nine = new wxButton(window, 9, "9", wxPoint(175, 125), wxSize(50, 50));
	return Nine;
}

wxButton* ButtonFactory::CreateADDButton(wxWindow *window)
{
	wxButton* Add = new wxButton(window, 101, "+", wxPoint(275, 125), wxSize(50, 50));
	return Add;
}

wxButton* ButtonFactory::CreateSUBButton(wxWindow *window)
{
	wxButton* Subtract = new wxButton(window, 102, "-", wxPoint(350, 125), wxSize(50, 50));
	return Subtract;
}

wxButton* ButtonFactory::CreateMULTButton(wxWindow *window)
{
	wxButton* Multiply = new wxButton(window, 103, "*", wxPoint(275, 200), wxSize(50, 50));
	return Multiply;
}

wxButton* ButtonFactory::CreateDIVIButton(wxWindow *window)
{
	wxButton* Divide = new wxButton(window, 104, "/", wxPoint(350, 200), wxSize(50, 50));
	return Divide;
}

wxButton* ButtonFactory::CreateEQUALButton(wxWindow *window)
{
	wxButton* Equal = new wxButton(window, 105, "=", wxPoint(175, 350), wxSize(50, 50));
	return Equal;
}

wxButton* ButtonFactory::CreateCLEARButton(wxWindow *window)
{
	wxButton* Clear = new wxButton(window, 106, "C", wxPoint(25, 350), wxSize(50, 50));
	return Clear;
}

wxButton* ButtonFactory::CreatePLUSandMINButton(wxWindow *window)
{
	wxButton* PlusAndMin = new wxButton(window, 107, "+/-", wxPoint(275, 350), wxSize(50, 50));
	return PlusAndMin;
}

wxButton* ButtonFactory::CreateLPAREButton(wxWindow *window)
{
	wxButton* Lparetheses = new wxButton(window, 201, "(", wxPoint(275, 275), wxSize(50, 50));
	return Lparetheses;
}

wxButton* ButtonFactory::CreateRPAREButton(wxWindow *window)
{
	wxButton* Rparetheses = new wxButton(window, 202, ")", wxPoint(350, 275), wxSize(50, 50));
	return Rparetheses;
}

wxButton* ButtonFactory::CreateMODButton(wxWindow *window)
{
	wxButton* Mod = new wxButton(window, 203, "Mod", wxPoint(425, 125), wxSize(50, 50));
	return Mod;
}

wxButton* ButtonFactory::CreateSINButton(wxWindow *window)
{
	wxButton* Sin = new wxButton(window, 204, "Sin", wxPoint(425, 200), wxSize(50, 50));
	return Sin;
}

wxButton* ButtonFactory::CreateCOSButton(wxWindow *window)
{
	wxButton* Cos = new wxButton(window, 205, "Cos", wxPoint(425, 275), wxSize(50, 50));
	return Cos;
}

wxButton* ButtonFactory::CreateTANButton(wxWindow *window)
{
	wxButton* Tan = new wxButton(window, 206, "Tan", wxPoint(425, 350), wxSize(50, 50));
	return Tan;
}