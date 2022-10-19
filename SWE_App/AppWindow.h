#pragma once

#include "wx/wx.h"
#include <vector>
#include <string>

using namespace std;

class AppWindow : public wxFrame 
{
	wxButton* Zero = nullptr;
	wxButton* One = nullptr;
	wxButton* Two = nullptr;
	wxButton* Three = nullptr;
	wxButton* Four = nullptr;
	wxButton* Five = nullptr;
	wxButton* Six = nullptr;
	wxButton* Seven = nullptr;
	wxButton* Eight = nullptr;
	wxButton* Nine = nullptr;

	wxButton* Add = nullptr;
	wxButton* Subtract = nullptr;
	wxButton* Multiply = nullptr;
	wxButton* Divide = nullptr;
	wxButton* Equal = nullptr;
	wxButton* Clear = nullptr;
	wxButton* PlusAndMin = nullptr;

	wxButton* Lparetheses = nullptr;
	wxButton* Rparetheses = nullptr;
	wxButton* Mod = nullptr;
	wxButton* Sin = nullptr;
	wxButton* Cos = nullptr;
	wxButton* Tan = nullptr;

	wxTextCtrl* Textbox = nullptr;

	vector <string> Inputs;
	int CurrElement;
	float Sum;
	bool NewNum = true;
	float Operator;

	wxDECLARE_EVENT_TABLE();

public:
	void OnButtonClicked(wxCommandEvent& evt);
	AppWindow();

	
};

