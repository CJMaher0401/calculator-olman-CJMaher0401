#include "AppWindow.h"
#include "ButtonFactory.h"
#include <string>
#include <cstring>
#include <iomanip>
#include <math.h>

wxBEGIN_EVENT_TABLE(AppWindow, wxFrame)
	EVT_BUTTON(0, OnButtonClicked)
	EVT_BUTTON(1, OnButtonClicked)
	EVT_BUTTON(2, OnButtonClicked)
	EVT_BUTTON(3, OnButtonClicked)
	EVT_BUTTON(4, OnButtonClicked)
	EVT_BUTTON(5, OnButtonClicked)
	EVT_BUTTON(6, OnButtonClicked)
	EVT_BUTTON(7, OnButtonClicked)
	EVT_BUTTON(8, OnButtonClicked)
	EVT_BUTTON(9, OnButtonClicked)
	EVT_BUTTON(101, OnButtonClicked)
	EVT_BUTTON(102, OnButtonClicked)
	EVT_BUTTON(103, OnButtonClicked)
	EVT_BUTTON(104, OnButtonClicked)
	EVT_BUTTON(105, OnButtonClicked)
	EVT_BUTTON(106, OnButtonClicked)
wxEND_EVENT_TABLE()

AppWindow::AppWindow() : 
	 wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400, 200), wxSize(500,500) )
{
	 Zero = ButtonFactory::CreateZeroButton(this);
	 One = ButtonFactory::CreateOneButton(this);
	 Two = ButtonFactory::CreateTwoButton(this);
	 Three = ButtonFactory::CreateThreeButton(this);
	 Four = ButtonFactory::CreateFourButton(this);
	 Five = ButtonFactory::CreateFiveButton(this);
	 Six = ButtonFactory::CreateSixButton(this);
	 Seven = ButtonFactory::CreateSevenButton(this);
	 Eight = ButtonFactory::CreateEightButton(this);
	 Nine = ButtonFactory::CreateNineButton(this);

	 Add = ButtonFactory::CreateADDButton(this);
	 Subtract = ButtonFactory::CreateSUBButton(this);
	 Multiply = ButtonFactory::CreateMULTButton(this);
	 Divide = ButtonFactory::CreateDIVIButton(this);
	 Equal = ButtonFactory::CreateEQUALButton(this);
	 Clear = ButtonFactory::CreateCLEARButton(this);
	 PlusAndMin = ButtonFactory::CreatePLUSandMINButton(this);

	 Lparetheses = ButtonFactory::CreateLPAREButton(this);
	 Rparetheses = ButtonFactory::CreateRPAREButton(this);
	 Mod = ButtonFactory::CreateMODButton(this);
	 Sin = ButtonFactory::CreateSINButton(this);
	 Cos = ButtonFactory::CreateCOSButton(this);
	 Tan = ButtonFactory::CreateTANButton(this);

	 Textbox = new wxTextCtrl(this, 300, "", wxPoint(25, 10), wxSize(450, 100));

}

void AppWindow::OnButtonClicked(wxCommandEvent& evt)
{
	if (evt.GetId() == 0)
	{
		Textbox->AppendText("0");
		evt.Skip();
		if (CurNum == true)
		{
			Num1 = (Num1 * 10);
		}
		else
		{
			Num2 = (Num2 * 10);
		}
	}
	if (evt.GetId() == 1)
	{
		Textbox->AppendText("1");
		evt.Skip();
		if (CurNum == true)
		{
			Num1 = (Num1 * 10) + 1;
		}
		else
		{
			Num2 = (Num2 * 10) + 1;
		}
	}
	if (evt.GetId() == 2)
	{
		Textbox->AppendText("2");
		evt.Skip();
		if (CurNum == true)
		{
			Num1 = (Num1 * 10) + 2;
		}
		else
		{
			Num2 = (Num2 * 10) + 2;
		}
	}
	if (evt.GetId() == 3)
	{
		Textbox->AppendText("3");
		evt.Skip();
		if (CurNum == true)
		{
			Num1 = (Num1 * 10) + 3;
		}
		else
		{
			Num2 = (Num2 * 10) + 3;
		}
	}
	if (evt.GetId() == 4)
	{
		Textbox->AppendText("4");
		evt.Skip();
		if (CurNum == true)
		{
			Num1 = (Num1 * 10) + 4;
		}
		else
		{
			Num2 = (Num2 * 10) + 4;
		}
	}
	if (evt.GetId() == 5)
	{
		Textbox->AppendText("5");
		evt.Skip();
		if (CurNum == true)
		{
			Num1 = (Num1 * 10) + 5;
		}
		else
		{
			Num2 = (Num2 * 10) + 5;
		}
	}
	if (evt.GetId() == 6)
	{
		Textbox->AppendText("6");
		evt.Skip();
		if (CurNum == true)
		{
			Num1 = (Num1 * 10) + 6;
		}
		else
		{
			Num2 = (Num2 * 10) + 6;
		}
	}
	if (evt.GetId() == 7)
	{
		Textbox->AppendText("7");
		evt.Skip();
		if (CurNum == true)
		{
			Num1 = (Num1 * 10) + 7;
		}
		else
		{
			Num2 = (Num2 * 10) + 7;
		}
	}
	if (evt.GetId() == 8)
	{
		Textbox->AppendText("8");
		evt.Skip();
		if (CurNum == true)
		{
			Num1 = (Num1 * 10) + 8;
		}
		else
		{
			Num2 = (Num2 * 10) + 8;
		}
	}
	if (evt.GetId() == 9)
	{
		Textbox->AppendText("9");
		evt.Skip();
		if (CurNum == true)
		{
			Num1 = (Num1 * 10) + 9;
		}
		else
		{
			Num2 = (Num2 * 10) + 9;
		}
	}
	if (evt.GetId() == 101)
	{
		Textbox->AppendText("+");
		evt.Skip();
		CurNum = false;
		Operator = 1;
	}
	if (evt.GetId() == 102)
	{
		Textbox->AppendText("-");
		evt.Skip();
		CurNum = false;
		Operator = 2;
	}
	if (evt.GetId() == 103)
	{
		Textbox->AppendText("*");
		evt.Skip();
		CurNum = false;
		Operator = 3;
	}
	if (evt.GetId() == 104)
	{
		Textbox->AppendText("/");
		evt.Skip();
		CurNum = false;
		Operator = 4;
	}
	if (evt.GetId() == 105)
	{
		Textbox->AppendText("=");
		evt.Skip();
		if (Operator == 1)
		{
			Sum = Num1 + Num2;
			Textbox->AppendText(std::to_string(Sum));
		}
		if (Operator == 2)
		{
			Sum = Num1 - Num2;
			Textbox->AppendText(std::to_string(Sum));
		}
		if (Operator == 3)
		{
			Sum = Num1 * Num2;
			Textbox->AppendText(std::to_string(Sum));
		}
		if (Operator == 4)
		{
			SumRem = ceilf(((float)Num1 / (float)Num2) * 100) / 100;
			Textbox->AppendText(std::to_string(SumRem));
		}
	}
	if (evt.GetId() == 106)
	{

		Textbox->Clear();
		Num1 = 0;
		Num2 = 0;
		CurNum = true;
	}
}