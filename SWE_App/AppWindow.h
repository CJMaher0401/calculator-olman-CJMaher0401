#pragma once

#include"wx/wx.h"
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

	wxButton* Lparetheses = nullptr;
	wxButton* Rparetheses = nullptr;
	wxButton* Mod = nullptr;
	wxButton* Sin = nullptr;
	wxButton* Cos = nullptr;
	wxButton* Tan = nullptr;

	wxTextCtrl* Textbox = nullptr;

	vector<string> Inputs{ 3 };
	int CurrElement = 0;
	bool NewNum = true;

	int Sum = 0;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();

public:
	AppWindow();

	
};

