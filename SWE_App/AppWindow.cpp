#include "AppWindow.h"
#include <string>
#include <vector>
#include <cstring>
#include <iomanip>
#include <math.h>

using namespace std;

wxBEGIN_EVENT_TABLE(AppWindow, wxFrame)
	EVT_BUTTON(0, OnButtonClicked)
	EVT_BUTTON(1, OnButtonClicked)
	/*EVT_BUTTON(2, OnButtonClicked)
	EVT_BUTTON(3, OnButtonClicked)
	EVT_BUTTON(4, OnButtonClicked)
	EVT_BUTTON(5, OnButtonClicked)
	EVT_BUTTON(6, OnButtonClicked)
	EVT_BUTTON(7, OnButtonClicked)
	EVT_BUTTON(8, OnButtonClicked)
	EVT_BUTTON(9, OnButtonClicked)*/
	EVT_BUTTON(101, OnButtonClicked)
	/*EVT_BUTTON(102, OnButtonClicked)
	EVT_BUTTON(103, OnButtonClicked)
	EVT_BUTTON(104, OnButtonClicked)*/
	EVT_BUTTON(105, OnButtonClicked)
	/*EVT_BUTTON(106, OnButtonClicked)*/
wxEND_EVENT_TABLE()

AppWindow::AppWindow() : 
	wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400, 200), wxSize(500,500) )
{
	 Zero = new wxButton(this, 0, "0", wxPoint(100, 350), wxSize(50, 50));
	 One = new wxButton(this, 1,"1", wxPoint(25,275), wxSize(50,50));
	 Two = new wxButton(this, 2,"2", wxPoint(100,275), wxSize(50,50));
	 Three = new wxButton(this, 3,"3", wxPoint(175,275), wxSize(50,50));
	 Four = new wxButton(this, 4,"4", wxPoint(25,200), wxSize(50,50));
	 Five = new wxButton(this, 5,"5", wxPoint(100,200), wxSize(50,50));
	 Six = new wxButton(this, 6,"6", wxPoint(175,200), wxSize(50,50));
	 Seven = new wxButton(this, 7,"7", wxPoint(25,125), wxSize(50,50));
	 Eight = new wxButton(this, 8,"8", wxPoint(100,125), wxSize(50,50));
	 Nine = new wxButton(this, 9,"9", wxPoint(175,125), wxSize(50,50));

	 Add = new wxButton(this, 101,"+", wxPoint(275,125), wxSize(50,50));
	 Subtract = new wxButton(this, 102,"-", wxPoint(350,125), wxSize(50,50));
	 Multiply = new wxButton(this, 103,"*", wxPoint(275,200), wxSize(50,50));
	 Divide = new wxButton(this, 104,"/", wxPoint(350,200), wxSize(50,50));
	 Equal = new wxButton(this, 105,"=", wxPoint(175,350), wxSize(50,50));
	 Clear = new wxButton(this, 106,"C", wxPoint(25,350), wxSize(50,50));

	 Lparetheses = new wxButton(this, 201,"(", wxPoint(275,275), wxSize(50,50));
	 Rparetheses = new wxButton(this, 202,")", wxPoint(350,275), wxSize(50,50));
	 Mod = new wxButton(this, 203,"Mod", wxPoint(425,125), wxSize(50,50));
	 Sin = new wxButton(this, 204,"Sin", wxPoint(425,200), wxSize(50,50));
	 Cos = new wxButton(this, 205,"Cos", wxPoint(425,275), wxSize(50,50));
	 Tan = new wxButton(this, 206,"Tan", wxPoint(425,350), wxSize(50,50));

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
			temp = ((temp * 10) + 1);
			Inputs[CurrElement] = to_string(temp);
		}

	}
	if (evt.GetId() == 101)
	{
		Textbox->AppendText("+");
		evt.Skip();
		Inputs.push_back("+");
		NewNum = true;
	}
	if (evt.GetId() == 105)
	{
		Textbox->AppendText("=");
		evt.Skip();
			int a;
			a = stoi(Inputs[0]);
			int b;
			b = stoi(Inputs[2]);
			Sum = a + b;
			Textbox->AppendText(to_string(Sum));
	}
	//if (evt.GetId() == 2)
	//{
	//	Textbox->AppendText("2");
	//	evt.Skip();
	//	if (CurNum == true)
	//	{
	//		Num1 = (Num1 * 10) + 2;
	//	}
	//	else
	//	{
	//		Num2 = (Num2 * 10) + 2;
	//	}
	//}
	//if (evt.GetId() == 3)
	//{
	//	Textbox->AppendText("3");
	//	evt.Skip();
	//	if (CurNum == true)
	//	{
	//		Num1 = (Num1 * 10) + 3;
	//	}
	//	else
	//	{
	//		Num2 = (Num2 * 10) + 3;
	//	}
	//}
	//if (evt.GetId() == 4)
	//{
	//	Textbox->AppendText("4");
	//	evt.Skip();
	//	if (CurNum == true)
	//	{
	//		Num1 = (Num1 * 10) + 4;
	//	}
	//	else
	//	{
	//		Num2 = (Num2 * 10) + 4;
	//	}
	//}
	//if (evt.GetId() == 5)
	//{
	//	Textbox->AppendText("5");
	//	evt.Skip();
	//	if (CurNum == true)
	//	{
	//		Num1 = (Num1 * 10) + 5;
	//	}
	//	else
	//	{
	//		Num2 = (Num2 * 10) + 5;
	//	}
	//}
	//if (evt.GetId() == 6)
	//{
	//	Textbox->AppendText("6");
	//	evt.Skip();
	//	if (CurNum == true)
	//	{
	//		Num1 = (Num1 * 10) + 6;
	//	}
	//	else
	//	{
	//		Num2 = (Num2 * 10) + 6;
	//	}
	//}
	//if (evt.GetId() == 7)
	//{
	//	Textbox->AppendText("7");
	//	evt.Skip();
	//	if (CurNum == true)
	//	{
	//		Num1 = (Num1 * 10) + 7;
	//	}
	//	else
	//	{
	//		Num2 = (Num2 * 10) + 7;
	//	}
	//}
	//if (evt.GetId() == 8)
	//{
	//	Textbox->AppendText("8");
	//	evt.Skip();
	//	if (CurNum == true)
	//	{
	//		Num1 = (Num1 * 10) + 8;
	//	}
	//	else
	//	{
	//		Num2 = (Num2 * 10) + 8;
	//	}
	//}
	//if (evt.GetId() == 9)
	//{
	//	Textbox->AppendText("9");
	//	evt.Skip();
	//	if (CurNum == true)
	//	{
	//		Num1 = (Num1 * 10) + 9;
	//	}
	//	else
	//	{
	//		Num2 = (Num2 * 10) + 9;
	//	}
	//}
	//if (evt.GetId() == 101)
	//{
	//	Textbox->AppendText("+");
	//	evt.Skip();
	//	CurNum = false;
	//	Operator = 1;
	//}
	//if (evt.GetId() == 102)
	//{
	//	Textbox->AppendText("-");
	//	evt.Skip();
	//	CurNum = false;
	//	Operator = 2;
	//}
	//if (evt.GetId() == 103)
	//{
	//	Textbox->AppendText("*");
	//	evt.Skip();
	//	CurNum = false;
	//	Operator = 3;
	//}
	//if (evt.GetId() == 104)
	//{
	//	Textbox->AppendText("/");
	//	evt.Skip();
	//	CurNum = false;
	//	Operator = 4;
	//}
	//if (evt.GetId() == 105)
	//{
	//	Textbox->AppendText("=");
	//	evt.Skip();
	//	if (Operator == 1)
	//	{
	//		Sum = Num1 + Num2;
	//		Textbox->AppendText(std::to_string(Sum));
	//	}
	//	if (Operator == 2)
	//	{
	//		Sum = Num1 - Num2;
	//		Textbox->AppendText(std::to_string(Sum));
	//	}
	//	if (Operator == 3)
	//	{
	//		Sum = Num1 * Num2;
	//		Textbox->AppendText(std::to_string(Sum));
	//	}
	//	if (Operator == 4)
	//	{
	//		SumRem = ceilf(((float)Num1 / (float)Num2) * 100) / 100;
	//		Textbox->AppendText(std::to_string(SumRem));
	//	}
	//}
	//if (evt.GetId() == 106)
	//{

	//	Textbox->Clear();
	//	Num1 = 0;
	//	Num2 = 0;
	//	CurNum = true;
	//}
}