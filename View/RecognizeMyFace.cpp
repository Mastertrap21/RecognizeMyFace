#include "stdafx.h"
#include "../MyForm.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include "windows.h"

#using <mscorlib.dll>
#using <System.Windows.Forms.dll>

using namespace System;
using namespace System::Windows::Forms;
using namespace cv;
using namespace std;

using namespace RecognizeMyFace;


[STAThread]
int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

	MyForm^ form = gcnew MyForm();
    Application::Run(form);
    return 0;
}