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
