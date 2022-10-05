#include "CalculatorApp.h"

wxIMPLEMENT_APP(CalculatorApp);

bool CalculatorApp::OnInit()
{
	Win = new AppWindow();
	Win->Show();

	return true;
}
