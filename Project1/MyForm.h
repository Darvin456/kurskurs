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
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		String^ configFile = "config.txt";
		//Переменная для хранения информации соглашения
		
		//Переменная для хранения загруженных файлов
		String^ loadedfiles = "";

		MyForm(void)
		{

			InitializeComponent();
			AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1 = gcnew AxWMPLib::AxWindowsMediaPlayer();


		}
	private: System::Windows::Forms::ToolStripMenuItem^ Минимализм;
	private: System::Windows::Forms::ToolStripMenuItem^ Вернуть_К_Стандартной;
	private: System::Windows::Forms::LinkLabel^ Очистка;
	public:





	private: System::Windows::Forms::ToolStripMenuItem^ Скорость;

	private: System::Windows::Forms::ToolStripMenuItem^ x20ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ x15ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ нормальнаяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ x075ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ x050ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ Справка;




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
	private: System::Windows::Forms::GroupBox^ Панель_Управления;
	protected:

	private: System::Windows::Forms::RadioButton^ Стоп;

	private: System::Windows::Forms::RadioButton^ Играть;

	private: System::Windows::Forms::RadioButton^ Пауза;

	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripSplitButton^ О_Аудио;

	private: System::Windows::Forms::ToolStripMenuItem^ загрузитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Выйти;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TrackBar^ Громкость;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ Темы;
	private: System::Windows::Forms::ToolStripMenuItem^ Создать;



	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::ToolStripMenuItem^ О_Видео;


	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1;
	private: System::Windows::Forms::ToolStripButton^ О_Программе;
	private: System::Windows::Forms::LinkLabel^ Рикрол;
	private: System::Windows::Forms::ListBox^ Плейлист;






	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Панель_Управления = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Громкость = (gcnew System::Windows::Forms::TrackBar());
			this->Стоп = (gcnew System::Windows::Forms::RadioButton());
			this->Играть = (gcnew System::Windows::Forms::RadioButton());
			this->Пауза = (gcnew System::Windows::Forms::RadioButton());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->О_Аудио = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->загрузитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->О_Видео = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Скорость = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->x20ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->x15ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->нормальнаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->x075ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->x050ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Темы = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Создать = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Вернуть_К_Стандартной = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Минимализм = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Выйти = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->О_Программе = (gcnew System::Windows::Forms::ToolStripButton());
			this->Справка = (gcnew System::Windows::Forms::ToolStripButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->Рикрол = (gcnew System::Windows::Forms::LinkLabel());
			this->Плейлист = (gcnew System::Windows::Forms::ListBox());
			this->Очистка = (gcnew System::Windows::Forms::LinkLabel());
			this->Панель_Управления->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Громкость))->BeginInit();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// Панель_Управления
			// 
			this->Панель_Управления->BackColor = System::Drawing::Color::White;
			this->Панель_Управления->Controls->Add(this->label2);
			this->Панель_Управления->Controls->Add(this->Громкость);
			this->Панель_Управления->Controls->Add(this->Стоп);
			this->Панель_Управления->Controls->Add(this->Играть);
			this->Панель_Управления->Controls->Add(this->Пауза);
			this->Панель_Управления->Location = System::Drawing::Point(0, 313);
			this->Панель_Управления->Name = L"Панель_Управления";
			this->Панель_Управления->Size = System::Drawing::Size(444, 86);
			this->Панель_Управления->TabIndex = 0;
			this->Панель_Управления->TabStop = false;
			this->Панель_Управления->Text = L"Панель Управления";
			this->Панель_Управления->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(314, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Громкость";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// Громкость
			// 
			this->Громкость->Location = System::Drawing::Point(317, 33);
			this->Громкость->Maximum = 100;
			this->Громкость->Name = L"Громкость";
			this->Громкость->Size = System::Drawing::Size(123, 45);
			this->Громкость->TabIndex = 3;
			this->Громкость->TickStyle = System::Windows::Forms::TickStyle::None;
			this->Громкость->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// Стоп
			// 
			this->Стоп->AutoSize = true;
			this->Стоп->BackColor = System::Drawing::SystemColors::Window;
			this->Стоп->Location = System::Drawing::Point(136, 33);
			this->Стоп->Name = L"Стоп";
			this->Стоп->Size = System::Drawing::Size(49, 17);
			this->Стоп->TabIndex = 2;
			this->Стоп->Text = L"Стоп";
			this->Стоп->UseVisualStyleBackColor = false;
			this->Стоп->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// Играть
			// 
			this->Играть->AutoSize = true;
			this->Играть->Location = System::Drawing::Point(69, 33);
			this->Играть->Name = L"Играть";
			this->Играть->Size = System::Drawing::Size(61, 17);
			this->Играть->TabIndex = 1;
			this->Играть->Text = L"Играть";
			this->Играть->UseVisualStyleBackColor = true;
			this->Играть->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// Пауза
			// 
			this->Пауза->AutoSize = true;
			this->Пауза->Checked = true;
			this->Пауза->Location = System::Drawing::Point(7, 33);
			this->Пауза->Name = L"Пауза";
			this->Пауза->Size = System::Drawing::Size(56, 17);
			this->Пауза->TabIndex = 0;
			this->Пауза->TabStop = true;
			this->Пауза->Text = L"Пауза";
			this->Пауза->UseVisualStyleBackColor = true;
			this->Пауза->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->О_Аудио, this->О_Программе,
					this->Справка
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(882, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::toolStrip1_ItemClicked);
			// 
			// О_Аудио
			// 
			this->О_Аудио->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->загрузитьToolStripMenuItem,
					this->О_Видео, this->Скорость, this->Темы, this->Минимализм, this->Выйти
			});
			this->О_Аудио->Name = L"О_Аудио";
			this->О_Аудио->Size = System::Drawing::Size(52, 22);
			this->О_Аудио->Text = L"Файл";
			this->О_Аудио->Click += gcnew System::EventHandler(this, &MyForm::toolStripLabel1_Click);
			// 
			// загрузитьToolStripMenuItem
			// 
			this->загрузитьToolStripMenuItem->Name = L"загрузитьToolStripMenuItem";
			this->загрузитьToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->загрузитьToolStripMenuItem->Text = L"Открыть Аудио";
			this->загрузитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::загрузитьToolStripMenuItem_Click);
			// 
			// О_Видео
			// 
			this->О_Видео->Name = L"О_Видео";
			this->О_Видео->Size = System::Drawing::Size(158, 22);
			this->О_Видео->Text = L"Открыть Видео";
			this->О_Видео->Click += gcnew System::EventHandler(this, &MyForm::открытьВидеоToolStripMenuItem_Click);
			// 
			// Скорость
			// 
			this->Скорость->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->x20ToolStripMenuItem,
					this->x15ToolStripMenuItem, this->нормальнаяToolStripMenuItem, this->x075ToolStripMenuItem, this->x050ToolStripMenuItem
			});
			this->Скорость->Name = L"Скорость";
			this->Скорость->Size = System::Drawing::Size(158, 22);
			this->Скорость->Text = L"Скорость";
			this->Скорость->Click += gcnew System::EventHandler(this, &MyForm::скоростьToolStripMenuItem_Click);
			// 
			// x20ToolStripMenuItem
			// 
			this->x20ToolStripMenuItem->Name = L"x20ToolStripMenuItem";
			this->x20ToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->x20ToolStripMenuItem->Text = L"x2.0";
			this->x20ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::x20ToolStripMenuItem_Click);
			// 
			// x15ToolStripMenuItem
			// 
			this->x15ToolStripMenuItem->Name = L"x15ToolStripMenuItem";
			this->x15ToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->x15ToolStripMenuItem->Text = L"x1.5";
			this->x15ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::x15ToolStripMenuItem_Click);
			// 
			// нормальнаяToolStripMenuItem
			// 
			this->нормальнаяToolStripMenuItem->Name = L"нормальнаяToolStripMenuItem";
			this->нормальнаяToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->нормальнаяToolStripMenuItem->Text = L"Нормальная";
			this->нормальнаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::нормальнаяToolStripMenuItem_Click);
			// 
			// x075ToolStripMenuItem
			// 
			this->x075ToolStripMenuItem->Name = L"x075ToolStripMenuItem";
			this->x075ToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->x075ToolStripMenuItem->Text = L"x0.75";
			this->x075ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::x075ToolStripMenuItem_Click);
			// 
			// x050ToolStripMenuItem
			// 
			this->x050ToolStripMenuItem->Name = L"x050ToolStripMenuItem";
			this->x050ToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->x050ToolStripMenuItem->Text = L"x0.50";
			this->x050ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::x050ToolStripMenuItem_Click);
			// 
			// Темы
			// 
			this->Темы->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->Создать, this->Вернуть_К_Стандартной });
			this->Темы->Name = L"Темы";
			this->Темы->Size = System::Drawing::Size(158, 22);
			this->Темы->Text = L"Темы";
			// 
			// Создать
			// 
			this->Создать->Name = L"Создать";
			this->Создать->Size = System::Drawing::Size(199, 22);
			this->Создать->Text = L"Создать";
			this->Создать->Click += gcnew System::EventHandler(this, &MyForm::стандартнаяToolStripMenuItem_Click);
			// 
			// Вернуть_К_Стандартной
			// 
			this->Вернуть_К_Стандартной->Name = L"Вернуть_К_Стандартной";
			this->Вернуть_К_Стандартной->Size = System::Drawing::Size(199, 22);
			this->Вернуть_К_Стандартной->Text = L"Вернуть к стандартной";
			this->Вернуть_К_Стандартной->Click += gcnew System::EventHandler(this, &MyForm::вернутьКСтандартнойToolStripMenuItem_Click);
			// 
			// Минимализм
			// 
			this->Минимализм->Name = L"Минимализм";
			this->Минимализм->Size = System::Drawing::Size(158, 22);
			this->Минимализм->Text = L"Минимализм";
			this->Минимализм->Click += gcnew System::EventHandler(this, &MyForm::минимализмToolStripMenuItem_Click);
			// 
			// Выйти
			// 
			this->Выйти->Name = L"Выйти";
			this->Выйти->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->Выйти->Size = System::Drawing::Size(158, 22);
			this->Выйти->Text = L"Выйти";
			this->Выйти->Click += gcnew System::EventHandler(this, &MyForm::выйтиToolStripMenuItem_Click);
			// 
			// О_Программе
			// 
			this->О_Программе->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->О_Программе->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"О_Программе.Image")));
			this->О_Программе->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->О_Программе->Name = L"О_Программе";
			this->О_Программе->Size = System::Drawing::Size(86, 22);
			this->О_Программе->Text = L"О программе";
			this->О_Программе->Click += gcnew System::EventHandler(this, &MyForm::toolStripLabel2_Click);
			// 
			// Справка
			// 
			this->Справка->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->Справка->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Справка.Image")));
			this->Справка->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Справка->Name = L"Справка";
			this->Справка->Size = System::Drawing::Size(57, 22);
			this->Справка->Text = L"Справка";
			this->Справка->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Сейчас играет:";
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(0, 44);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(440, 300);
			this->axWindowsMediaPlayer1->TabIndex = 4;
			this->axWindowsMediaPlayer1->Enter += gcnew System::EventHandler(this, &MyForm::axWindowsMediaPlayer1_Enter);
			// 
			// Рикрол
			// 
			this->Рикрол->AutoSize = true;
			this->Рикрол->Location = System::Drawing::Point(869, 0);
			this->Рикрол->Name = L"Рикрол";
			this->Рикрол->Size = System::Drawing::Size(13, 13);
			this->Рикрол->TabIndex = 5;
			this->Рикрол->TabStop = true;
			this->Рикрол->Text = L"\?";
			this->Рикрол->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// Плейлист
			// 
			this->Плейлист->BackColor = System::Drawing::Color::LightGray;
			this->Плейлист->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Плейлист->FormattingEnabled = true;
			this->Плейлист->Location = System::Drawing::Point(457, 39);
			this->Плейлист->Name = L"Плейлист";
			this->Плейлист->Size = System::Drawing::Size(413, 355);
			this->Плейлист->Sorted = true;
			this->Плейлист->TabIndex = 6;
			this->Плейлист->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			this->Плейлист->DoubleClick += gcnew System::EventHandler(this, &MyForm::listBox1_DoubleClick);
			// 
			// Очистка
			// 
			this->Очистка->AutoSize = true;
			this->Очистка->LinkColor = System::Drawing::Color::MediumTurquoise;
			this->Очистка->Location = System::Drawing::Point(454, 23);
			this->Очистка->Name = L"Очистка";
			this->Очистка->Size = System::Drawing::Size(112, 13);
			this->Очистка->TabIndex = 7;
			this->Очистка->TabStop = true;
			this->Очистка->Text = L"Очистить Плейлист\?";
			this->Очистка->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(882, 395);
			this->Controls->Add(this->Очистка);
			this->Controls->Add(this->Плейлист);
			this->Controls->Add(this->Рикрол);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->Панель_Управления);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Медиа-плеер";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Панель_Управления->ResumeLayout(false);
			this->Панель_Управления->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Громкость))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
	
		StreamReader^ vhod= gcnew StreamReader(configFile);
		
		if (vhod != nullptr) {
			String^ settingValueStr = vhod->ReadLine();
			vhod->Close();


			if (settingValueStr == "Yes") {

				MessageBox::Show("Добро пожаловать","Приветствие");
			}

			else {
				System::Windows::Forms::DialogResult result = MessageBox::Show("Вас приветсвует медиа-плеер ,чтоб продолжить использование нажимите ДА в противном случае нажимите НЕТ", "Соглашение", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

				if (result == System::Windows::Forms::DialogResult::Yes) {


					// Открытие файла на запись
					StreamWriter^ writer = gcnew StreamWriter(configFile);
					if (writer != nullptr) {
						// Запись значения в файл
						writer->WriteLine("Yes");
						writer->Close();
					}

					else {

					}
				
				}
				else {
					Application::Exit();
				}
			}
		
		}
		
	}
	
	private: System::Void toolStripLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void загрузитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
				
		Играть->Checked = true;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Медиа-Файлы (*.mp3;*.ogg;*.wav)|*.mp3;*.ogg;*.wav";
		openFileDialog1->Title = "Укажите медиа-файл";
		openFileDialog1->Multiselect = true;
		
		

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			
			
			Плейлист->Items->Clear();
			loadedMediaList->Clear();
			for each (String ^ media in openFileDialog1->FileNames)
			{
				String^ mediaName = System::IO::Path::GetFileName(media);
				loadedfiles += mediaName + "\n";
				label1->Text = "Сейчас играет: " + mediaName;
				axWindowsMediaPlayer1->Ctlcontrols->stop();
				
				loadedMediaList->Add(media);
				
			}
			MessageBox::Show("Загружены следующие файлы:\n" + loadedfiles, "Успех", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			MessageBox::Show("Пожалуйста выбирете ваш Трек/Видео в панели слева и кликните по нему два раза", "Предупреждение");
			loadedfiles = nullptr;
			

			for (int i = 0; i < loadedMediaList->Count; i++)
			{
				String^ file = loadedMediaList[i];


				Плейлист->Items->Add((i + 1) + "А:  " + file);
				
			}
			
		}
		else
		{
			PlaySound(TEXT("SystemHand"), NULL, SND_ALIAS | SND_ASYNC);
			MessageBox::Show("Ошибка загрузки аудио-файлов", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
		if (Плейлист->SelectedIndex >= 0 && Плейлист->SelectedIndex < loadedMediaList->Count)
		{
			String^ selectedMedia = loadedMediaList[Плейлист->SelectedIndex];
			label1->Text = "Выбранный файл: " + selectedMedia;
		}
	}




private: System::Void выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Вы уверенны?", "Соглашение", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		Form::Close();
	}
	else {
		
	}
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	axWindowsMediaPlayer1->Ctlcontrols->pause();
	toolTip1->SetToolTip(Пауза, "Эта кнопка помогает вам приостановить воспроизведение");
	
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	axWindowsMediaPlayer1->Ctlcontrols->play();
	

}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "Сейчас играет: ";
	axWindowsMediaPlayer1->Ctlcontrols->stop();
	toolTip1->SetToolTip(Стоп, "Эта кнопка полностью останавливает воспроизведение и очищает плейлист");
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Вы уверены, что хотите закрыть приложение?", "Закрыть приложение?", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	PlaySound(TEXT("SystemExclamation"), NULL, SND_ALIAS | SND_ASYNC);
	if (result == System::Windows::Forms::DialogResult::No)
	{
		e->Cancel = true; 
	}
}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {

		
		int volume = Громкость->Value;
		axWindowsMediaPlayer1->settings->volume = volume;
		label2->Text = "Громкость: " + volume;
		

	}

private: System::Void стандартнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	ColorDialog^ colorDialog = gcnew ColorDialog();

	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		MessageBox::Show("Созданная вами тема");
		Скорость->BackColor = colorDialog->Color;
		toolStrip1->BackColor = colorDialog->Color;

		BackColor = colorDialog->Color;
		Стоп->BackColor = colorDialog->Color;
		Играть->BackColor = colorDialog->Color;
		Пауза->BackColor = colorDialog->Color;
		Выйти->BackColor = colorDialog->Color;


		Вернуть_К_Стандартной->BackColor = colorDialog->Color;
		Панель_Управления->BackColor = colorDialog->Color;

		Темы->BackColor = colorDialog->Color;
		загрузитьToolStripMenuItem->BackColor = colorDialog->Color;
		О_Видео->BackColor = colorDialog->Color;
		Минимализм->BackColor = colorDialog->Color;
		Плейлист->BackColor = colorDialog->Color;
		Создать->BackColor = colorDialog-> Color;
	}
	
	

}
	   

	private: System::Void открытьВидеоToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Играть->Checked = true;
		axWindowsMediaPlayer1->Ctlcontrols->stop();
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Видео файлы|*.mp4;*.mkv;*.webm;*.wmv;*.avi;*.mov;*.flv";
		openFileDialog1->Title = "Укажите медиа-файл";
		openFileDialog1->Multiselect = true;
		
		

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			
			Плейлист->Items->Clear();
			loadedMediaList->Clear();


			for each (String ^ media in openFileDialog1->FileNames)
			{
				String^ mediaName = System::IO::Path::GetFileName(media);
				
				label1->Text = "Сейчас играет: " + mediaName;
				
				loadedfiles += mediaName + "\n";

				loadedMediaList->Add(media);
				
			}
			MessageBox::Show("Загружены следующие файлы:\n" + loadedfiles, "Успех", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			MessageBox::Show("Пожалуйста выбирете ваш Трек/Видео в панели Справа => \nи кликните по нему два раза", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			loadedfiles = nullptr;
			

			for (int i = 0; i < loadedMediaList->Count; i++)
			{
				String^ file = loadedMediaList[i];

			
				Плейлист->Items->Add((i + 1) + "В: " + file);
			
			}
			
		}
	
		else
		{
			PlaySound(TEXT("SystemHand"), NULL, SND_ALIAS | SND_ASYNC);
			MessageBox::Show("Ошибка загрузки Видео-файлов", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void axWindowsMediaPlayer1_Enter(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void toolStripLabel2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Версия программы 1.01\nРазработчик Dave`s company\nДля идей писать сюда: david.chuev.12@mail.ru","О программе");
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Diagnostics::Process::Start("https://www.youtube.com/watch?v=HIcSWuKMwOw");
}

private: System::Void listBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	if (Плейлист->SelectedIndex >= 0 && Плейлист->SelectedIndex < loadedMediaList->Count)
	{
		String^ selectedMedia = loadedMediaList[Плейлист->SelectedIndex];

		
		axWindowsMediaPlayer1->Ctlcontrols->stop();
		axWindowsMediaPlayer1->URL = selectedMedia;
		label1->Text = "Сейчас играет: " + selectedMedia;
		axWindowsMediaPlayer1->Ctlcontrols->play();
	}

}
private: System::Void минимализмToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (Панель_Управления->Visible && Панель_Управления->Visible && label1->Visible) {
		Плейлист->Visible = false;
		Панель_Управления->Visible = false;
		label1->Visible = false;
		axWindowsMediaPlayer1->Visible = true;
		axWindowsMediaPlayer1->Dock = DockStyle::Fill;
		this->WindowState = FormWindowState::Maximized;
	}
	else {
	
		Плейлист->Visible = true;
		Панель_Управления->Visible = true;
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
private: System::Void вернутьКСтандартнойToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Исходная тема");
	Панель_Управления->BackColor = System::Drawing::Color::White;
	toolStrip1->BackColor = System::Drawing::Color::White;

	BackColor = System::Drawing::Color::White;
	Стоп->BackColor = System::Drawing::Color::White;
	Играть->BackColor = System::Drawing::Color::White;
	Пауза->BackColor = System::Drawing::Color::White;
	Выйти->BackColor = System::Drawing::Color::White;
	Скорость->BackColor = System::Drawing::Color::White;

	Вернуть_К_Стандартной->BackColor = System::Drawing::Color::White;
	Панель_Управления->BackColor = System::Drawing::Color::White;

	Темы->BackColor = System::Drawing::Color::White;
	загрузитьToolStripMenuItem->BackColor = System::Drawing::Color::White;
	О_Видео->BackColor = System::Drawing::Color::White;
	Создать->BackColor = System::Drawing::Color::White;
	Плейлист->BackColor = System::Drawing::Color::White;
	Минимализм ->BackColor= System::Drawing::Color::White;
}
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			MessageBox::Show("Вы будете перенаправлены на страницу справки");
			System::Diagnostics::Process::Start("Help.html");
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show("Возникла ошибка запуска справки,обратитесь к разработчику программы", "Ошибка!",MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
			
		}
	}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Вы уверены?", "Соглашение", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		System::Windows::Forms::DialogResult result = MessageBox::Show("Успешно очищенно!", "Успех!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		Плейлист->Items->Clear();
		loadedMediaList->Clear();
		axWindowsMediaPlayer1->Ctlcontrols->stop();
	}
	else
	{
		MessageBox::Show("Ошибка очистки");
	}
	
}
private: System::Void скоростьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void нормальнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
