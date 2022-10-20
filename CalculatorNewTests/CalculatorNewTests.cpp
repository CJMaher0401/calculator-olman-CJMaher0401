#include "pch.h"
#include "CppUnitTest.h"
#include "../SWE_App/ButtonFactory.h"
#include "../SWE_App/CalcProcessor.h"
#include <string>
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorNewTests
{
	TEST_CLASS(CalculatorNewTests)
	{
	public:
		
		TEST_METHOD(CalcProcessorTests)
		{
			vector<string> rpn;
			//Addition
			vector<string> Add{ "11", "+", "19", "+","200" };
			CalcProcessor::ShuntYardAlgo(Add, Add.size(), rpn);
			double ans1 = CalcProcessor::RPNinput2FloatOutput(rpn);
			Assert::AreEqual(230.000000, ans1);

			//Subtraction
			vector<string> Sub{ "120", "-", "93", "-", "13" };
			CalcProcessor::ShuntYardAlgo(Sub, Sub.size(), rpn);
			double ans2 = CalcProcessor::RPNinput2FloatOutput(rpn);
			Assert::AreEqual(14.000000, ans2);

			//Multiplication
			vector<string> Mult{ "5", "*", "27", "*", "16" };
			CalcProcessor::ShuntYardAlgo(Mult, Mult.size(), rpn);
			double ans3 = CalcProcessor::RPNinput2FloatOutput(rpn);
			Assert::AreEqual(2160.000000, ans3);

			//Division
			vector<string> Divi{ "2000", "/", "100", "/", "10" };
			CalcProcessor::ShuntYardAlgo(Divi, Divi.size(), rpn);
			double ans4 = CalcProcessor::RPNinput2FloatOutput(rpn);
			Assert::AreEqual(2.000000, ans4);

			//Mod
			vector<string> Mod{ "5", "%", "2" };
			CalcProcessor::ShuntYardAlgo(Mod, Mod.size(), rpn);
			double ans5 = CalcProcessor::RPNinput2FloatOutput(rpn);
			Assert::AreEqual(1.000000, ans5);

			//Order of operations #1
			vector<string> OofOp1{ "11", "+", "11", "*", "(","2","*","3",")" };
			CalcProcessor::ShuntYardAlgo(OofOp1, OofOp1.size(), rpn);
			double ans6 = CalcProcessor::RPNinput2FloatOutput(rpn);
			Assert::AreEqual(77.000000, ans6);

			//Order of operations #2
			vector<string> OofOp2{ "(","25","/","5",")","*","100","+","(","50","-","25",")" };
			CalcProcessor::ShuntYardAlgo(OofOp2, OofOp2.size(), rpn);
			double ans7 = CalcProcessor::RPNinput2FloatOutput(rpn);
			Assert::AreEqual(525.000000, ans7);

			//Sin
			vector<string> sin{ "S","(","25",")" };
			CalcProcessor::ShuntYardAlgo(sin, sin.size(), rpn);
			double ans8 = CalcProcessor::RPNinput2FloatOutput(rpn);
			Assert::AreEqual(-0.132352, ans8, 0.000001);

			//Cos
			vector<string> cos{ "C","(","57",")" };
			CalcProcessor::ShuntYardAlgo(cos, cos.size(), rpn);
			double ans9 = CalcProcessor::RPNinput2FloatOutput(rpn);
			Assert::AreEqual(0.899867, ans9, 0.000001);

			//Tan
			vector<string> tan{ "T","(", "96",")" };
			CalcProcessor::ShuntYardAlgo(tan, tan.size(), rpn);
			double ans10 = CalcProcessor::RPNinput2FloatOutput(rpn);
			Assert::AreEqual(-5.451340, ans10, 0.000001);
		}

		TEST_METHOD(ButtonFactoryTests)
		{
			wxWindow* Win = nullptr;
			Win = new wxWindow;

			wxButton* Zero = ButtonFactory::CreateZeroButton(Win);
			Assert::AreEqual(0, Zero->GetId());

			wxButton* One = ButtonFactory::CreateOneButton(Win);
			Assert::AreEqual(1, One->GetId());

			wxButton* Two = ButtonFactory::CreateTwoButton(Win);
			Assert::AreEqual(2, Two->GetId());
			
			wxButton* Three = ButtonFactory::CreateThreeButton(Win);
			Assert::AreEqual(3, Three->GetId());

			wxButton* Four = ButtonFactory::CreateFourButton(Win);
			Assert::AreEqual(4, Four->GetId());

			wxButton* Plus = ButtonFactory::CreateADDButton(Win);
			Assert::AreEqual(101, Plus->GetId());

			wxButton* Minus = ButtonFactory::CreateSUBButton(Win);
			Assert::AreEqual(102, Minus->GetId());

			wxButton* Multi = ButtonFactory::CreateMULTButton(Win);
			Assert::AreEqual(103, Multi->GetId());

			wxButton* Divi = ButtonFactory::CreateDIVIButton(Win);
			Assert::AreEqual(104, Divi->GetId());

			wxButton* Sin = ButtonFactory::CreateSINButton(Win);
			Assert::AreEqual(204, Sin->GetId());
			
			/*wxButton* Zero = ButtonFactory::CreateZeroButton(NULL);
			if (Zero->GetId() == 0)
			{
				Assert::AreEqual(0, Zero->GetId());
			}
			
			wxButton* Zero = ButtonFactory::CreateZeroButton(NULL);
			if (Zero->GetId() == 0)
			{
				Assert::AreEqual(0, Zero->GetId());
			}

			wxButton* Zero = ButtonFactory::CreateZeroButton(NULL);
			if (Zero->GetId() == 0)
			{
				Assert::AreEqual(0, Zero->GetId());
			}

			wxButton* Zero = ButtonFactory::CreateZeroButton(NULL);
			if (Zero->GetId() == 0)
			{
				Assert::AreEqual(0, Zero->GetId());
			}

			wxButton* Zero = ButtonFactory::CreateZeroButton(NULL);
			if (Zero->GetId() == 0)
			{
				Assert::AreEqual(0, Zero->GetId());
			}

			wxButton* Zero = ButtonFactory::CreateZeroButton(NULL);
			if (Zero->GetId() == 0)
			{
				Assert::AreEqual(0, Zero->GetId());
			}

			wxButton* Zero = ButtonFactory::CreateZeroButton(NULL);
			if (Zero->GetId() == 0)
			{
				Assert::AreEqual(0, Zero->GetId());
			}

			wxButton* Zero = ButtonFactory::CreateZeroButton(NULL);
			if (Zero->GetId() == 0)
			{
				Assert::AreEqual(0, Zero->GetId());
			}

			wxButton* Zero = ButtonFactory::CreateZeroButton(NULL);
			if (Zero->GetId() == 0)
			{
				Assert::AreEqual(0, Zero->GetId());
			}*/
			

			
		}
	};
}
