#include "AppWindow.h"

AppWindow::AppWindow() : 
	wxFrame(nullptr, wxID_ANY, "Widgets!", wxPoint(400, 200), wxSize(500,500) )
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


}