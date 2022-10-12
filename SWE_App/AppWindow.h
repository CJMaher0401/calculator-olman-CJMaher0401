#pragma once

#include"wx/wx.h"

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

	int Num1 = 0;
	int Num2 = 0;
	bool CurNum = true;
	
	int Operator;
	int Sum;
	/*float SumRem;*/

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();

public:
	AppWindow();

	
};

