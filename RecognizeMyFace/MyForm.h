#pragma once
#include <Controller\RecognizerCtr.h>
namespace RecognizeMyFace {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace RecognizeMyFace::Controller;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  webcamTimer;
	protected: 


	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Label^  welcomeLabel;
	public: System::Windows::Forms::PictureBox^  webcamPicture;
	private: 

	private: System::Windows::Forms::TableLayoutPanel^  welcomePanel;
	private: System::Windows::Forms::Panel^  webcamControlPanel;
	private: System::Windows::Forms::Button^  webcamStopButton;
	private: System::Windows::Forms::Label^  webcamFacesLabel;

	private: System::Windows::Forms::Panel^  webcamPanel;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  importToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  imageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  videoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  webcamToolStripMenuItem;
	private: System::Windows::Forms::Panel^  imagePanel;
	public: System::Windows::Forms::PictureBox^  imagePictureBox;
	private: 
	private: System::Windows::Forms::Panel^  imageControlPanel;
	public: 
	private: System::Windows::Forms::Label^  imageFacesLabel;
	private: System::Windows::Forms::Panel^  videoPanel;
	public: System::Windows::Forms::PictureBox^  videoPictureBox;
	private: 
	private: System::Windows::Forms::Panel^  videoControlPanel;
	public: 
	private: System::Windows::Forms::Label^  videoFacesLabel;
	private: System::Windows::Forms::Timer^  videoTimer;

	public: 



	private: 

	public: 

	private: 
	private: 

	public: 

	protected: 
		RecognizerCtr* recognizerCtr;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->webcamTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->welcomeLabel = (gcnew System::Windows::Forms::Label());
			this->webcamPicture = (gcnew System::Windows::Forms::PictureBox());
			this->welcomePanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->webcamControlPanel = (gcnew System::Windows::Forms::Panel());
			this->webcamStopButton = (gcnew System::Windows::Forms::Button());
			this->webcamFacesLabel = (gcnew System::Windows::Forms::Label());
			this->webcamPanel = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->importToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->videoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->webcamToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imagePanel = (gcnew System::Windows::Forms::Panel());
			this->imagePictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->imageControlPanel = (gcnew System::Windows::Forms::Panel());
			this->imageFacesLabel = (gcnew System::Windows::Forms::Label());
			this->videoPanel = (gcnew System::Windows::Forms::Panel());
			this->videoPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->videoControlPanel = (gcnew System::Windows::Forms::Panel());
			this->videoFacesLabel = (gcnew System::Windows::Forms::Label());
			this->videoTimer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->webcamPicture))->BeginInit();
			this->welcomePanel->SuspendLayout();
			this->webcamControlPanel->SuspendLayout();
			this->webcamPanel->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->imagePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->imagePictureBox))->BeginInit();
			this->imageControlPanel->SuspendLayout();
			this->videoPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->videoPictureBox))->BeginInit();
			this->videoControlPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// webcamTimer
			// 
			this->webcamTimer->Interval = 66;
			this->webcamTimer->Tick += gcnew System::EventHandler(this, &MyForm::webcamTimer_Tick);
			// 
			// welcomeLabel
			// 
			this->welcomeLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->welcomeLabel->AutoSize = true;
			this->welcomeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->welcomeLabel->Location = System::Drawing::Point(7, 169);
			this->welcomeLabel->Name = L"welcomeLabel";
			this->welcomeLabel->Size = System::Drawing::Size(928, 58);
			this->welcomeLabel->TabIndex = 1;
			this->welcomeLabel->Text = L"Welcome to Recognize My Face. If you want to recognize some faces import a pictur" 
				L"e, video or video stream from File->Import";
			this->welcomeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// webcamPicture
			// 
			this->webcamPicture->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webcamPicture->Location = System::Drawing::Point(0, 0);
			this->webcamPicture->Name = L"webcamPicture";
			this->webcamPicture->Size = System::Drawing::Size(742, 397);
			this->webcamPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->webcamPicture->TabIndex = 0;
			this->webcamPicture->TabStop = false;
			// 
			// welcomePanel
			// 
			this->welcomePanel->ColumnCount = 1;
			this->welcomePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->welcomePanel->Controls->Add(this->welcomeLabel, 0, 0);
			this->welcomePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->welcomePanel->Location = System::Drawing::Point(0, 24);
			this->welcomePanel->Name = L"welcomePanel";
			this->welcomePanel->RowCount = 1;
			this->welcomePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->welcomePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 397)));
			this->welcomePanel->Size = System::Drawing::Size(942, 397);
			this->welcomePanel->TabIndex = 2;
			this->welcomePanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// webcamControlPanel
			// 
			this->webcamControlPanel->Controls->Add(this->webcamStopButton);
			this->webcamControlPanel->Controls->Add(this->webcamFacesLabel);
			this->webcamControlPanel->Dock = System::Windows::Forms::DockStyle::Right;
			this->webcamControlPanel->Location = System::Drawing::Point(742, 0);
			this->webcamControlPanel->Name = L"webcamControlPanel";
			this->webcamControlPanel->Padding = System::Windows::Forms::Padding(20);
			this->webcamControlPanel->Size = System::Drawing::Size(200, 397);
			this->webcamControlPanel->TabIndex = 4;
			// 
			// webcamStopButton
			// 
			this->webcamStopButton->Location = System::Drawing::Point(26, 36);
			this->webcamStopButton->Name = L"webcamStopButton";
			this->webcamStopButton->Size = System::Drawing::Size(75, 23);
			this->webcamStopButton->TabIndex = 2;
			this->webcamStopButton->Text = L"Stop";
			this->webcamStopButton->UseVisualStyleBackColor = true;
			this->webcamStopButton->Click += gcnew System::EventHandler(this, &MyForm::webcamStopButton_Click);
			// 
			// webcamFacesLabel
			// 
			this->webcamFacesLabel->AutoSize = true;
			this->webcamFacesLabel->Location = System::Drawing::Point(23, 20);
			this->webcamFacesLabel->Name = L"webcamFacesLabel";
			this->webcamFacesLabel->Size = System::Drawing::Size(93, 13);
			this->webcamFacesLabel->TabIndex = 1;
			this->webcamFacesLabel->Text = L"Faces detected: 0";
			// 
			// webcamPanel
			// 
			this->webcamPanel->Controls->Add(this->webcamPicture);
			this->webcamPanel->Controls->Add(this->webcamControlPanel);
			this->webcamPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webcamPanel->Location = System::Drawing::Point(0, 24);
			this->webcamPanel->Name = L"webcamPanel";
			this->webcamPanel->Size = System::Drawing::Size(942, 397);
			this->webcamPanel->TabIndex = 5;
			this->webcamPanel->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(942, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->importToolStripMenuItem, 
				this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// importToolStripMenuItem
			// 
			this->importToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->imageToolStripMenuItem, 
				this->videoToolStripMenuItem, this->webcamToolStripMenuItem});
			this->importToolStripMenuItem->Name = L"importToolStripMenuItem";
			this->importToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->importToolStripMenuItem->Text = L"Import";
			// 
			// imageToolStripMenuItem
			// 
			this->imageToolStripMenuItem->Name = L"imageToolStripMenuItem";
			this->imageToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->imageToolStripMenuItem->Text = L"Image";
			this->imageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::imageToolStripMenuItem_Click);
			// 
			// videoToolStripMenuItem
			// 
			this->videoToolStripMenuItem->Name = L"videoToolStripMenuItem";
			this->videoToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->videoToolStripMenuItem->Text = L"Video";
			this->videoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::videoToolStripMenuItem_Click);
			// 
			// webcamToolStripMenuItem
			// 
			this->webcamToolStripMenuItem->Name = L"webcamToolStripMenuItem";
			this->webcamToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->webcamToolStripMenuItem->Text = L"Webcam";
			this->webcamToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::webcamToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// imagePanel
			// 
			this->imagePanel->Controls->Add(this->imagePictureBox);
			this->imagePanel->Controls->Add(this->imageControlPanel);
			this->imagePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->imagePanel->Location = System::Drawing::Point(0, 24);
			this->imagePanel->Name = L"imagePanel";
			this->imagePanel->Size = System::Drawing::Size(942, 397);
			this->imagePanel->TabIndex = 7;
			this->imagePanel->Visible = false;
			// 
			// imagePictureBox
			// 
			this->imagePictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->imagePictureBox->Location = System::Drawing::Point(0, 0);
			this->imagePictureBox->Name = L"imagePictureBox";
			this->imagePictureBox->Size = System::Drawing::Size(742, 397);
			this->imagePictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imagePictureBox->TabIndex = 0;
			this->imagePictureBox->TabStop = false;
			// 
			// imageControlPanel
			// 
			this->imageControlPanel->Controls->Add(this->imageFacesLabel);
			this->imageControlPanel->Dock = System::Windows::Forms::DockStyle::Right;
			this->imageControlPanel->Location = System::Drawing::Point(742, 0);
			this->imageControlPanel->Name = L"imageControlPanel";
			this->imageControlPanel->Padding = System::Windows::Forms::Padding(20);
			this->imageControlPanel->Size = System::Drawing::Size(200, 397);
			this->imageControlPanel->TabIndex = 4;
			// 
			// imageFacesLabel
			// 
			this->imageFacesLabel->AutoSize = true;
			this->imageFacesLabel->Location = System::Drawing::Point(23, 20);
			this->imageFacesLabel->Name = L"imageFacesLabel";
			this->imageFacesLabel->Size = System::Drawing::Size(93, 13);
			this->imageFacesLabel->TabIndex = 1;
			this->imageFacesLabel->Text = L"Faces detected: 0";
			// 
			// videoPanel
			// 
			this->videoPanel->Controls->Add(this->videoPictureBox);
			this->videoPanel->Controls->Add(this->videoControlPanel);
			this->videoPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->videoPanel->Location = System::Drawing::Point(0, 24);
			this->videoPanel->Name = L"videoPanel";
			this->videoPanel->Size = System::Drawing::Size(942, 397);
			this->videoPanel->TabIndex = 8;
			this->videoPanel->Visible = false;
			// 
			// videoPictureBox
			// 
			this->videoPictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->videoPictureBox->Location = System::Drawing::Point(0, 0);
			this->videoPictureBox->Name = L"videoPictureBox";
			this->videoPictureBox->Size = System::Drawing::Size(742, 397);
			this->videoPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->videoPictureBox->TabIndex = 0;
			this->videoPictureBox->TabStop = false;
			// 
			// videoControlPanel
			// 
			this->videoControlPanel->Controls->Add(this->videoFacesLabel);
			this->videoControlPanel->Dock = System::Windows::Forms::DockStyle::Right;
			this->videoControlPanel->Location = System::Drawing::Point(742, 0);
			this->videoControlPanel->Name = L"videoControlPanel";
			this->videoControlPanel->Padding = System::Windows::Forms::Padding(20);
			this->videoControlPanel->Size = System::Drawing::Size(200, 397);
			this->videoControlPanel->TabIndex = 4;
			// 
			// videoFacesLabel
			// 
			this->videoFacesLabel->AutoSize = true;
			this->videoFacesLabel->Location = System::Drawing::Point(23, 20);
			this->videoFacesLabel->Name = L"videoFacesLabel";
			this->videoFacesLabel->Size = System::Drawing::Size(93, 13);
			this->videoFacesLabel->TabIndex = 1;
			this->videoFacesLabel->Text = L"Faces detected: 0";
			// 
			// videoTimer
			// 
			this->videoTimer->Interval = 66;
			this->videoTimer->Tick += gcnew System::EventHandler(this, &MyForm::videoTimer_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(942, 421);
			this->Controls->Add(this->videoPanel);
			this->Controls->Add(this->imagePanel);
			this->Controls->Add(this->webcamPanel);
			this->Controls->Add(this->welcomePanel);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->webcamPicture))->EndInit();
			this->welcomePanel->ResumeLayout(false);
			this->welcomePanel->PerformLayout();
			this->webcamControlPanel->ResumeLayout(false);
			this->webcamControlPanel->PerformLayout();
			this->webcamPanel->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->imagePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->imagePictureBox))->EndInit();
			this->imageControlPanel->ResumeLayout(false);
			this->imageControlPanel->PerformLayout();
			this->videoPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->videoPictureBox))->EndInit();
			this->videoControlPanel->ResumeLayout(false);
			this->videoControlPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void webcamTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 FaceRecognizerResult result = recognizerCtr->recognizeWebcamFaces();
				 cv::Mat frame = result.getProcessedFrame();
				 webcamPicture->Image  = gcnew System::Drawing::Bitmap(frame.size().width,frame.size().height,frame.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame.data);
				 webcamPicture->Refresh();
				 webcamFacesLabel->Text = "Faces detected: " + result.getFacesCounter();
			 }
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 recognizerCtr = recognizerCtr->Instance();
			 }
	private: void HideAllPanels()
			 {
				 welcomePanel->Hide();
				 videoPanel->Hide();
				 imagePanel->Hide();
				 webcamPanel->Hide();
			 }
	private: void StopAllTimers()
			 {
				 webcamTimer->Stop();
				 videoTimer->Stop();
			 }
	private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void webcamToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 HideAllPanels();
				 StopAllTimers();
				 webcamPanel->Show();
				 recognizerCtr->openWebcam();
				 webcamTimer->Start();
			 }
	private: void MarshalString ( System::String ^ s, string& os ) {
				 using namespace Runtime::InteropServices;
				 const char* chars = 
					 (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
				 os = chars;
				 Marshal::FreeHGlobal(IntPtr((void*)chars));
			 }

			 void MarshalString ( System::String ^ s, std::wstring& os ) {
				 using namespace Runtime::InteropServices;
				 const wchar_t* chars = 
					 (const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
				 os = chars;
				 Marshal::FreeHGlobal(IntPtr((void*)chars));
			 }
	private: System::Void imageToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {


				 HideAllPanels();
				 StopAllTimers();
				 imagePanel->Show();
				 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

				 openFileDialog1->Filter = "jpeg (*.jpg)|*.jpg|All files (*.*)|*.*" ;
				 openFileDialog1->FilterIndex = 2 ;
				 openFileDialog1->RestoreDirectory = true ;

				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 string filename;
					 MarshalString(openFileDialog1->FileName, filename);
					 recognizerCtr->openImage(filename);
					 FaceRecognizerResult result = recognizerCtr->recognizeImageFaces();
					 cv::Mat frame = result.getProcessedFrame();
					 imagePictureBox->Image  = gcnew System::Drawing::Bitmap(frame.size().width,frame.size().height,frame.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame.data);
					 imagePictureBox->Refresh();
					 imageFacesLabel->Text = "Faces detected: " + result.getFacesCounter();
				 }
			 }
	private: System::Void videoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 HideAllPanels();
				 StopAllTimers();
				 videoPanel->Show();
				 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

				 openFileDialog1->Filter = "avi (*.avi)|*.avi|All files (*.*)|*.*" ;
				 openFileDialog1->FilterIndex = 2 ;
				 openFileDialog1->RestoreDirectory = true ;

				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 string filename;
					 MarshalString(openFileDialog1->FileName, filename);
					 recognizerCtr->openVideo(filename);
					 videoTimer->Start();
				 }
			 }
	private: System::Void videoTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 FaceRecognizerResult result = recognizerCtr->recognizeVideoFaces();
				 cv::Mat frame = result.getProcessedFrame();
				 videoPictureBox->Image  = gcnew System::Drawing::Bitmap(frame.size().width,frame.size().height,frame.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb,(System::IntPtr) frame.data);
				 videoPictureBox->Refresh();
				 videoFacesLabel->Text = "Faces detected: " + result.getFacesCounter();
			 }
	private: System::Void webcamStopButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 recognizerCtr->stopWebcam();
				 webcamTimer->Stop();
				 system("explorer,~\\faces");
			 }
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form::Close();
			 }
	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("Recognize My Face", "Recognize My Face", MessageBoxButtons::OK, MessageBoxIcon::Information);
			 }
	};
}

