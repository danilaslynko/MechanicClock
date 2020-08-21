#pragma once
#include "Stopwatch.h"

namespace MechanicClock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::PictureBox^ WatchPicture;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ StopwatchPicture;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->WatchPicture = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->StopwatchPicture = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WatchPicture))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StopwatchPicture))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(584, 441);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->trackBar1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->WatchPicture);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(576, 415);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Часы";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(414, 101);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 38);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Установить текущее время";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(414, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Скорость течения времени";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(414, 37);
			this->trackBar1->Maximum = 999;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(152, 45);
			this->trackBar1->TabIndex = 2;
			this->trackBar1->TickFrequency = 1000;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(414, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Завести часы";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// WatchPicture
			// 
			this->WatchPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"WatchPicture.Image")));
			this->WatchPicture->Location = System::Drawing::Point(8, 8);
			this->WatchPicture->Name = L"WatchPicture";
			this->WatchPicture->Size = System::Drawing::Size(400, 400);
			this->WatchPicture->TabIndex = 0;
			this->WatchPicture->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->StopwatchPicture);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(576, 415);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Секундомер";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(414, 95);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(156, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Сброс и взвод пружины";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(414, 66);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(156, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Стоп";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(414, 37);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(156, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Отметить круг";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(414, 8);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Запуск";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// StopwatchPicture
			// 
			this->StopwatchPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"StopwatchPicture.Image")));
			this->StopwatchPicture->Location = System::Drawing::Point(8, 8);
			this->StopwatchPicture->Name = L"StopwatchPicture";
			this->StopwatchPicture->Size = System::Drawing::Size(400, 400);
			this->StopwatchPicture->TabIndex = 1;
			this->StopwatchPicture->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 440);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WatchPicture))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StopwatchPicture))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		Watch^ watch;
		Stopwatch^ stopwatch;
		Image^ stopwatchImageReserve;

		void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			watch->windSpring();
		}

		void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			stopwatchImageReserve = Image::FromFile(
				"Pictures/Stopwatch.png"
			);

			watch = gcnew Watch();
			watch->TimeChanged += gcnew Watch::TimeChangedHandler(
				this, &MechanicClock::MyForm::showTime);
			showTime(watch, watch->Milliseconds);

			stopwatch = gcnew Stopwatch();
			stopwatch->TimeChanged += gcnew Watch::TimeChangedHandler(
				this, &MechanicClock::MyForm::showStopwatchTime);
			stopwatch->StopwatchReset += gcnew Stopwatch::StopwatchResetHandler(
				this, &MechanicClock::MyForm::onStopwatchReset);
			stopwatch->RoundMarked += gcnew Watch::TimeChangedHandler(
				this, &MechanicClock::MyForm::onRoundMarked);
			showStopwatchTime(stopwatch, stopwatch->Milliseconds);
		}

		void showTime(Watch^ sender, long milliseconds)
		{
			Pen^ hoursPen = gcnew Pen(Color::Black, 6);
			Pen^ minutesPen = gcnew Pen(Color::Black, 4);
			Pen^ secondsPen = gcnew Pen(Color::Black, 2);

			Image^ watchImage = Image::FromFile(
				"Pictures/Clock.png"
			);
			Graphics^ gfx = Graphics::FromImage(watchImage);

			float hours = (float)milliseconds / 3600000.0;
			float minutes = (float)milliseconds / 60000.0;
			float seconds = (float)milliseconds / 1000.0;

			float hoursAngle = 2 * Math::PI * hours / 12.0;
			float minutesAngle = 2 * Math::PI * minutes / 60.0;
			float secondsAngle = 2 * Math::PI * seconds / 60.0;

			Point center = Point(215, 220);
			Point hoursPoint = Point(
				center.X + 80 * Math::Sin(hoursAngle),
				center.Y - 80 * Math::Cos(hoursAngle)
			);
			Point minutesPoint = Point(
				center.X + 100 * Math::Sin(minutesAngle),
				center.Y - 100 * Math::Cos(minutesAngle)
			);

			Point secondsPoint = Point(
				center.X + 110 * Math::Sin(secondsAngle),
				center.Y - 110 * Math::Cos(secondsAngle)
			);

			gfx->DrawLine(hoursPen, center, hoursPoint);
			gfx->DrawLine(minutesPen, center, minutesPoint);
			gfx->DrawLine(secondsPen, center, secondsPoint);

			WatchPicture->Image = watchImage;
		}

		void showStopwatchTime(Watch^ sender, long milliseconds)
		{
			Pen^ minutesPen = gcnew Pen(Color::Red, 1);
			Pen^ secondsPen = gcnew Pen(Color::Red, 2);

			Image^ stopwatchImage =
				(Image^)stopwatchImageReserve->Clone();
			Graphics^ gfx = Graphics::FromImage(stopwatchImage);

			float minutes = (float)milliseconds / 60000.0;
			float seconds = (float)milliseconds / 1000.0;

			float minutesAngle = 2 * Math::PI * minutes / 60.0;
			float secondsAngle = 2 * Math::PI * seconds / 60.0;

			Point minutesCenter = Point(196, 216);
			Point secondsCenter = Point(196, 247);

			Point minutesPoint = Point(
				minutesCenter.X + 12.0 * Math::Sin(minutesAngle),
				minutesCenter.Y - 12.0 * Math::Cos(minutesAngle)
			);

			Point secondsPoint = Point(
				secondsCenter.X + 80.0 * Math::Sin(secondsAngle),
				secondsCenter.Y - 80.0 * Math::Cos(secondsAngle)
			);

			gfx->DrawLine(minutesPen, minutesCenter, minutesPoint);
			gfx->DrawLine(secondsPen, secondsCenter, secondsPoint);

			StopwatchPicture->Image = stopwatchImage;
		}

		void onStopwatchReset(Stopwatch^ sender)
		{
			stopwatch->Milliseconds = 0;
			showStopwatchTime(sender, sender->Milliseconds);
		}

		void onRoundMarked(Watch^ sender, long milliseconds) {
			Stopwatch^ stopwatch = (Stopwatch^)sender;
			Pen^ minutesPen = gcnew Pen(
				stopwatch->ThirdRound ? Color::Red : Color::Black, 1);
			Pen^ secondsPen = gcnew Pen(
				stopwatch->ThirdRound ? Color::Red : Color::Black, 2);

			Graphics^ gfx = Graphics::FromImage(stopwatchImageReserve);

			float minutes = (float)milliseconds / 60000.0;
			float seconds = (float)milliseconds / 1000.0;

			float minutesAngle = 2 * Math::PI * minutes / 60.0;
			float secondsAngle = 2 * Math::PI * seconds / 60.0;

			Point minutesCenter = Point(196, 216);
			Point secondsCenter = Point(196, 247);

			Point minutesPoint = Point(
				minutesCenter.X + 12.0 * Math::Sin(minutesAngle),
				minutesCenter.Y - 12.0 * Math::Cos(minutesAngle)
			);

			Point secondsPoint = Point(
				secondsCenter.X + 80.0 * Math::Sin(secondsAngle),
				secondsCenter.Y - 80.0 * Math::Cos(secondsAngle)
			);

			gfx->DrawLine(minutesPen, minutesCenter, minutesPoint);
			gfx->DrawLine(secondsPen, secondsCenter, secondsPoint);

			StopwatchPicture->Image = stopwatchImageReserve;
		}

		void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			DateTime^ now = DateTime::Now;
			watch->setTime(now->Hour, now->Minute, now->Second);
		}

		void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
			watch->ClockTimer->Interval = 1000 - ((TrackBar^)sender)->Value;
		}

		void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			stopwatch->start();
			button3->Enabled = false;
		}
		void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			stopwatch->markRound();
			if (stopwatch->ThirdRound) {
				button3->Enabled = false;
				button5->Enabled = false;
			}
		}
		void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			stopwatch->stop();
			if (!stopwatch->ThirdRound) {
				button3->Enabled = true;
			}
		}
		void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			stopwatchImageReserve = Image::FromFile(
				"Pictures/Stopwatch.png"
			);
			stopwatch->stop();
			stopwatch->windSpring();
			button3->Enabled = true;
		}
	};
}
