#include "AppWindow.h"
#include "ButtonFactory.h"
#include <string>
#include <cstring>
#include <iomanip>
#include <math.h>
#include "CalcProcessor.h"

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
	EVT_BUTTON(107, OnButtonClicked)
	EVT_BUTTON(201, OnButtonClicked)
	EVT_BUTTON(202, OnButtonClicked)
	EVT_BUTTON(203, OnButtonClicked)
	EVT_BUTTON(204, OnButtonClicked)
	EVT_BUTTON(205, OnButtonClicked)
	EVT_BUTTON(206, OnButtonClicked)
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
		if (NewNum == true)
		{
			Inputs.push_back("0");
			NewNum = false;
		}
		else
		{
			CurrElement = Inputs.size() - 1;
			int temp = stoi(Inputs[CurrElement]);
			temp = (temp * 10);
			Inputs[CurrElement] = to_string(temp);
		}
	}
	if (evt.GetId() == 1)
	{
		Textbox->AppendText("1");
		evt.Skip();
		if (NewNum == true)
		{
			Inputs.push_back("1");
			NewNum = false;
		}
		else
		{
			CurrElement = Inputs.size() - 1;
			int temp = stoi(Inputs[CurrElement]);
			temp = (temp * 10) + 1;
			Inputs[CurrElement] = to_string(temp);
		}
	}
	if (evt.GetId() == 2)
	{
		Textbox->AppendText("2");
		evt.Skip();
		if (NewNum == true)
		{
			Inputs.push_back("2");
			NewNum = false;
		}
		else
		{
			CurrElement = Inputs.size() - 1;
			int temp = stoi(Inputs[CurrElement]);
			temp = (temp * 10) + 2;
			Inputs[CurrElement] = to_string(temp);
		}
			
	}
	if (evt.GetId() == 3)
	{
		Textbox->AppendText("3");
		evt.Skip();
		if (NewNum == true)
		{
			Inputs.push_back("3");
			NewNum = false;
		}
		else
		{
			CurrElement = Inputs.size() - 1;
			int temp = stoi(Inputs[CurrElement]);
			temp = (temp * 10) + 3;
			Inputs[CurrElement] = to_string(temp);
		}
	}
	if (evt.GetId() == 4)
	{
		Textbox->AppendText("4");
		evt.Skip();
		if (NewNum == true)
		{
			Inputs.push_back("4");
			NewNum = false;
		}
		else
		{
			CurrElement = Inputs.size() - 1;
			int temp = stoi(Inputs[CurrElement]);
			temp = (temp * 10) + 4;
			Inputs[CurrElement] = to_string(temp);
		}
	}
	if (evt.GetId() == 5)
	{
		Textbox->AppendText("5");
		evt.Skip();
		if (NewNum == true)
		{
			Inputs.push_back("5");
			NewNum = false;
		}
		else
		{
			CurrElement = Inputs.size() - 1;
			int temp = stoi(Inputs[CurrElement]);
			temp = (temp * 10) + 5;
			Inputs[CurrElement] = to_string(temp);
		}
	}
	if (evt.GetId() == 6)
	{
		Textbox->AppendText("6");
		evt.Skip();
		if (NewNum == true)
		{
			Inputs.push_back("6");
			NewNum = false;
		}
		else
		{
			CurrElement = Inputs.size() - 1;
			int temp = stoi(Inputs[CurrElement]);
			temp = (temp * 10) + 6;
			Inputs[CurrElement] = to_string(temp);
		}
	}
	if (evt.GetId() == 7)
	{
		Textbox->AppendText("7");
		evt.Skip();
		if (NewNum == true)
		{
			Inputs.push_back("7");
			NewNum = false;
		}
		else
		{
			CurrElement = Inputs.size() - 1;
			int temp = stoi(Inputs[CurrElement]);
			temp = (temp * 10) + 7;
			Inputs[CurrElement] = to_string(temp);
		}
	}
	if (evt.GetId() == 8)
	{
		Textbox->AppendText("8");
		evt.Skip();
		if (NewNum == true)
		{
			Inputs.push_back("8");
			NewNum = false;
		}
		else
		{
			CurrElement = Inputs.size() - 1;
			int temp = stoi(Inputs[CurrElement]);
			temp = (temp * 10) + 8;
			Inputs[CurrElement] = to_string(temp);
		}
	}
	if (evt.GetId() == 9)
	{
		Textbox->AppendText("9");
		evt.Skip();
		if (NewNum == true)
		{
			Inputs.push_back("9");
			NewNum = false;
		}
		else
		{
			CurrElement = Inputs.size() - 1;
			int temp = stoi(Inputs[CurrElement]);
			temp = (temp * 10) + 9;
			Inputs[CurrElement] = to_string(temp);
		}
	}
	if (evt.GetId() == 101)
	{
		Textbox->AppendText("+");
		evt.Skip();
		Inputs.push_back("+");
		NewNum = true;	
		Operator = 1;
	}
	if (evt.GetId() == 102)
	{
		Textbox->AppendText("-");
		evt.Skip();
		Inputs.push_back("-");
		NewNum = true;
	}
	if (evt.GetId() == 103)
	{
		Textbox->AppendText("*");
		evt.Skip();
		Inputs.push_back("*");
		NewNum = true;
	}
	if (evt.GetId() == 104)
	{
		Textbox->AppendText("/");
		evt.Skip();
		Inputs.push_back("/");
		NewNum = true;
	}
	if (evt.GetId() == 105)
	{
		Textbox->AppendText("=");
		evt.Skip();


		vector<string> rpn;
		CalcProcessor::ShuntYardAlgo(Inputs, Inputs.size(), rpn);
		float ans = CalcProcessor::RPNinput2FloatOutput(rpn);
		Textbox->AppendText(to_string(ans));

	}
	if (evt.GetId() == 106)
	{
		NewNum = true;
		Textbox->Clear();
		Inputs.clear();
	}
	if (evt.GetId() == 107)
	{
		Textbox->AppendText("-");
		evt.Skip();
		Inputs.push_back("-");
		NewNum = true;
	}
	if (evt.GetId() == 201)
	{
		Textbox->AppendText("(");
		evt.Skip();
		Inputs.push_back("(");
		NewNum = true;
	}
	if (evt.GetId() == 202)
	{
		Textbox->AppendText(")");
		evt.Skip();
		Inputs.push_back(")");
		NewNum = true;
	}
	if (evt.GetId() == 203)
	{
		Textbox->AppendText("%");
		evt.Skip();
		Inputs.push_back("%");
		NewNum = true;
	}
	if (evt.GetId() == 204)
	{
		Textbox->AppendText("Sin");
		evt.Skip();
		Inputs.push_back("S");
		NewNum = true;
	}
	if (evt.GetId() == 205)
	{
		Textbox->AppendText("Cos");
		evt.Skip();
		Inputs.push_back("C");
		NewNum = true;
	}
	if (evt.GetId() == 206)
	{
		Textbox->AppendText("Tan");
		evt.Skip();
		Inputs.push_back("T");
		NewNum = true;
	}
}