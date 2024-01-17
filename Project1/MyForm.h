#include <Windows.h>
#include <mmsystem.h>
#include <msclr/marshal_cppstd.h> 
#pragma comment(lib, "winmm.lib")

namespace Project1 {
	using namespace msclr;
	using namespace System::IO;
	using namespace WMPLib;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String^ loadedfiles = "";

		MyForm(void)
		{
			
			InitializeComponent();
			AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1 = gcnew AxWMPLib::AxWindowsMediaPlayer();
			
			
		}
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ �������;

	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ x20ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ x15ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ x075ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ x050ToolStripMenuItem;




	public:

	public:

	protected:
		List<String^>^ loadedMediaList = gcnew List<String^>();
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ ����;

	private: System::Windows::Forms::RadioButton^ ������;

	private: System::Windows::Forms::RadioButton^ �����;

	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripSplitButton^ toolStripLabel1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TrackBar^ ���������;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;

	private: System::Windows::Forms::ToolTip^ toolTip1;

	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1;
	private: System::Windows::Forms::ToolStripButton^ toolStripLabel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::ListBox^ listBox1;



	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->��������� = (gcnew System::Windows::Forms::TrackBar());
			this->���� = (gcnew System::Windows::Forms::RadioButton());
			this->������ = (gcnew System::Windows::Forms::RadioButton());
			this->����� = (gcnew System::Windows::Forms::RadioButton());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->x20ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->x15ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->x075ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->x050ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripLabel2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->������� = (gcnew System::Windows::Forms::ToolStripButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->���������))->BeginInit();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->���������);
			this->groupBox1->Controls->Add(this->����);
			this->groupBox1->Controls->Add(this->������);
			this->groupBox1->Controls->Add(this->�����);
			this->groupBox1->Location = System::Drawing::Point(0, 313);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(444, 86);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"������ ����������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(314, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"���������";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// ���������
			// 
			this->���������->Location = System::Drawing::Point(314, 33);
			this->���������->Name = L"���������";
			this->���������->Size = System::Drawing::Size(104, 45);
			this->���������->TabIndex = 3;
			this->���������->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// ����
			// 
			this->����->AutoSize = true;
			this->����->BackColor = System::Drawing::SystemColors::Window;
			this->����->Location = System::Drawing::Point(136, 33);
			this->����->Name = L"����";
			this->����->Size = System::Drawing::Size(49, 17);
			this->����->TabIndex = 2;
			this->����->Text = L"����";
			this->����->UseVisualStyleBackColor = false;
			this->����->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// ������
			// 
			this->������->AutoSize = true;
			this->������->Location = System::Drawing::Point(69, 33);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(61, 17);
			this->������->TabIndex = 1;
			this->������->Text = L"������";
			this->������->UseVisualStyleBackColor = true;
			this->������->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// �����
			// 
			this->�����->AutoSize = true;
			this->�����->Checked = true;
			this->�����->Location = System::Drawing::Point(7, 33);
			this->�����->Name = L"�����";
			this->�����->Size = System::Drawing::Size(56, 17);
			this->�����->TabIndex = 0;
			this->�����->TabStop = true;
			this->�����->Text = L"�����";
			this->�����->UseVisualStyleBackColor = true;
			this->�����->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripLabel1,
					this->toolStripLabel2, this->�������
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(882, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::toolStrip1_ItemClicked);
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->���������ToolStripMenuItem,
					this->������������ToolStripMenuItem, this->��������ToolStripMenuItem, this->����ToolStripMenuItem, this->����������ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(52, 22);
			this->toolStripLabel1->Text = L"����";
			this->toolStripLabel1->Click += gcnew System::EventHandler(this, &MyForm::toolStripLabel1_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->���������ToolStripMenuItem->Text = L"������� �����";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->������������ToolStripMenuItem->Text = L"������� �����";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->x20ToolStripMenuItem,
					this->x15ToolStripMenuItem, this->����������ToolStripMenuItem, this->x075ToolStripMenuItem, this->x050ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// x20ToolStripMenuItem
			// 
			this->x20ToolStripMenuItem->Name = L"x20ToolStripMenuItem";
			this->x20ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->x20ToolStripMenuItem->Text = L"x2.0";
			this->x20ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::x20ToolStripMenuItem_Click);
			// 
			// x15ToolStripMenuItem
			// 
			this->x15ToolStripMenuItem->Name = L"x15ToolStripMenuItem";
			this->x15ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->x15ToolStripMenuItem->Text = L"x1.5";
			this->x15ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::x15ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// x075ToolStripMenuItem
			// 
			this->x075ToolStripMenuItem->Name = L"x075ToolStripMenuItem";
			this->x075ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->x075ToolStripMenuItem->Text = L"x0.75";
			this->x075ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::x075ToolStripMenuItem_Click);
			// 
			// x050ToolStripMenuItem
			// 
			this->x050ToolStripMenuItem->Name = L"x050ToolStripMenuItem";
			this->x050ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->x050ToolStripMenuItem->Text = L"x0.50";
			this->x050ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::x050ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�����������ToolStripMenuItem,
					this->�������������������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->�����������ToolStripMenuItem->Text = L"�������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������ToolStripMenuItem_Click);
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->�������������������ToolStripMenuItem->Text = L"������� � �����������";
			this->�������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// toolStripLabel2
			// 
			this->toolStripLabel2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripLabel2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripLabel2.Image")));
			this->toolStripLabel2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripLabel2->Name = L"toolStripLabel2";
			this->toolStripLabel2->Size = System::Drawing::Size(86, 22);
			this->toolStripLabel2->Text = L"� ���������";
			this->toolStripLabel2->Click += gcnew System::EventHandler(this, &MyForm::toolStripLabel2_Click);
			// 
			// �������
			// 
			this->�������->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->�������->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������.Image")));
			this->�������->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������->Name = L"�������";
			this->�������->Size = System::Drawing::Size(57, 22);
			this->�������->Text = L"�������";
			this->�������->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"������ ������:";
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(0, 45);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(440, 300);
			this->axWindowsMediaPlayer1->TabIndex = 4;
			this->axWindowsMediaPlayer1->Enter += gcnew System::EventHandler(this, &MyForm::axWindowsMediaPlayer1_Enter);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(869, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(13, 13);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"\?";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(457, 39);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(413, 355);
			this->listBox1->Sorted = true;
			this->listBox1->TabIndex = 6;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			this->listBox1->DoubleClick += gcnew System::EventHandler(this, &MyForm::listBox1_DoubleClick);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->LinkColor = System::Drawing::Color::MediumTurquoise;
			this->linkLabel2->Location = System::Drawing::Point(454, 23);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(112, 13);
			this->linkLabel2->TabIndex = 7;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"�������� ��������\?";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(882, 395);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�����-�����";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->���������))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			
		
			System::Windows::Forms::DialogResult result = MessageBox::Show("��� ����������� �����-����� ,���� ���������� ������������� �������� �� � ��������� ������ �������� ���", "����������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				
			}
			else {
				Form::Close();
			}
		
		
	}
	private: System::Void toolStripLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
				
		������->Checked = true;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "�����-����� (*.mp3;*.ogg;*.wav)|*.mp3;*.ogg;*.wav";
		openFileDialog1->Title = "������� �����-����";
		openFileDialog1->Multiselect = true;
		
		

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			
			
			listBox1->Items->Clear();
			loadedMediaList->Clear();
			for each (String ^ media in openFileDialog1->FileNames)
			{
				String^ mediaName = System::IO::Path::GetFileName(media);
				loadedfiles += mediaName + "\n";
				label1->Text = "������ ������: " + mediaName;
				axWindowsMediaPlayer1->Ctlcontrols->stop();
				
				loadedMediaList->Add(media);
				
			}
			MessageBox::Show("��������� ��������� �����:\n" + loadedfiles, "�����", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			MessageBox::Show("���������� �������� ��� ����/����� � ������ ����� � �������� �� ���� ��� ����", "��������������");
			loadedfiles = nullptr;
			

			for (int i = 0; i < loadedMediaList->Count; i++)
			{
				String^ file = loadedMediaList[i];


				listBox1->Items->Add((i + 1) + "�:  " + file);
				
			}
			
		}
		else
		{
			PlaySound(TEXT("SystemHand"), NULL, SND_ALIAS | SND_ASYNC);
			MessageBox::Show("������ �������� �����-������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		if (listBox1->SelectedIndex >= 0 && listBox1->SelectedIndex < loadedMediaList->Count)
		{
			String^ selectedMedia = loadedMediaList[listBox1->SelectedIndex];
			label1->Text = "��������� ����: " + selectedMedia;
		}
	}




private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("�� ��������?", "����������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		Form::Close();
	}
	else {
		
	}
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	axWindowsMediaPlayer1->Ctlcontrols->pause();
	toolTip1->SetToolTip(�����, "��� ������ �������� ��� ������������� ���������������");
	
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	axWindowsMediaPlayer1->Ctlcontrols->play();
	

}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "������ ������: ";
	axWindowsMediaPlayer1->Ctlcontrols->stop();
	toolTip1->SetToolTip(����, "��� ������ ��������� ������������� ��������������� � ������� ��������");
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("�� �������, ��� ������ ������� ����������?", "������� ����������?", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	PlaySound(TEXT("SystemExclamation"), NULL, SND_ALIAS | SND_ASYNC);
	if (result == System::Windows::Forms::DialogResult::No)
	{
		e->Cancel = true; 
	}
}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {

		
		toolTip1->SetToolTip(���������, "���� ������� �������� ��� ������������ ��������� �����");
		int volume = ���������->Value;
		axWindowsMediaPlayer1->settings->volume = (int)(volume * 10);
		label2->Text = "���������:" + volume *10;
		

	}

private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	ColorDialog^ colorDialog = gcnew ColorDialog();

	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		MessageBox::Show("��������� ���� ����");
		groupBox1->BackColor = colorDialog->Color;
		toolStrip1->BackColor = colorDialog->Color;

		BackColor = colorDialog->Color;
		����->BackColor = colorDialog->Color;
		������->BackColor = colorDialog->Color;
		�����->BackColor = colorDialog->Color;
		�����ToolStripMenuItem->BackColor = colorDialog->Color;


		�����������ToolStripMenuItem->BackColor = colorDialog->Color;
		groupBox1->BackColor = colorDialog->Color;

		����ToolStripMenuItem->BackColor = colorDialog->Color;
		���������ToolStripMenuItem->BackColor = colorDialog->Color;
		������������ToolStripMenuItem->BackColor = colorDialog->Color;
		����������ToolStripMenuItem->BackColor = colorDialog->Color;
		listBox1->BackColor = colorDialog->Color;
		�������������������ToolStripMenuItem->BackColor = colorDialog-> Color;
	}
	
	

}
	   

	private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		������->Checked = true;
		axWindowsMediaPlayer1->Ctlcontrols->stop();
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "����� �����|*.mp4;*.mkv;*.webm;*.wmv;*.avi;*.mov;*.flv";
		openFileDialog1->Title = "������� �����-����";
		openFileDialog1->Multiselect = true;
		
		

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			
			listBox1->Items->Clear();
			loadedMediaList->Clear();


			for each (String ^ media in openFileDialog1->FileNames)
			{
				String^ mediaName = System::IO::Path::GetFileName(media);
				
				label1->Text = "������ ������: " + mediaName;
				
				loadedfiles += mediaName + "\n";

				loadedMediaList->Add(media);
				
			}
			MessageBox::Show("��������� ��������� �����:\n" + loadedfiles, "�����", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			MessageBox::Show("���������� �������� ��� ����/����� � ������ ������ => \n� �������� �� ���� ��� ����", "��������������", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			loadedfiles = nullptr;
			

			for (int i = 0; i < loadedMediaList->Count; i++)
			{
				String^ file = loadedMediaList[i];

			
				listBox1->Items->Add((i + 1) + "�: " + file);
			
			}
			
		}
	
		else
		{
			PlaySound(TEXT("SystemHand"), NULL, SND_ALIAS | SND_ASYNC);
			MessageBox::Show("������ �������� �����-������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void axWindowsMediaPlayer1_Enter(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void toolStripLabel2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("������ ��������� 1.01\n����������� Dave`s company\n��� ���� ������ ����: david.chuev.12@mail.ru","� ���������");
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Diagnostics::Process::Start("https://www.youtube.com/watch?v=HIcSWuKMwOw");
}

private: System::Void listBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex >= 0 && listBox1->SelectedIndex < loadedMediaList->Count)
	{
		String^ selectedMedia = loadedMediaList[listBox1->SelectedIndex];

		
		axWindowsMediaPlayer1->Ctlcontrols->stop();
		axWindowsMediaPlayer1->URL = selectedMedia;
		label1->Text = "������ ������: " + selectedMedia;
		axWindowsMediaPlayer1->Ctlcontrols->play();
	}

}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (listBox1->Visible && groupBox1->Visible && label1->Visible) {
		listBox1->Visible = false;
		groupBox1->Visible = false;
		label1->Visible = false;
		axWindowsMediaPlayer1->Visible = true;
		axWindowsMediaPlayer1->Dock = DockStyle::Fill;
		this->WindowState = FormWindowState::Maximized;
	}
	else {
	
		listBox1->Visible = true;
		groupBox1->Visible = true;
		label1->Visible = true;
		axWindowsMediaPlayer1->Dock = DockStyle::None;
		axWindowsMediaPlayer1->Location = System::Drawing::Point(0, 45);
		axWindowsMediaPlayer1->Size = System::Drawing::Size(440, 300);
		this->WindowState = FormWindowState::Normal;
	}
}
private: System::Void trackBar1_Scroll_1(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void �������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("�������� ����");
	groupBox1->BackColor = System::Drawing::Color::White;
	toolStrip1->BackColor = System::Drawing::Color::White;

	BackColor = System::Drawing::Color::White;
	����->BackColor = System::Drawing::Color::White;
	������->BackColor = System::Drawing::Color::White;
	�����->BackColor = System::Drawing::Color::White;
	�����ToolStripMenuItem->BackColor = System::Drawing::Color::White;


	�����������ToolStripMenuItem->BackColor = System::Drawing::Color::White;
	groupBox1->BackColor = System::Drawing::Color::White;

	����ToolStripMenuItem->BackColor = System::Drawing::Color::White;
	���������ToolStripMenuItem->BackColor = System::Drawing::Color::White;
	������������ToolStripMenuItem->BackColor = System::Drawing::Color::White;
	�������������������ToolStripMenuItem->BackColor = System::Drawing::Color::White;
	listBox1->BackColor = System::Drawing::Color::White;
	����������ToolStripMenuItem ->BackColor= System::Drawing::Color::White;
}
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			MessageBox::Show("�� ������ �������������� �� �������� �������");
			System::Diagnostics::Process::Start("Help.html");
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show("���������� �� �������� ����� ���������", "����������, ������� ����� �� �����:(",MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
			
		}
	}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("�� �������?", "����������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		System::Windows::Forms::DialogResult result = MessageBox::Show("������� ��������!", "�����!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		listBox1->Items->Clear();
		loadedMediaList->Clear();
		axWindowsMediaPlayer1->Ctlcontrols->stop();
	}
	else
	{
		MessageBox::Show("������ �������");
	}
	
}
private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void x15ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (axWindowsMediaPlayer1->settings->isAvailable["Rate"]) {
		axWindowsMediaPlayer1->settings->rate = 1.5;
	}
}
private: System::Void x20ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (axWindowsMediaPlayer1->settings->isAvailable["Rate"]) {
		axWindowsMediaPlayer1->settings->rate = 2.0;
	}
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (axWindowsMediaPlayer1->settings->isAvailable["Rate"]) {
		axWindowsMediaPlayer1->settings->rate = 1.0;
	}
}
private: System::Void x075ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (axWindowsMediaPlayer1->settings->isAvailable["Rate"]) {
		axWindowsMediaPlayer1->settings->rate = 0.75;
	}
}
private: System::Void x050ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (axWindowsMediaPlayer1->settings->isAvailable["Rate"]) {
		axWindowsMediaPlayer1->settings->rate = 0.5;
	}
}
};
}
