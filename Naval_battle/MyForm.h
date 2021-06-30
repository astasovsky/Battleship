/*
"Морсбкий бій"
Курсова робота з дисципліни "Алгоритмізація та програмування"
Виконав: Стасовський Антон Вячеславович
Дата створення: 21.05.2020
*/
#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

namespace Navalbattle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	const int FIELD_SIZE = 10;	//розмір полів (10х10)
	//масиви з інформацією про поля
	int field1[FIELD_SIZE][FIELD_SIZE], field2[FIELD_SIZE][FIELD_SIZE];
	//масиви з інформацією про розташування кораблів
	bool shipsPos1[FIELD_SIZE][FIELD_SIZE], shipsPos2[FIELD_SIZE][FIELD_SIZE];

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Image ^whiteField;
		Image ^pointField;
		Image ^krossField;
		Image ^blackField;
	private: System::Windows::Forms::GroupBox^  completionMenu;
	private: System::Windows::Forms::Button^  buttonExit;
	private: System::Windows::Forms::Button^  buttonToMainMenu2;
	private: System::Windows::Forms::Button^  buttonNewGame;
	private: System::Windows::Forms::Label^  labelWinner;	 
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//обнулення інформації в масивах про запуску програми
			for (int i = 0; i < FIELD_SIZE; ++i)
				for (int j = 0; j < FIELD_SIZE; ++j)
				{
					field1[i][j] = 0;
					field2[i][j] = 0;
					shipsPos1[i][j] = shipsPos2[i][j] = false;
				}
			srand(time(NULL));
			//збереження в змінних протрібних для роботи програми картинок
			whiteField = firstField0_0->Image;
			pointField = firstField0_1->Image;
			krossField = firstField0_2->Image;
			blackField = firstField0_3->Image;

			//auto blackField = gcnew Bitmap("black_field.bmp");
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
	private: System::Windows::Forms::PictureBox^  firstField0_0;
	private: System::Windows::Forms::PictureBox^  firstField0_1;
	private: System::Windows::Forms::PictureBox^  firstField0_2;
	private: System::Windows::Forms::PictureBox^  firstField0_3;
	private: System::Windows::Forms::PictureBox^  firstField0_4;
	private: System::Windows::Forms::PictureBox^  firstField0_5;
	private: System::Windows::Forms::PictureBox^  firstField0_6;
	private: System::Windows::Forms::PictureBox^  firstField0_7;
	private: System::Windows::Forms::PictureBox^  firstField0_8;
	private: System::Windows::Forms::PictureBox^  firstField0_9;
	private: System::Windows::Forms::PictureBox^  firstField1_0;
	private: System::Windows::Forms::PictureBox^  firstField1_1;
	private: System::Windows::Forms::PictureBox^  firstField1_2;
	private: System::Windows::Forms::PictureBox^  firstField1_3;
	private: System::Windows::Forms::PictureBox^  firstField1_4;
	private: System::Windows::Forms::PictureBox^  firstField1_5;
	private: System::Windows::Forms::PictureBox^  firstField1_6;
	private: System::Windows::Forms::PictureBox^  firstField1_7;
	private: System::Windows::Forms::PictureBox^  firstField1_8;
	private: System::Windows::Forms::PictureBox^  firstField1_9;
	private: System::Windows::Forms::PictureBox^  firstField2_0;
	private: System::Windows::Forms::PictureBox^  firstField2_1;
	private: System::Windows::Forms::PictureBox^  firstField2_2;
	private: System::Windows::Forms::PictureBox^  firstField2_3;
	private: System::Windows::Forms::PictureBox^  firstField2_4;
	private: System::Windows::Forms::PictureBox^  firstField2_5;
	private: System::Windows::Forms::PictureBox^  firstField2_6;
	private: System::Windows::Forms::PictureBox^  firstField2_7;
	private: System::Windows::Forms::PictureBox^  firstField2_8;
	private: System::Windows::Forms::PictureBox^  firstField2_9;
	private: System::Windows::Forms::PictureBox^  firstField3_0;
	private: System::Windows::Forms::PictureBox^  firstField3_1;
	private: System::Windows::Forms::PictureBox^  firstField3_2;
	private: System::Windows::Forms::PictureBox^  firstField3_3;
	private: System::Windows::Forms::PictureBox^  firstField3_4;
	private: System::Windows::Forms::PictureBox^  firstField3_5;
	private: System::Windows::Forms::PictureBox^  firstField3_6;
	private: System::Windows::Forms::PictureBox^  firstField3_7;
	private: System::Windows::Forms::PictureBox^  firstField3_8;
	private: System::Windows::Forms::PictureBox^  firstField3_9;
	private: System::Windows::Forms::PictureBox^  firstField4_0;
	private: System::Windows::Forms::PictureBox^  firstField4_1;
	private: System::Windows::Forms::PictureBox^  firstField4_2;
	private: System::Windows::Forms::PictureBox^  firstField4_3;
	private: System::Windows::Forms::PictureBox^  firstField4_4;
	private: System::Windows::Forms::PictureBox^  firstField4_5;
	private: System::Windows::Forms::PictureBox^  firstField4_6;
	private: System::Windows::Forms::PictureBox^  firstField4_7;
	private: System::Windows::Forms::PictureBox^  firstField4_8;
	private: System::Windows::Forms::PictureBox^  firstField4_9;
	private: System::Windows::Forms::PictureBox^  firstField5_0;
	private: System::Windows::Forms::PictureBox^  firstField5_1;
	private: System::Windows::Forms::PictureBox^  firstField5_2;
	private: System::Windows::Forms::PictureBox^  firstField5_3;
	private: System::Windows::Forms::PictureBox^  firstField5_4;
	private: System::Windows::Forms::PictureBox^  firstField5_5;
	private: System::Windows::Forms::PictureBox^  firstField5_6;
	private: System::Windows::Forms::PictureBox^  firstField5_7;
	private: System::Windows::Forms::PictureBox^  firstField5_8;
	private: System::Windows::Forms::PictureBox^  firstField5_9;
	private: System::Windows::Forms::PictureBox^  firstField6_0;
	private: System::Windows::Forms::PictureBox^  firstField6_1;
	private: System::Windows::Forms::PictureBox^  firstField6_2;
	private: System::Windows::Forms::PictureBox^  firstField6_3;
	private: System::Windows::Forms::PictureBox^  firstField6_4;
	private: System::Windows::Forms::PictureBox^  firstField6_5;
	private: System::Windows::Forms::PictureBox^  firstField6_6;
	private: System::Windows::Forms::PictureBox^  firstField6_7;
	private: System::Windows::Forms::PictureBox^  firstField6_8;
	private: System::Windows::Forms::PictureBox^  firstField6_9;
	private: System::Windows::Forms::PictureBox^  firstField7_0;
	private: System::Windows::Forms::PictureBox^  firstField7_1;
	private: System::Windows::Forms::PictureBox^  firstField7_2;
	private: System::Windows::Forms::PictureBox^  firstField7_3;
	private: System::Windows::Forms::PictureBox^  firstField7_4;
	private: System::Windows::Forms::PictureBox^  firstField7_5;
	private: System::Windows::Forms::PictureBox^  firstField7_6;
	private: System::Windows::Forms::PictureBox^  firstField7_7;
	private: System::Windows::Forms::PictureBox^  firstField7_8;
	private: System::Windows::Forms::PictureBox^  firstField7_9;
private: System::Windows::Forms::PictureBox^  firstField8_0;
private: System::Windows::Forms::PictureBox^  firstField8_1;
private: System::Windows::Forms::PictureBox^  firstField8_2;
private: System::Windows::Forms::PictureBox^  firstField8_3;
private: System::Windows::Forms::PictureBox^  firstField8_4;
private: System::Windows::Forms::PictureBox^  firstField8_5;
private: System::Windows::Forms::PictureBox^  firstField8_6;
private: System::Windows::Forms::PictureBox^  firstField8_7;
private: System::Windows::Forms::PictureBox^  firstField8_8;
private: System::Windows::Forms::PictureBox^  firstField8_9;
private: System::Windows::Forms::PictureBox^  firstField9_0;
private: System::Windows::Forms::PictureBox^  firstField9_1;
private: System::Windows::Forms::PictureBox^  firstField9_2;
private: System::Windows::Forms::PictureBox^  firstField9_3;
private: System::Windows::Forms::PictureBox^  firstField9_4;
private: System::Windows::Forms::PictureBox^  firstField9_5;
private: System::Windows::Forms::PictureBox^  firstField9_6;
private: System::Windows::Forms::PictureBox^  firstField9_7;
private: System::Windows::Forms::PictureBox^  firstField9_8;
private: System::Windows::Forms::PictureBox^  firstField9_9;
private: System::Windows::Forms::PictureBox^  secondField0_0;
private: System::Windows::Forms::PictureBox^  secondField0_1;
private: System::Windows::Forms::PictureBox^  secondField0_2;
private: System::Windows::Forms::PictureBox^  secondField0_3;
private: System::Windows::Forms::PictureBox^  secondField0_4;
private: System::Windows::Forms::PictureBox^  secondField0_5;
private: System::Windows::Forms::PictureBox^  secondField0_6;
private: System::Windows::Forms::PictureBox^  secondField0_7;
private: System::Windows::Forms::PictureBox^  secondField0_8;
private: System::Windows::Forms::PictureBox^  secondField0_9;
private: System::Windows::Forms::PictureBox^  secondField1_0;
private: System::Windows::Forms::PictureBox^  secondField1_1;
private: System::Windows::Forms::PictureBox^  secondField1_2;
private: System::Windows::Forms::PictureBox^  secondField1_3;
private: System::Windows::Forms::PictureBox^  secondField1_4;
private: System::Windows::Forms::PictureBox^  secondField1_5;
private: System::Windows::Forms::PictureBox^  secondField1_6;
private: System::Windows::Forms::PictureBox^  secondField1_7;
private: System::Windows::Forms::PictureBox^  secondField1_8;
private: System::Windows::Forms::PictureBox^  secondField1_9;
private: System::Windows::Forms::PictureBox^  secondField2_0;
private: System::Windows::Forms::PictureBox^  secondField2_1;
private: System::Windows::Forms::PictureBox^  secondField2_2;
private: System::Windows::Forms::PictureBox^  secondField2_3;
private: System::Windows::Forms::PictureBox^  secondField2_4;
private: System::Windows::Forms::PictureBox^  secondField2_5;
private: System::Windows::Forms::PictureBox^  secondField2_6;
private: System::Windows::Forms::PictureBox^  secondField2_7;
private: System::Windows::Forms::PictureBox^  secondField2_8;
private: System::Windows::Forms::PictureBox^  secondField2_9;
private: System::Windows::Forms::PictureBox^  secondField3_0;
private: System::Windows::Forms::PictureBox^  secondField3_1;
private: System::Windows::Forms::PictureBox^  secondField3_2;
private: System::Windows::Forms::PictureBox^  secondField3_3;
private: System::Windows::Forms::PictureBox^  secondField3_4;
private: System::Windows::Forms::PictureBox^  secondField3_5;
private: System::Windows::Forms::PictureBox^  secondField3_6;
private: System::Windows::Forms::PictureBox^  secondField3_7;
private: System::Windows::Forms::PictureBox^  secondField3_8;
private: System::Windows::Forms::PictureBox^  secondField3_9;
private: System::Windows::Forms::PictureBox^  secondField4_0;
private: System::Windows::Forms::PictureBox^  secondField4_1;
private: System::Windows::Forms::PictureBox^  secondField4_2;
private: System::Windows::Forms::PictureBox^  secondField4_3;
private: System::Windows::Forms::PictureBox^  secondField4_4;
private: System::Windows::Forms::PictureBox^  secondField4_5;
private: System::Windows::Forms::PictureBox^  secondField4_6;
private: System::Windows::Forms::PictureBox^  secondField4_7;
private: System::Windows::Forms::PictureBox^  secondField4_8;
private: System::Windows::Forms::PictureBox^  secondField4_9;
private: System::Windows::Forms::PictureBox^  secondField5_0;
private: System::Windows::Forms::PictureBox^  secondField5_1;
private: System::Windows::Forms::PictureBox^  secondField5_2;
private: System::Windows::Forms::PictureBox^  secondField5_3;
private: System::Windows::Forms::PictureBox^  secondField5_4;
private: System::Windows::Forms::PictureBox^  secondField5_5;
private: System::Windows::Forms::PictureBox^  secondField5_6;
private: System::Windows::Forms::PictureBox^  secondField5_7;
private: System::Windows::Forms::PictureBox^  secondField5_8;
private: System::Windows::Forms::PictureBox^  secondField5_9;
private: System::Windows::Forms::PictureBox^  secondField6_0;
private: System::Windows::Forms::PictureBox^  secondField6_1;
private: System::Windows::Forms::PictureBox^  secondField6_2;
private: System::Windows::Forms::PictureBox^  secondField6_3;
private: System::Windows::Forms::PictureBox^  secondField6_4;
private: System::Windows::Forms::PictureBox^  secondField6_5;
private: System::Windows::Forms::PictureBox^  secondField6_6;
private: System::Windows::Forms::PictureBox^  secondField6_7;
private: System::Windows::Forms::PictureBox^  secondField6_8;
private: System::Windows::Forms::PictureBox^  secondField6_9;
private: System::Windows::Forms::PictureBox^  secondField7_0;
private: System::Windows::Forms::PictureBox^  secondField7_1;
private: System::Windows::Forms::PictureBox^  secondField7_2;
private: System::Windows::Forms::PictureBox^  secondField7_3;
private: System::Windows::Forms::PictureBox^  secondField7_4;
private: System::Windows::Forms::PictureBox^  secondField7_5;
private: System::Windows::Forms::PictureBox^  secondField7_6;
private: System::Windows::Forms::PictureBox^  secondField7_7;
private: System::Windows::Forms::PictureBox^  secondField7_8;
private: System::Windows::Forms::PictureBox^  secondField7_9;
private: System::Windows::Forms::PictureBox^  secondField8_0;
private: System::Windows::Forms::PictureBox^  secondField8_1;
private: System::Windows::Forms::PictureBox^  secondField8_2;
private: System::Windows::Forms::PictureBox^  secondField8_3;
private: System::Windows::Forms::PictureBox^  secondField8_4;
private: System::Windows::Forms::PictureBox^  secondField8_5;
private: System::Windows::Forms::PictureBox^  secondField8_6;
private: System::Windows::Forms::PictureBox^  secondField8_7;
private: System::Windows::Forms::PictureBox^  secondField8_8;
private: System::Windows::Forms::PictureBox^  secondField8_9;
private: System::Windows::Forms::PictureBox^  secondField9_0;
private: System::Windows::Forms::PictureBox^  secondField9_1;
private: System::Windows::Forms::PictureBox^  secondField9_2;
private: System::Windows::Forms::PictureBox^  secondField9_3;
private: System::Windows::Forms::PictureBox^  secondField9_4;
private: System::Windows::Forms::PictureBox^  secondField9_5;
private: System::Windows::Forms::PictureBox^  secondField9_6;
private: System::Windows::Forms::PictureBox^  secondField9_7;
private: System::Windows::Forms::PictureBox^  secondField9_8;
private: System::Windows::Forms::PictureBox^  secondField9_9;


	protected:

	protected:

	private: System::Windows::Forms::Label^  labelWhoresMove;
	private: System::Windows::Forms::GroupBox^  groupGamespace;
private: System::Windows::Forms::Label^  labelHits2;

private: System::Windows::Forms::Label^  labelShoots2;
private: System::Windows::Forms::Label^  labelHits1;


private: System::Windows::Forms::Label^  labelShoots1;

	private: System::Windows::Forms::Label^  labelPlayer2;
	private: System::Windows::Forms::Label^  labelPlayer1;


private: System::Windows::Forms::GroupBox^  mainMenu;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TextBox^  player2TextBox;
private: System::Windows::Forms::TextBox^  player1TextBox;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Button^  startGame;
private: System::Windows::Forms::Button^  buttonToMainMenu;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->firstField0_0 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField0_1 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField0_2 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField0_3 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField0_4 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField0_5 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField0_6 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField0_7 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField0_8 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField0_9 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField1_0 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField1_1 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField1_2 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField1_3 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField1_4 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField1_5 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField1_6 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField1_7 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField1_8 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField1_9 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField2_0 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField2_1 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField2_2 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField2_3 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField2_4 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField2_5 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField2_6 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField2_7 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField2_8 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField2_9 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField3_0 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField3_1 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField3_2 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField3_3 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField3_4 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField3_5 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField3_6 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField3_7 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField3_8 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField3_9 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField4_0 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField4_1 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField4_2 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField4_3 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField4_4 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField4_5 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField4_6 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField4_7 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField4_8 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField4_9 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField5_0 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField5_1 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField5_2 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField5_3 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField5_4 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField5_5 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField5_6 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField5_7 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField5_8 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField5_9 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField6_0 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField6_1 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField6_2 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField6_3 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField6_4 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField6_5 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField6_6 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField6_7 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField6_8 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField6_9 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField7_0 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField7_1 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField7_2 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField7_3 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField7_4 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField7_5 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField7_6 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField7_7 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField7_8 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField7_9 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField8_0 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField8_1 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField8_2 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField8_3 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField8_4 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField8_5 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField8_6 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField8_7 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField8_8 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField8_9 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField9_0 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField9_1 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField9_2 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField9_3 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField9_4 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField9_5 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField9_6 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField9_7 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField9_8 = (gcnew System::Windows::Forms::PictureBox());
			this->firstField9_9 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField0_0 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField0_1 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField0_2 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField0_3 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField0_4 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField0_5 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField0_6 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField0_7 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField0_8 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField0_9 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField1_0 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField1_1 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField1_2 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField1_3 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField1_4 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField1_5 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField1_6 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField1_7 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField1_8 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField1_9 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField2_0 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField2_1 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField2_2 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField2_3 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField2_4 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField2_5 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField2_6 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField2_7 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField2_8 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField2_9 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField3_0 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField3_1 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField3_2 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField3_3 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField3_4 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField3_5 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField3_6 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField3_7 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField3_8 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField3_9 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField4_0 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField4_1 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField4_2 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField4_3 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField4_4 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField4_5 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField4_6 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField4_7 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField4_8 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField4_9 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField5_0 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField5_1 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField5_2 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField5_3 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField5_4 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField5_5 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField5_6 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField5_7 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField5_8 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField5_9 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField6_0 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField6_1 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField6_2 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField6_3 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField6_4 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField6_5 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField6_6 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField6_7 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField6_8 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField6_9 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField7_0 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField7_1 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField7_2 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField7_3 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField7_4 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField7_5 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField7_6 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField7_7 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField7_8 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField7_9 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField8_0 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField8_1 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField8_2 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField8_3 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField8_4 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField8_5 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField8_6 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField8_7 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField8_8 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField8_9 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField9_0 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField9_1 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField9_2 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField9_3 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField9_4 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField9_5 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField9_6 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField9_7 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField9_8 = (gcnew System::Windows::Forms::PictureBox());
			this->secondField9_9 = (gcnew System::Windows::Forms::PictureBox());
			this->labelWhoresMove = (gcnew System::Windows::Forms::Label());
			this->groupGamespace = (gcnew System::Windows::Forms::GroupBox());
			this->mainMenu = (gcnew System::Windows::Forms::GroupBox());
			this->completionMenu = (gcnew System::Windows::Forms::GroupBox());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonToMainMenu2 = (gcnew System::Windows::Forms::Button());
			this->buttonNewGame = (gcnew System::Windows::Forms::Button());
			this->labelWinner = (gcnew System::Windows::Forms::Label());
			this->player2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->player1TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->startGame = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelShoots1 = (gcnew System::Windows::Forms::Label());
			this->labelPlayer2 = (gcnew System::Windows::Forms::Label());
			this->labelPlayer1 = (gcnew System::Windows::Forms::Label());
			this->buttonToMainMenu = (gcnew System::Windows::Forms::Button());
			this->labelHits2 = (gcnew System::Windows::Forms::Label());
			this->labelShoots2 = (gcnew System::Windows::Forms::Label());
			this->labelHits1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_9))->BeginInit();
			this->groupGamespace->SuspendLayout();
			this->mainMenu->SuspendLayout();
			this->completionMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// firstField0_0
			// 
			this->firstField0_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_0.BackgroundImage")));
			this->firstField0_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_0.Image")));
			this->firstField0_0->Location = System::Drawing::Point(30, 50);
			this->firstField0_0->Name = L"firstField0_0";
			this->firstField0_0->Size = System::Drawing::Size(20, 20);
			this->firstField0_0->TabIndex = 0;
			this->firstField0_0->TabStop = false;
			this->firstField0_0->Click += gcnew System::EventHandler(this, &MyForm::firstField0_0_Click);
			// 
			// firstField0_1
			// 
			this->firstField0_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_1.BackgroundImage")));
			this->firstField0_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_1.Image")));
			this->firstField0_1->Location = System::Drawing::Point(51, 50);
			this->firstField0_1->Name = L"firstField0_1";
			this->firstField0_1->Size = System::Drawing::Size(20, 20);
			this->firstField0_1->TabIndex = 1;
			this->firstField0_1->TabStop = false;
			this->firstField0_1->Click += gcnew System::EventHandler(this, &MyForm::firstField0_1_Click);
			// 
			// firstField0_2
			// 
			this->firstField0_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_2.BackgroundImage")));
			this->firstField0_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_2.Image")));
			this->firstField0_2->Location = System::Drawing::Point(72, 50);
			this->firstField0_2->Name = L"firstField0_2";
			this->firstField0_2->Size = System::Drawing::Size(20, 20);
			this->firstField0_2->TabIndex = 2;
			this->firstField0_2->TabStop = false;
			this->firstField0_2->Click += gcnew System::EventHandler(this, &MyForm::firstField0_2_Click);
			// 
			// firstField0_3
			// 
			this->firstField0_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_3.BackgroundImage")));
			this->firstField0_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_3.Image")));
			this->firstField0_3->Location = System::Drawing::Point(93, 50);
			this->firstField0_3->Name = L"firstField0_3";
			this->firstField0_3->Size = System::Drawing::Size(20, 20);
			this->firstField0_3->TabIndex = 3;
			this->firstField0_3->TabStop = false;
			this->firstField0_3->Click += gcnew System::EventHandler(this, &MyForm::firstField0_3_Click);
			// 
			// firstField0_4
			// 
			this->firstField0_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_4.BackgroundImage")));
			this->firstField0_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_4.Image")));
			this->firstField0_4->Location = System::Drawing::Point(114, 50);
			this->firstField0_4->Name = L"firstField0_4";
			this->firstField0_4->Size = System::Drawing::Size(20, 20);
			this->firstField0_4->TabIndex = 4;
			this->firstField0_4->TabStop = false;
			this->firstField0_4->Click += gcnew System::EventHandler(this, &MyForm::firstField0_4_Click);
			// 
			// firstField0_5
			// 
			this->firstField0_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_5.BackgroundImage")));
			this->firstField0_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_5.Image")));
			this->firstField0_5->Location = System::Drawing::Point(135, 50);
			this->firstField0_5->Name = L"firstField0_5";
			this->firstField0_5->Size = System::Drawing::Size(20, 20);
			this->firstField0_5->TabIndex = 5;
			this->firstField0_5->TabStop = false;
			this->firstField0_5->Click += gcnew System::EventHandler(this, &MyForm::firstField0_5_Click);
			// 
			// firstField0_6
			// 
			this->firstField0_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_6.BackgroundImage")));
			this->firstField0_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_6.Image")));
			this->firstField0_6->Location = System::Drawing::Point(156, 50);
			this->firstField0_6->Name = L"firstField0_6";
			this->firstField0_6->Size = System::Drawing::Size(20, 20);
			this->firstField0_6->TabIndex = 6;
			this->firstField0_6->TabStop = false;
			this->firstField0_6->Click += gcnew System::EventHandler(this, &MyForm::firstField0_6_Click);
			// 
			// firstField0_7
			// 
			this->firstField0_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_7.BackgroundImage")));
			this->firstField0_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_7.Image")));
			this->firstField0_7->Location = System::Drawing::Point(177, 50);
			this->firstField0_7->Name = L"firstField0_7";
			this->firstField0_7->Size = System::Drawing::Size(20, 20);
			this->firstField0_7->TabIndex = 7;
			this->firstField0_7->TabStop = false;
			this->firstField0_7->Click += gcnew System::EventHandler(this, &MyForm::firstField0_7_Click);
			// 
			// firstField0_8
			// 
			this->firstField0_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_8.BackgroundImage")));
			this->firstField0_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_8.Image")));
			this->firstField0_8->Location = System::Drawing::Point(198, 50);
			this->firstField0_8->Name = L"firstField0_8";
			this->firstField0_8->Size = System::Drawing::Size(20, 20);
			this->firstField0_8->TabIndex = 8;
			this->firstField0_8->TabStop = false;
			this->firstField0_8->Click += gcnew System::EventHandler(this, &MyForm::firstField0_8_Click);
			// 
			// firstField0_9
			// 
			this->firstField0_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_9.BackgroundImage")));
			this->firstField0_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField0_9.Image")));
			this->firstField0_9->Location = System::Drawing::Point(219, 50);
			this->firstField0_9->Name = L"firstField0_9";
			this->firstField0_9->Size = System::Drawing::Size(20, 20);
			this->firstField0_9->TabIndex = 9;
			this->firstField0_9->TabStop = false;
			this->firstField0_9->Click += gcnew System::EventHandler(this, &MyForm::firstField0_9_Click);
			// 
			// firstField1_0
			// 
			this->firstField1_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_0.BackgroundImage")));
			this->firstField1_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_0.Image")));
			this->firstField1_0->Location = System::Drawing::Point(30, 71);
			this->firstField1_0->Name = L"firstField1_0";
			this->firstField1_0->Size = System::Drawing::Size(20, 20);
			this->firstField1_0->TabIndex = 10;
			this->firstField1_0->TabStop = false;
			this->firstField1_0->Click += gcnew System::EventHandler(this, &MyForm::firstField1_0_Click);
			// 
			// firstField1_1
			// 
			this->firstField1_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_1.BackgroundImage")));
			this->firstField1_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_1.Image")));
			this->firstField1_1->Location = System::Drawing::Point(51, 71);
			this->firstField1_1->Name = L"firstField1_1";
			this->firstField1_1->Size = System::Drawing::Size(20, 20);
			this->firstField1_1->TabIndex = 11;
			this->firstField1_1->TabStop = false;
			this->firstField1_1->Click += gcnew System::EventHandler(this, &MyForm::firstField1_1_Click);
			// 
			// firstField1_2
			// 
			this->firstField1_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_2.BackgroundImage")));
			this->firstField1_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_2.Image")));
			this->firstField1_2->Location = System::Drawing::Point(72, 71);
			this->firstField1_2->Name = L"firstField1_2";
			this->firstField1_2->Size = System::Drawing::Size(20, 20);
			this->firstField1_2->TabIndex = 12;
			this->firstField1_2->TabStop = false;
			this->firstField1_2->Click += gcnew System::EventHandler(this, &MyForm::firstField1_2_Click);
			// 
			// firstField1_3
			// 
			this->firstField1_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_3.BackgroundImage")));
			this->firstField1_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_3.Image")));
			this->firstField1_3->Location = System::Drawing::Point(93, 71);
			this->firstField1_3->Name = L"firstField1_3";
			this->firstField1_3->Size = System::Drawing::Size(20, 20);
			this->firstField1_3->TabIndex = 13;
			this->firstField1_3->TabStop = false;
			this->firstField1_3->Click += gcnew System::EventHandler(this, &MyForm::firstField1_3_Click);
			// 
			// firstField1_4
			// 
			this->firstField1_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_4.BackgroundImage")));
			this->firstField1_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_4.Image")));
			this->firstField1_4->Location = System::Drawing::Point(114, 71);
			this->firstField1_4->Name = L"firstField1_4";
			this->firstField1_4->Size = System::Drawing::Size(20, 20);
			this->firstField1_4->TabIndex = 14;
			this->firstField1_4->TabStop = false;
			this->firstField1_4->Click += gcnew System::EventHandler(this, &MyForm::firstField1_4_Click);
			// 
			// firstField1_5
			// 
			this->firstField1_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_5.BackgroundImage")));
			this->firstField1_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_5.Image")));
			this->firstField1_5->Location = System::Drawing::Point(135, 71);
			this->firstField1_5->Name = L"firstField1_5";
			this->firstField1_5->Size = System::Drawing::Size(20, 20);
			this->firstField1_5->TabIndex = 15;
			this->firstField1_5->TabStop = false;
			this->firstField1_5->Click += gcnew System::EventHandler(this, &MyForm::firstField1_5_Click);
			// 
			// firstField1_6
			// 
			this->firstField1_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_6.BackgroundImage")));
			this->firstField1_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_6.Image")));
			this->firstField1_6->Location = System::Drawing::Point(156, 71);
			this->firstField1_6->Name = L"firstField1_6";
			this->firstField1_6->Size = System::Drawing::Size(20, 20);
			this->firstField1_6->TabIndex = 16;
			this->firstField1_6->TabStop = false;
			this->firstField1_6->Click += gcnew System::EventHandler(this, &MyForm::firstField1_6_Click);
			// 
			// firstField1_7
			// 
			this->firstField1_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_7.BackgroundImage")));
			this->firstField1_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_7.Image")));
			this->firstField1_7->Location = System::Drawing::Point(177, 71);
			this->firstField1_7->Name = L"firstField1_7";
			this->firstField1_7->Size = System::Drawing::Size(20, 20);
			this->firstField1_7->TabIndex = 17;
			this->firstField1_7->TabStop = false;
			this->firstField1_7->Click += gcnew System::EventHandler(this, &MyForm::firstField1_7_Click);
			// 
			// firstField1_8
			// 
			this->firstField1_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_8.BackgroundImage")));
			this->firstField1_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_8.Image")));
			this->firstField1_8->Location = System::Drawing::Point(198, 71);
			this->firstField1_8->Name = L"firstField1_8";
			this->firstField1_8->Size = System::Drawing::Size(20, 20);
			this->firstField1_8->TabIndex = 18;
			this->firstField1_8->TabStop = false;
			this->firstField1_8->Click += gcnew System::EventHandler(this, &MyForm::firstField1_8_Click);
			// 
			// firstField1_9
			// 
			this->firstField1_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_9.BackgroundImage")));
			this->firstField1_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField1_9.Image")));
			this->firstField1_9->Location = System::Drawing::Point(219, 71);
			this->firstField1_9->Name = L"firstField1_9";
			this->firstField1_9->Size = System::Drawing::Size(20, 20);
			this->firstField1_9->TabIndex = 19;
			this->firstField1_9->TabStop = false;
			this->firstField1_9->Click += gcnew System::EventHandler(this, &MyForm::firstField1_9_Click);
			// 
			// firstField2_0
			// 
			this->firstField2_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_0.BackgroundImage")));
			this->firstField2_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_0.Image")));
			this->firstField2_0->Location = System::Drawing::Point(30, 92);
			this->firstField2_0->Name = L"firstField2_0";
			this->firstField2_0->Size = System::Drawing::Size(20, 20);
			this->firstField2_0->TabIndex = 20;
			this->firstField2_0->TabStop = false;
			this->firstField2_0->Click += gcnew System::EventHandler(this, &MyForm::firstField2_0_Click);
			// 
			// firstField2_1
			// 
			this->firstField2_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_1.BackgroundImage")));
			this->firstField2_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_1.Image")));
			this->firstField2_1->Location = System::Drawing::Point(51, 92);
			this->firstField2_1->Name = L"firstField2_1";
			this->firstField2_1->Size = System::Drawing::Size(20, 20);
			this->firstField2_1->TabIndex = 21;
			this->firstField2_1->TabStop = false;
			this->firstField2_1->Click += gcnew System::EventHandler(this, &MyForm::firstField2_1_Click);
			// 
			// firstField2_2
			// 
			this->firstField2_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_2.BackgroundImage")));
			this->firstField2_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_2.Image")));
			this->firstField2_2->Location = System::Drawing::Point(72, 92);
			this->firstField2_2->Name = L"firstField2_2";
			this->firstField2_2->Size = System::Drawing::Size(20, 20);
			this->firstField2_2->TabIndex = 22;
			this->firstField2_2->TabStop = false;
			this->firstField2_2->Click += gcnew System::EventHandler(this, &MyForm::firstField2_2_Click);
			// 
			// firstField2_3
			// 
			this->firstField2_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_3.BackgroundImage")));
			this->firstField2_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_3.Image")));
			this->firstField2_3->Location = System::Drawing::Point(93, 92);
			this->firstField2_3->Name = L"firstField2_3";
			this->firstField2_3->Size = System::Drawing::Size(20, 20);
			this->firstField2_3->TabIndex = 23;
			this->firstField2_3->TabStop = false;
			this->firstField2_3->Click += gcnew System::EventHandler(this, &MyForm::firstField2_3_Click);
			// 
			// firstField2_4
			// 
			this->firstField2_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_4.BackgroundImage")));
			this->firstField2_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_4.Image")));
			this->firstField2_4->Location = System::Drawing::Point(114, 92);
			this->firstField2_4->Name = L"firstField2_4";
			this->firstField2_4->Size = System::Drawing::Size(20, 20);
			this->firstField2_4->TabIndex = 24;
			this->firstField2_4->TabStop = false;
			this->firstField2_4->Click += gcnew System::EventHandler(this, &MyForm::firstField2_4_Click);
			// 
			// firstField2_5
			// 
			this->firstField2_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_5.BackgroundImage")));
			this->firstField2_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_5.Image")));
			this->firstField2_5->Location = System::Drawing::Point(135, 92);
			this->firstField2_5->Name = L"firstField2_5";
			this->firstField2_5->Size = System::Drawing::Size(20, 20);
			this->firstField2_5->TabIndex = 25;
			this->firstField2_5->TabStop = false;
			this->firstField2_5->Click += gcnew System::EventHandler(this, &MyForm::firstField2_5_Click);
			// 
			// firstField2_6
			// 
			this->firstField2_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_6.BackgroundImage")));
			this->firstField2_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_6.Image")));
			this->firstField2_6->Location = System::Drawing::Point(156, 92);
			this->firstField2_6->Name = L"firstField2_6";
			this->firstField2_6->Size = System::Drawing::Size(20, 20);
			this->firstField2_6->TabIndex = 26;
			this->firstField2_6->TabStop = false;
			this->firstField2_6->Click += gcnew System::EventHandler(this, &MyForm::firstField2_6_Click);
			// 
			// firstField2_7
			// 
			this->firstField2_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_7.BackgroundImage")));
			this->firstField2_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_7.Image")));
			this->firstField2_7->Location = System::Drawing::Point(177, 92);
			this->firstField2_7->Name = L"firstField2_7";
			this->firstField2_7->Size = System::Drawing::Size(20, 20);
			this->firstField2_7->TabIndex = 27;
			this->firstField2_7->TabStop = false;
			this->firstField2_7->Click += gcnew System::EventHandler(this, &MyForm::firstField2_7_Click);
			// 
			// firstField2_8
			// 
			this->firstField2_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_8.BackgroundImage")));
			this->firstField2_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_8.Image")));
			this->firstField2_8->Location = System::Drawing::Point(198, 92);
			this->firstField2_8->Name = L"firstField2_8";
			this->firstField2_8->Size = System::Drawing::Size(20, 20);
			this->firstField2_8->TabIndex = 28;
			this->firstField2_8->TabStop = false;
			this->firstField2_8->Click += gcnew System::EventHandler(this, &MyForm::firstField2_8_Click);
			// 
			// firstField2_9
			// 
			this->firstField2_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_9.BackgroundImage")));
			this->firstField2_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField2_9.Image")));
			this->firstField2_9->Location = System::Drawing::Point(219, 92);
			this->firstField2_9->Name = L"firstField2_9";
			this->firstField2_9->Size = System::Drawing::Size(20, 20);
			this->firstField2_9->TabIndex = 29;
			this->firstField2_9->TabStop = false;
			this->firstField2_9->Click += gcnew System::EventHandler(this, &MyForm::firstField2_9_Click);
			// 
			// firstField3_0
			// 
			this->firstField3_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_0.BackgroundImage")));
			this->firstField3_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_0.Image")));
			this->firstField3_0->Location = System::Drawing::Point(30, 113);
			this->firstField3_0->Name = L"firstField3_0";
			this->firstField3_0->Size = System::Drawing::Size(20, 20);
			this->firstField3_0->TabIndex = 30;
			this->firstField3_0->TabStop = false;
			this->firstField3_0->Click += gcnew System::EventHandler(this, &MyForm::firstField3_0_Click);
			// 
			// firstField3_1
			// 
			this->firstField3_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_1.BackgroundImage")));
			this->firstField3_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_1.Image")));
			this->firstField3_1->Location = System::Drawing::Point(51, 113);
			this->firstField3_1->Name = L"firstField3_1";
			this->firstField3_1->Size = System::Drawing::Size(20, 20);
			this->firstField3_1->TabIndex = 31;
			this->firstField3_1->TabStop = false;
			this->firstField3_1->Click += gcnew System::EventHandler(this, &MyForm::firstField3_1_Click);
			// 
			// firstField3_2
			// 
			this->firstField3_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_2.BackgroundImage")));
			this->firstField3_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_2.Image")));
			this->firstField3_2->Location = System::Drawing::Point(72, 113);
			this->firstField3_2->Name = L"firstField3_2";
			this->firstField3_2->Size = System::Drawing::Size(20, 20);
			this->firstField3_2->TabIndex = 32;
			this->firstField3_2->TabStop = false;
			this->firstField3_2->Click += gcnew System::EventHandler(this, &MyForm::firstField3_2_Click);
			// 
			// firstField3_3
			// 
			this->firstField3_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_3.BackgroundImage")));
			this->firstField3_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_3.Image")));
			this->firstField3_3->Location = System::Drawing::Point(93, 113);
			this->firstField3_3->Name = L"firstField3_3";
			this->firstField3_3->Size = System::Drawing::Size(20, 20);
			this->firstField3_3->TabIndex = 33;
			this->firstField3_3->TabStop = false;
			this->firstField3_3->Click += gcnew System::EventHandler(this, &MyForm::firstField3_3_Click);
			// 
			// firstField3_4
			// 
			this->firstField3_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_4.BackgroundImage")));
			this->firstField3_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_4.Image")));
			this->firstField3_4->Location = System::Drawing::Point(114, 113);
			this->firstField3_4->Name = L"firstField3_4";
			this->firstField3_4->Size = System::Drawing::Size(20, 20);
			this->firstField3_4->TabIndex = 34;
			this->firstField3_4->TabStop = false;
			this->firstField3_4->Click += gcnew System::EventHandler(this, &MyForm::firstField3_4_Click);
			// 
			// firstField3_5
			// 
			this->firstField3_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_5.BackgroundImage")));
			this->firstField3_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_5.Image")));
			this->firstField3_5->Location = System::Drawing::Point(135, 113);
			this->firstField3_5->Name = L"firstField3_5";
			this->firstField3_5->Size = System::Drawing::Size(20, 20);
			this->firstField3_5->TabIndex = 35;
			this->firstField3_5->TabStop = false;
			this->firstField3_5->Click += gcnew System::EventHandler(this, &MyForm::firstField3_5_Click);
			// 
			// firstField3_6
			// 
			this->firstField3_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_6.BackgroundImage")));
			this->firstField3_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_6.Image")));
			this->firstField3_6->Location = System::Drawing::Point(156, 113);
			this->firstField3_6->Name = L"firstField3_6";
			this->firstField3_6->Size = System::Drawing::Size(20, 20);
			this->firstField3_6->TabIndex = 36;
			this->firstField3_6->TabStop = false;
			this->firstField3_6->Click += gcnew System::EventHandler(this, &MyForm::firstField3_6_Click);
			// 
			// firstField3_7
			// 
			this->firstField3_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_7.BackgroundImage")));
			this->firstField3_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_7.Image")));
			this->firstField3_7->Location = System::Drawing::Point(177, 113);
			this->firstField3_7->Name = L"firstField3_7";
			this->firstField3_7->Size = System::Drawing::Size(20, 20);
			this->firstField3_7->TabIndex = 37;
			this->firstField3_7->TabStop = false;
			this->firstField3_7->Click += gcnew System::EventHandler(this, &MyForm::firstField3_7_Click);
			// 
			// firstField3_8
			// 
			this->firstField3_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_8.BackgroundImage")));
			this->firstField3_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_8.Image")));
			this->firstField3_8->Location = System::Drawing::Point(198, 113);
			this->firstField3_8->Name = L"firstField3_8";
			this->firstField3_8->Size = System::Drawing::Size(20, 20);
			this->firstField3_8->TabIndex = 38;
			this->firstField3_8->TabStop = false;
			this->firstField3_8->Click += gcnew System::EventHandler(this, &MyForm::firstField3_8_Click);
			// 
			// firstField3_9
			// 
			this->firstField3_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_9.BackgroundImage")));
			this->firstField3_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField3_9.Image")));
			this->firstField3_9->Location = System::Drawing::Point(219, 113);
			this->firstField3_9->Name = L"firstField3_9";
			this->firstField3_9->Size = System::Drawing::Size(20, 20);
			this->firstField3_9->TabIndex = 39;
			this->firstField3_9->TabStop = false;
			this->firstField3_9->Click += gcnew System::EventHandler(this, &MyForm::firstField3_9_Click);
			// 
			// firstField4_0
			// 
			this->firstField4_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_0.BackgroundImage")));
			this->firstField4_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_0.Image")));
			this->firstField4_0->Location = System::Drawing::Point(30, 134);
			this->firstField4_0->Name = L"firstField4_0";
			this->firstField4_0->Size = System::Drawing::Size(20, 20);
			this->firstField4_0->TabIndex = 40;
			this->firstField4_0->TabStop = false;
			this->firstField4_0->Click += gcnew System::EventHandler(this, &MyForm::firstField4_0_Click);
			// 
			// firstField4_1
			// 
			this->firstField4_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_1.BackgroundImage")));
			this->firstField4_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_1.Image")));
			this->firstField4_1->Location = System::Drawing::Point(51, 134);
			this->firstField4_1->Name = L"firstField4_1";
			this->firstField4_1->Size = System::Drawing::Size(20, 20);
			this->firstField4_1->TabIndex = 41;
			this->firstField4_1->TabStop = false;
			this->firstField4_1->Click += gcnew System::EventHandler(this, &MyForm::firstField4_1_Click);
			// 
			// firstField4_2
			// 
			this->firstField4_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_2.BackgroundImage")));
			this->firstField4_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_2.Image")));
			this->firstField4_2->Location = System::Drawing::Point(72, 134);
			this->firstField4_2->Name = L"firstField4_2";
			this->firstField4_2->Size = System::Drawing::Size(20, 20);
			this->firstField4_2->TabIndex = 42;
			this->firstField4_2->TabStop = false;
			this->firstField4_2->Click += gcnew System::EventHandler(this, &MyForm::firstField4_2_Click);
			// 
			// firstField4_3
			// 
			this->firstField4_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_3.BackgroundImage")));
			this->firstField4_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_3.Image")));
			this->firstField4_3->Location = System::Drawing::Point(93, 134);
			this->firstField4_3->Name = L"firstField4_3";
			this->firstField4_3->Size = System::Drawing::Size(20, 20);
			this->firstField4_3->TabIndex = 43;
			this->firstField4_3->TabStop = false;
			this->firstField4_3->Click += gcnew System::EventHandler(this, &MyForm::firstField4_3_Click);
			// 
			// firstField4_4
			// 
			this->firstField4_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_4.BackgroundImage")));
			this->firstField4_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_4.Image")));
			this->firstField4_4->Location = System::Drawing::Point(114, 134);
			this->firstField4_4->Name = L"firstField4_4";
			this->firstField4_4->Size = System::Drawing::Size(20, 20);
			this->firstField4_4->TabIndex = 44;
			this->firstField4_4->TabStop = false;
			this->firstField4_4->Click += gcnew System::EventHandler(this, &MyForm::firstField4_4_Click);
			// 
			// firstField4_5
			// 
			this->firstField4_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_5.BackgroundImage")));
			this->firstField4_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_5.Image")));
			this->firstField4_5->Location = System::Drawing::Point(135, 134);
			this->firstField4_5->Name = L"firstField4_5";
			this->firstField4_5->Size = System::Drawing::Size(20, 20);
			this->firstField4_5->TabIndex = 45;
			this->firstField4_5->TabStop = false;
			this->firstField4_5->Click += gcnew System::EventHandler(this, &MyForm::firstField4_5_Click);
			// 
			// firstField4_6
			// 
			this->firstField4_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_6.BackgroundImage")));
			this->firstField4_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_6.Image")));
			this->firstField4_6->Location = System::Drawing::Point(156, 134);
			this->firstField4_6->Name = L"firstField4_6";
			this->firstField4_6->Size = System::Drawing::Size(20, 20);
			this->firstField4_6->TabIndex = 46;
			this->firstField4_6->TabStop = false;
			this->firstField4_6->Click += gcnew System::EventHandler(this, &MyForm::firstField4_6_Click);
			// 
			// firstField4_7
			// 
			this->firstField4_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_7.BackgroundImage")));
			this->firstField4_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_7.Image")));
			this->firstField4_7->Location = System::Drawing::Point(177, 134);
			this->firstField4_7->Name = L"firstField4_7";
			this->firstField4_7->Size = System::Drawing::Size(20, 20);
			this->firstField4_7->TabIndex = 47;
			this->firstField4_7->TabStop = false;
			this->firstField4_7->Click += gcnew System::EventHandler(this, &MyForm::firstField4_7_Click);
			// 
			// firstField4_8
			// 
			this->firstField4_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_8.BackgroundImage")));
			this->firstField4_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_8.Image")));
			this->firstField4_8->Location = System::Drawing::Point(198, 134);
			this->firstField4_8->Name = L"firstField4_8";
			this->firstField4_8->Size = System::Drawing::Size(20, 20);
			this->firstField4_8->TabIndex = 48;
			this->firstField4_8->TabStop = false;
			this->firstField4_8->Click += gcnew System::EventHandler(this, &MyForm::firstField4_8_Click);
			// 
			// firstField4_9
			// 
			this->firstField4_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_9.BackgroundImage")));
			this->firstField4_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField4_9.Image")));
			this->firstField4_9->Location = System::Drawing::Point(219, 134);
			this->firstField4_9->Name = L"firstField4_9";
			this->firstField4_9->Size = System::Drawing::Size(20, 20);
			this->firstField4_9->TabIndex = 49;
			this->firstField4_9->TabStop = false;
			this->firstField4_9->Click += gcnew System::EventHandler(this, &MyForm::firstField4_9_Click);
			// 
			// firstField5_0
			// 
			this->firstField5_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_0.BackgroundImage")));
			this->firstField5_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_0.Image")));
			this->firstField5_0->Location = System::Drawing::Point(30, 155);
			this->firstField5_0->Name = L"firstField5_0";
			this->firstField5_0->Size = System::Drawing::Size(20, 20);
			this->firstField5_0->TabIndex = 50;
			this->firstField5_0->TabStop = false;
			this->firstField5_0->Click += gcnew System::EventHandler(this, &MyForm::firstField5_0_Click);
			// 
			// firstField5_1
			// 
			this->firstField5_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_1.BackgroundImage")));
			this->firstField5_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_1.Image")));
			this->firstField5_1->Location = System::Drawing::Point(51, 155);
			this->firstField5_1->Name = L"firstField5_1";
			this->firstField5_1->Size = System::Drawing::Size(20, 20);
			this->firstField5_1->TabIndex = 51;
			this->firstField5_1->TabStop = false;
			this->firstField5_1->Click += gcnew System::EventHandler(this, &MyForm::firstField5_1_Click);
			// 
			// firstField5_2
			// 
			this->firstField5_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_2.BackgroundImage")));
			this->firstField5_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_2.Image")));
			this->firstField5_2->Location = System::Drawing::Point(72, 155);
			this->firstField5_2->Name = L"firstField5_2";
			this->firstField5_2->Size = System::Drawing::Size(20, 20);
			this->firstField5_2->TabIndex = 52;
			this->firstField5_2->TabStop = false;
			this->firstField5_2->Click += gcnew System::EventHandler(this, &MyForm::firstField5_2_Click);
			// 
			// firstField5_3
			// 
			this->firstField5_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_3.BackgroundImage")));
			this->firstField5_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_3.Image")));
			this->firstField5_3->Location = System::Drawing::Point(93, 155);
			this->firstField5_3->Name = L"firstField5_3";
			this->firstField5_3->Size = System::Drawing::Size(20, 20);
			this->firstField5_3->TabIndex = 53;
			this->firstField5_3->TabStop = false;
			this->firstField5_3->Click += gcnew System::EventHandler(this, &MyForm::firstField5_3_Click);
			// 
			// firstField5_4
			// 
			this->firstField5_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_4.BackgroundImage")));
			this->firstField5_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_4.Image")));
			this->firstField5_4->Location = System::Drawing::Point(114, 155);
			this->firstField5_4->Name = L"firstField5_4";
			this->firstField5_4->Size = System::Drawing::Size(20, 20);
			this->firstField5_4->TabIndex = 54;
			this->firstField5_4->TabStop = false;
			this->firstField5_4->Click += gcnew System::EventHandler(this, &MyForm::firstField5_4_Click);
			// 
			// firstField5_5
			// 
			this->firstField5_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_5.BackgroundImage")));
			this->firstField5_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_5.Image")));
			this->firstField5_5->Location = System::Drawing::Point(135, 155);
			this->firstField5_5->Name = L"firstField5_5";
			this->firstField5_5->Size = System::Drawing::Size(20, 20);
			this->firstField5_5->TabIndex = 55;
			this->firstField5_5->TabStop = false;
			this->firstField5_5->Click += gcnew System::EventHandler(this, &MyForm::firstField5_5_Click);
			// 
			// firstField5_6
			// 
			this->firstField5_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_6.BackgroundImage")));
			this->firstField5_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_6.Image")));
			this->firstField5_6->Location = System::Drawing::Point(156, 155);
			this->firstField5_6->Name = L"firstField5_6";
			this->firstField5_6->Size = System::Drawing::Size(20, 20);
			this->firstField5_6->TabIndex = 56;
			this->firstField5_6->TabStop = false;
			this->firstField5_6->Click += gcnew System::EventHandler(this, &MyForm::firstField5_6_Click);
			// 
			// firstField5_7
			// 
			this->firstField5_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_7.BackgroundImage")));
			this->firstField5_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_7.Image")));
			this->firstField5_7->Location = System::Drawing::Point(177, 155);
			this->firstField5_7->Name = L"firstField5_7";
			this->firstField5_7->Size = System::Drawing::Size(20, 20);
			this->firstField5_7->TabIndex = 57;
			this->firstField5_7->TabStop = false;
			this->firstField5_7->Click += gcnew System::EventHandler(this, &MyForm::firstField5_7_Click);
			// 
			// firstField5_8
			// 
			this->firstField5_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_8.BackgroundImage")));
			this->firstField5_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_8.Image")));
			this->firstField5_8->Location = System::Drawing::Point(198, 155);
			this->firstField5_8->Name = L"firstField5_8";
			this->firstField5_8->Size = System::Drawing::Size(20, 20);
			this->firstField5_8->TabIndex = 58;
			this->firstField5_8->TabStop = false;
			this->firstField5_8->Click += gcnew System::EventHandler(this, &MyForm::firstField5_8_Click);
			// 
			// firstField5_9
			// 
			this->firstField5_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_9.BackgroundImage")));
			this->firstField5_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField5_9.Image")));
			this->firstField5_9->Location = System::Drawing::Point(219, 155);
			this->firstField5_9->Name = L"firstField5_9";
			this->firstField5_9->Size = System::Drawing::Size(20, 20);
			this->firstField5_9->TabIndex = 59;
			this->firstField5_9->TabStop = false;
			this->firstField5_9->Click += gcnew System::EventHandler(this, &MyForm::firstField5_9_Click);
			// 
			// firstField6_0
			// 
			this->firstField6_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_0.BackgroundImage")));
			this->firstField6_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_0.Image")));
			this->firstField6_0->Location = System::Drawing::Point(30, 176);
			this->firstField6_0->Name = L"firstField6_0";
			this->firstField6_0->Size = System::Drawing::Size(20, 20);
			this->firstField6_0->TabIndex = 60;
			this->firstField6_0->TabStop = false;
			this->firstField6_0->Click += gcnew System::EventHandler(this, &MyForm::firstField6_0_Click);
			// 
			// firstField6_1
			// 
			this->firstField6_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_1.BackgroundImage")));
			this->firstField6_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_1.Image")));
			this->firstField6_1->Location = System::Drawing::Point(51, 176);
			this->firstField6_1->Name = L"firstField6_1";
			this->firstField6_1->Size = System::Drawing::Size(20, 20);
			this->firstField6_1->TabIndex = 61;
			this->firstField6_1->TabStop = false;
			this->firstField6_1->Click += gcnew System::EventHandler(this, &MyForm::firstField6_1_Click);
			// 
			// firstField6_2
			// 
			this->firstField6_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_2.BackgroundImage")));
			this->firstField6_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_2.Image")));
			this->firstField6_2->Location = System::Drawing::Point(72, 176);
			this->firstField6_2->Name = L"firstField6_2";
			this->firstField6_2->Size = System::Drawing::Size(20, 20);
			this->firstField6_2->TabIndex = 62;
			this->firstField6_2->TabStop = false;
			this->firstField6_2->Click += gcnew System::EventHandler(this, &MyForm::firstField6_2_Click);
			// 
			// firstField6_3
			// 
			this->firstField6_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_3.BackgroundImage")));
			this->firstField6_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_3.Image")));
			this->firstField6_3->Location = System::Drawing::Point(93, 176);
			this->firstField6_3->Name = L"firstField6_3";
			this->firstField6_3->Size = System::Drawing::Size(20, 20);
			this->firstField6_3->TabIndex = 63;
			this->firstField6_3->TabStop = false;
			this->firstField6_3->Click += gcnew System::EventHandler(this, &MyForm::firstField6_3_Click);
			// 
			// firstField6_4
			// 
			this->firstField6_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_4.BackgroundImage")));
			this->firstField6_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_4.Image")));
			this->firstField6_4->Location = System::Drawing::Point(114, 176);
			this->firstField6_4->Name = L"firstField6_4";
			this->firstField6_4->Size = System::Drawing::Size(20, 20);
			this->firstField6_4->TabIndex = 64;
			this->firstField6_4->TabStop = false;
			this->firstField6_4->Click += gcnew System::EventHandler(this, &MyForm::firstField6_4_Click);
			// 
			// firstField6_5
			// 
			this->firstField6_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_5.BackgroundImage")));
			this->firstField6_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_5.Image")));
			this->firstField6_5->Location = System::Drawing::Point(135, 176);
			this->firstField6_5->Name = L"firstField6_5";
			this->firstField6_5->Size = System::Drawing::Size(20, 20);
			this->firstField6_5->TabIndex = 65;
			this->firstField6_5->TabStop = false;
			this->firstField6_5->Click += gcnew System::EventHandler(this, &MyForm::firstField6_5_Click);
			// 
			// firstField6_6
			// 
			this->firstField6_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_6.BackgroundImage")));
			this->firstField6_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_6.Image")));
			this->firstField6_6->Location = System::Drawing::Point(156, 176);
			this->firstField6_6->Name = L"firstField6_6";
			this->firstField6_6->Size = System::Drawing::Size(20, 20);
			this->firstField6_6->TabIndex = 66;
			this->firstField6_6->TabStop = false;
			this->firstField6_6->Click += gcnew System::EventHandler(this, &MyForm::firstField6_6_Click);
			// 
			// firstField6_7
			// 
			this->firstField6_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_7.BackgroundImage")));
			this->firstField6_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_7.Image")));
			this->firstField6_7->Location = System::Drawing::Point(177, 176);
			this->firstField6_7->Name = L"firstField6_7";
			this->firstField6_7->Size = System::Drawing::Size(20, 20);
			this->firstField6_7->TabIndex = 67;
			this->firstField6_7->TabStop = false;
			this->firstField6_7->Click += gcnew System::EventHandler(this, &MyForm::firstField6_7_Click);
			// 
			// firstField6_8
			// 
			this->firstField6_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_8.BackgroundImage")));
			this->firstField6_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_8.Image")));
			this->firstField6_8->Location = System::Drawing::Point(198, 176);
			this->firstField6_8->Name = L"firstField6_8";
			this->firstField6_8->Size = System::Drawing::Size(20, 20);
			this->firstField6_8->TabIndex = 68;
			this->firstField6_8->TabStop = false;
			this->firstField6_8->Click += gcnew System::EventHandler(this, &MyForm::firstField6_8_Click);
			// 
			// firstField6_9
			// 
			this->firstField6_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_9.BackgroundImage")));
			this->firstField6_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField6_9.Image")));
			this->firstField6_9->Location = System::Drawing::Point(219, 176);
			this->firstField6_9->Name = L"firstField6_9";
			this->firstField6_9->Size = System::Drawing::Size(20, 20);
			this->firstField6_9->TabIndex = 69;
			this->firstField6_9->TabStop = false;
			this->firstField6_9->Click += gcnew System::EventHandler(this, &MyForm::firstField6_9_Click);
			// 
			// firstField7_0
			// 
			this->firstField7_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_0.BackgroundImage")));
			this->firstField7_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_0.Image")));
			this->firstField7_0->Location = System::Drawing::Point(30, 197);
			this->firstField7_0->Name = L"firstField7_0";
			this->firstField7_0->Size = System::Drawing::Size(20, 20);
			this->firstField7_0->TabIndex = 70;
			this->firstField7_0->TabStop = false;
			this->firstField7_0->Click += gcnew System::EventHandler(this, &MyForm::firstField7_0_Click);
			// 
			// firstField7_1
			// 
			this->firstField7_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_1.BackgroundImage")));
			this->firstField7_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_1.Image")));
			this->firstField7_1->Location = System::Drawing::Point(51, 197);
			this->firstField7_1->Name = L"firstField7_1";
			this->firstField7_1->Size = System::Drawing::Size(20, 20);
			this->firstField7_1->TabIndex = 71;
			this->firstField7_1->TabStop = false;
			this->firstField7_1->Click += gcnew System::EventHandler(this, &MyForm::firstField7_1_Click);
			// 
			// firstField7_2
			// 
			this->firstField7_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_2.BackgroundImage")));
			this->firstField7_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_2.Image")));
			this->firstField7_2->Location = System::Drawing::Point(72, 197);
			this->firstField7_2->Name = L"firstField7_2";
			this->firstField7_2->Size = System::Drawing::Size(20, 20);
			this->firstField7_2->TabIndex = 72;
			this->firstField7_2->TabStop = false;
			this->firstField7_2->Click += gcnew System::EventHandler(this, &MyForm::firstField7_2_Click);
			// 
			// firstField7_3
			// 
			this->firstField7_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_3.BackgroundImage")));
			this->firstField7_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_3.Image")));
			this->firstField7_3->Location = System::Drawing::Point(93, 197);
			this->firstField7_3->Name = L"firstField7_3";
			this->firstField7_3->Size = System::Drawing::Size(20, 20);
			this->firstField7_3->TabIndex = 73;
			this->firstField7_3->TabStop = false;
			this->firstField7_3->Click += gcnew System::EventHandler(this, &MyForm::firstField7_3_Click);
			// 
			// firstField7_4
			// 
			this->firstField7_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_4.BackgroundImage")));
			this->firstField7_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_4.Image")));
			this->firstField7_4->Location = System::Drawing::Point(114, 197);
			this->firstField7_4->Name = L"firstField7_4";
			this->firstField7_4->Size = System::Drawing::Size(20, 20);
			this->firstField7_4->TabIndex = 74;
			this->firstField7_4->TabStop = false;
			this->firstField7_4->Click += gcnew System::EventHandler(this, &MyForm::firstField7_4_Click);
			// 
			// firstField7_5
			// 
			this->firstField7_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_5.BackgroundImage")));
			this->firstField7_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_5.Image")));
			this->firstField7_5->Location = System::Drawing::Point(135, 197);
			this->firstField7_5->Name = L"firstField7_5";
			this->firstField7_5->Size = System::Drawing::Size(20, 20);
			this->firstField7_5->TabIndex = 75;
			this->firstField7_5->TabStop = false;
			this->firstField7_5->Click += gcnew System::EventHandler(this, &MyForm::firstField7_5_Click);
			// 
			// firstField7_6
			// 
			this->firstField7_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_6.BackgroundImage")));
			this->firstField7_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_6.Image")));
			this->firstField7_6->Location = System::Drawing::Point(156, 197);
			this->firstField7_6->Name = L"firstField7_6";
			this->firstField7_6->Size = System::Drawing::Size(20, 20);
			this->firstField7_6->TabIndex = 76;
			this->firstField7_6->TabStop = false;
			this->firstField7_6->Click += gcnew System::EventHandler(this, &MyForm::firstField7_6_Click);
			// 
			// firstField7_7
			// 
			this->firstField7_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_7.BackgroundImage")));
			this->firstField7_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_7.Image")));
			this->firstField7_7->Location = System::Drawing::Point(177, 197);
			this->firstField7_7->Name = L"firstField7_7";
			this->firstField7_7->Size = System::Drawing::Size(20, 20);
			this->firstField7_7->TabIndex = 77;
			this->firstField7_7->TabStop = false;
			this->firstField7_7->Click += gcnew System::EventHandler(this, &MyForm::firstField7_7_Click);
			// 
			// firstField7_8
			// 
			this->firstField7_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_8.BackgroundImage")));
			this->firstField7_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_8.Image")));
			this->firstField7_8->Location = System::Drawing::Point(198, 197);
			this->firstField7_8->Name = L"firstField7_8";
			this->firstField7_8->Size = System::Drawing::Size(20, 20);
			this->firstField7_8->TabIndex = 78;
			this->firstField7_8->TabStop = false;
			this->firstField7_8->Click += gcnew System::EventHandler(this, &MyForm::firstField7_8_Click);
			// 
			// firstField7_9
			// 
			this->firstField7_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_9.BackgroundImage")));
			this->firstField7_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField7_9.Image")));
			this->firstField7_9->Location = System::Drawing::Point(219, 197);
			this->firstField7_9->Name = L"firstField7_9";
			this->firstField7_9->Size = System::Drawing::Size(20, 20);
			this->firstField7_9->TabIndex = 79;
			this->firstField7_9->TabStop = false;
			this->firstField7_9->Click += gcnew System::EventHandler(this, &MyForm::firstField7_9_Click);
			// 
			// firstField8_0
			// 
			this->firstField8_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_0.BackgroundImage")));
			this->firstField8_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_0.Image")));
			this->firstField8_0->Location = System::Drawing::Point(30, 218);
			this->firstField8_0->Name = L"firstField8_0";
			this->firstField8_0->Size = System::Drawing::Size(20, 20);
			this->firstField8_0->TabIndex = 80;
			this->firstField8_0->TabStop = false;
			this->firstField8_0->Click += gcnew System::EventHandler(this, &MyForm::firstField8_0_Click);
			// 
			// firstField8_1
			// 
			this->firstField8_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_1.BackgroundImage")));
			this->firstField8_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_1.Image")));
			this->firstField8_1->Location = System::Drawing::Point(51, 218);
			this->firstField8_1->Name = L"firstField8_1";
			this->firstField8_1->Size = System::Drawing::Size(20, 20);
			this->firstField8_1->TabIndex = 81;
			this->firstField8_1->TabStop = false;
			this->firstField8_1->Click += gcnew System::EventHandler(this, &MyForm::firstField8_1_Click);
			// 
			// firstField8_2
			// 
			this->firstField8_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_2.BackgroundImage")));
			this->firstField8_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_2.Image")));
			this->firstField8_2->Location = System::Drawing::Point(72, 218);
			this->firstField8_2->Name = L"firstField8_2";
			this->firstField8_2->Size = System::Drawing::Size(20, 20);
			this->firstField8_2->TabIndex = 82;
			this->firstField8_2->TabStop = false;
			this->firstField8_2->Click += gcnew System::EventHandler(this, &MyForm::firstField8_2_Click);
			// 
			// firstField8_3
			// 
			this->firstField8_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_3.BackgroundImage")));
			this->firstField8_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_3.Image")));
			this->firstField8_3->Location = System::Drawing::Point(93, 218);
			this->firstField8_3->Name = L"firstField8_3";
			this->firstField8_3->Size = System::Drawing::Size(20, 20);
			this->firstField8_3->TabIndex = 83;
			this->firstField8_3->TabStop = false;
			this->firstField8_3->Click += gcnew System::EventHandler(this, &MyForm::firstField8_3_Click);
			// 
			// firstField8_4
			// 
			this->firstField8_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_4.BackgroundImage")));
			this->firstField8_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_4.Image")));
			this->firstField8_4->Location = System::Drawing::Point(114, 218);
			this->firstField8_4->Name = L"firstField8_4";
			this->firstField8_4->Size = System::Drawing::Size(20, 20);
			this->firstField8_4->TabIndex = 84;
			this->firstField8_4->TabStop = false;
			this->firstField8_4->Click += gcnew System::EventHandler(this, &MyForm::firstField8_4_Click);
			// 
			// firstField8_5
			// 
			this->firstField8_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_5.BackgroundImage")));
			this->firstField8_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_5.Image")));
			this->firstField8_5->Location = System::Drawing::Point(135, 218);
			this->firstField8_5->Name = L"firstField8_5";
			this->firstField8_5->Size = System::Drawing::Size(20, 20);
			this->firstField8_5->TabIndex = 85;
			this->firstField8_5->TabStop = false;
			this->firstField8_5->Click += gcnew System::EventHandler(this, &MyForm::firstField8_5_Click);
			// 
			// firstField8_6
			// 
			this->firstField8_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_6.BackgroundImage")));
			this->firstField8_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_6.Image")));
			this->firstField8_6->Location = System::Drawing::Point(156, 218);
			this->firstField8_6->Name = L"firstField8_6";
			this->firstField8_6->Size = System::Drawing::Size(20, 20);
			this->firstField8_6->TabIndex = 86;
			this->firstField8_6->TabStop = false;
			this->firstField8_6->Click += gcnew System::EventHandler(this, &MyForm::firstField8_6_Click);
			// 
			// firstField8_7
			// 
			this->firstField8_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_7.BackgroundImage")));
			this->firstField8_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_7.Image")));
			this->firstField8_7->Location = System::Drawing::Point(177, 218);
			this->firstField8_7->Name = L"firstField8_7";
			this->firstField8_7->Size = System::Drawing::Size(20, 20);
			this->firstField8_7->TabIndex = 87;
			this->firstField8_7->TabStop = false;
			this->firstField8_7->Click += gcnew System::EventHandler(this, &MyForm::firstField8_7_Click);
			// 
			// firstField8_8
			// 
			this->firstField8_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_8.BackgroundImage")));
			this->firstField8_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_8.Image")));
			this->firstField8_8->Location = System::Drawing::Point(198, 218);
			this->firstField8_8->Name = L"firstField8_8";
			this->firstField8_8->Size = System::Drawing::Size(20, 20);
			this->firstField8_8->TabIndex = 88;
			this->firstField8_8->TabStop = false;
			this->firstField8_8->Click += gcnew System::EventHandler(this, &MyForm::firstField8_8_Click);
			// 
			// firstField8_9
			// 
			this->firstField8_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_9.BackgroundImage")));
			this->firstField8_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField8_9.Image")));
			this->firstField8_9->Location = System::Drawing::Point(219, 218);
			this->firstField8_9->Name = L"firstField8_9";
			this->firstField8_9->Size = System::Drawing::Size(20, 20);
			this->firstField8_9->TabIndex = 89;
			this->firstField8_9->TabStop = false;
			this->firstField8_9->Click += gcnew System::EventHandler(this, &MyForm::firstField8_9_Click);
			// 
			// firstField9_0
			// 
			this->firstField9_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_0.BackgroundImage")));
			this->firstField9_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_0.Image")));
			this->firstField9_0->Location = System::Drawing::Point(30, 239);
			this->firstField9_0->Name = L"firstField9_0";
			this->firstField9_0->Size = System::Drawing::Size(20, 20);
			this->firstField9_0->TabIndex = 90;
			this->firstField9_0->TabStop = false;
			this->firstField9_0->Click += gcnew System::EventHandler(this, &MyForm::firstField9_0_Click);
			// 
			// firstField9_1
			// 
			this->firstField9_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_1.BackgroundImage")));
			this->firstField9_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_1.Image")));
			this->firstField9_1->Location = System::Drawing::Point(51, 239);
			this->firstField9_1->Name = L"firstField9_1";
			this->firstField9_1->Size = System::Drawing::Size(20, 20);
			this->firstField9_1->TabIndex = 91;
			this->firstField9_1->TabStop = false;
			this->firstField9_1->Click += gcnew System::EventHandler(this, &MyForm::firstField9_1_Click);
			// 
			// firstField9_2
			// 
			this->firstField9_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_2.BackgroundImage")));
			this->firstField9_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_2.Image")));
			this->firstField9_2->Location = System::Drawing::Point(72, 239);
			this->firstField9_2->Name = L"firstField9_2";
			this->firstField9_2->Size = System::Drawing::Size(20, 20);
			this->firstField9_2->TabIndex = 92;
			this->firstField9_2->TabStop = false;
			this->firstField9_2->Click += gcnew System::EventHandler(this, &MyForm::firstField9_2_Click);
			// 
			// firstField9_3
			// 
			this->firstField9_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_3.BackgroundImage")));
			this->firstField9_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_3.Image")));
			this->firstField9_3->Location = System::Drawing::Point(93, 239);
			this->firstField9_3->Name = L"firstField9_3";
			this->firstField9_3->Size = System::Drawing::Size(20, 20);
			this->firstField9_3->TabIndex = 93;
			this->firstField9_3->TabStop = false;
			this->firstField9_3->Click += gcnew System::EventHandler(this, &MyForm::firstField9_3_Click);
			// 
			// firstField9_4
			// 
			this->firstField9_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_4.BackgroundImage")));
			this->firstField9_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_4.Image")));
			this->firstField9_4->Location = System::Drawing::Point(114, 239);
			this->firstField9_4->Name = L"firstField9_4";
			this->firstField9_4->Size = System::Drawing::Size(20, 20);
			this->firstField9_4->TabIndex = 94;
			this->firstField9_4->TabStop = false;
			this->firstField9_4->Click += gcnew System::EventHandler(this, &MyForm::firstField9_4_Click);
			// 
			// firstField9_5
			// 
			this->firstField9_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_5.BackgroundImage")));
			this->firstField9_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_5.Image")));
			this->firstField9_5->Location = System::Drawing::Point(135, 239);
			this->firstField9_5->Name = L"firstField9_5";
			this->firstField9_5->Size = System::Drawing::Size(20, 20);
			this->firstField9_5->TabIndex = 95;
			this->firstField9_5->TabStop = false;
			this->firstField9_5->Click += gcnew System::EventHandler(this, &MyForm::firstField9_5_Click);
			// 
			// firstField9_6
			// 
			this->firstField9_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_6.BackgroundImage")));
			this->firstField9_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_6.Image")));
			this->firstField9_6->Location = System::Drawing::Point(156, 239);
			this->firstField9_6->Name = L"firstField9_6";
			this->firstField9_6->Size = System::Drawing::Size(20, 20);
			this->firstField9_6->TabIndex = 96;
			this->firstField9_6->TabStop = false;
			this->firstField9_6->Click += gcnew System::EventHandler(this, &MyForm::firstField9_6_Click);
			// 
			// firstField9_7
			// 
			this->firstField9_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_7.BackgroundImage")));
			this->firstField9_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_7.Image")));
			this->firstField9_7->Location = System::Drawing::Point(177, 239);
			this->firstField9_7->Name = L"firstField9_7";
			this->firstField9_7->Size = System::Drawing::Size(20, 20);
			this->firstField9_7->TabIndex = 97;
			this->firstField9_7->TabStop = false;
			this->firstField9_7->Click += gcnew System::EventHandler(this, &MyForm::firstField9_7_Click);
			// 
			// firstField9_8
			// 
			this->firstField9_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_8.BackgroundImage")));
			this->firstField9_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_8.Image")));
			this->firstField9_8->Location = System::Drawing::Point(198, 239);
			this->firstField9_8->Name = L"firstField9_8";
			this->firstField9_8->Size = System::Drawing::Size(20, 20);
			this->firstField9_8->TabIndex = 98;
			this->firstField9_8->TabStop = false;
			this->firstField9_8->Click += gcnew System::EventHandler(this, &MyForm::firstField9_8_Click);
			// 
			// firstField9_9
			// 
			this->firstField9_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_9.BackgroundImage")));
			this->firstField9_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstField9_9.Image")));
			this->firstField9_9->Location = System::Drawing::Point(219, 239);
			this->firstField9_9->Name = L"firstField9_9";
			this->firstField9_9->Size = System::Drawing::Size(20, 20);
			this->firstField9_9->TabIndex = 99;
			this->firstField9_9->TabStop = false;
			this->firstField9_9->Click += gcnew System::EventHandler(this, &MyForm::firstField9_9_Click);
			// 
			// secondField0_0
			// 
			this->secondField0_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_0.BackgroundImage")));
			this->secondField0_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_0.Image")));
			this->secondField0_0->Location = System::Drawing::Point(292, 50);
			this->secondField0_0->Name = L"secondField0_0";
			this->secondField0_0->Size = System::Drawing::Size(20, 20);
			this->secondField0_0->TabIndex = 100;
			this->secondField0_0->TabStop = false;
			this->secondField0_0->Click += gcnew System::EventHandler(this, &MyForm::secondField0_0_Click);
			// 
			// secondField0_1
			// 
			this->secondField0_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_1.BackgroundImage")));
			this->secondField0_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_1.Image")));
			this->secondField0_1->Location = System::Drawing::Point(313, 50);
			this->secondField0_1->Name = L"secondField0_1";
			this->secondField0_1->Size = System::Drawing::Size(20, 20);
			this->secondField0_1->TabIndex = 101;
			this->secondField0_1->TabStop = false;
			this->secondField0_1->Click += gcnew System::EventHandler(this, &MyForm::secondField0_1_Click);
			// 
			// secondField0_2
			// 
			this->secondField0_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_2.BackgroundImage")));
			this->secondField0_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_2.Image")));
			this->secondField0_2->Location = System::Drawing::Point(334, 50);
			this->secondField0_2->Name = L"secondField0_2";
			this->secondField0_2->Size = System::Drawing::Size(20, 20);
			this->secondField0_2->TabIndex = 102;
			this->secondField0_2->TabStop = false;
			this->secondField0_2->Click += gcnew System::EventHandler(this, &MyForm::secondField0_2_Click);
			// 
			// secondField0_3
			// 
			this->secondField0_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_3.BackgroundImage")));
			this->secondField0_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_3.Image")));
			this->secondField0_3->Location = System::Drawing::Point(355, 50);
			this->secondField0_3->Name = L"secondField0_3";
			this->secondField0_3->Size = System::Drawing::Size(20, 20);
			this->secondField0_3->TabIndex = 103;
			this->secondField0_3->TabStop = false;
			this->secondField0_3->Click += gcnew System::EventHandler(this, &MyForm::secondField0_3_Click);
			// 
			// secondField0_4
			// 
			this->secondField0_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_4.BackgroundImage")));
			this->secondField0_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_4.Image")));
			this->secondField0_4->Location = System::Drawing::Point(376, 50);
			this->secondField0_4->Name = L"secondField0_4";
			this->secondField0_4->Size = System::Drawing::Size(20, 20);
			this->secondField0_4->TabIndex = 104;
			this->secondField0_4->TabStop = false;
			this->secondField0_4->Click += gcnew System::EventHandler(this, &MyForm::secondField0_4_Click);
			// 
			// secondField0_5
			// 
			this->secondField0_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_5.BackgroundImage")));
			this->secondField0_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_5.Image")));
			this->secondField0_5->Location = System::Drawing::Point(397, 50);
			this->secondField0_5->Name = L"secondField0_5";
			this->secondField0_5->Size = System::Drawing::Size(20, 20);
			this->secondField0_5->TabIndex = 105;
			this->secondField0_5->TabStop = false;
			this->secondField0_5->Click += gcnew System::EventHandler(this, &MyForm::secondField0_5_Click);
			// 
			// secondField0_6
			// 
			this->secondField0_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_6.BackgroundImage")));
			this->secondField0_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_6.Image")));
			this->secondField0_6->Location = System::Drawing::Point(418, 50);
			this->secondField0_6->Name = L"secondField0_6";
			this->secondField0_6->Size = System::Drawing::Size(20, 20);
			this->secondField0_6->TabIndex = 106;
			this->secondField0_6->TabStop = false;
			this->secondField0_6->Click += gcnew System::EventHandler(this, &MyForm::secondField0_6_Click);
			// 
			// secondField0_7
			// 
			this->secondField0_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_7.BackgroundImage")));
			this->secondField0_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_7.Image")));
			this->secondField0_7->Location = System::Drawing::Point(439, 50);
			this->secondField0_7->Name = L"secondField0_7";
			this->secondField0_7->Size = System::Drawing::Size(20, 20);
			this->secondField0_7->TabIndex = 107;
			this->secondField0_7->TabStop = false;
			this->secondField0_7->Click += gcnew System::EventHandler(this, &MyForm::secondField0_7_Click);
			// 
			// secondField0_8
			// 
			this->secondField0_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_8.BackgroundImage")));
			this->secondField0_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_8.Image")));
			this->secondField0_8->Location = System::Drawing::Point(460, 50);
			this->secondField0_8->Name = L"secondField0_8";
			this->secondField0_8->Size = System::Drawing::Size(20, 20);
			this->secondField0_8->TabIndex = 108;
			this->secondField0_8->TabStop = false;
			this->secondField0_8->Click += gcnew System::EventHandler(this, &MyForm::secondField0_8_Click);
			// 
			// secondField0_9
			// 
			this->secondField0_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_9.BackgroundImage")));
			this->secondField0_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField0_9.Image")));
			this->secondField0_9->Location = System::Drawing::Point(481, 50);
			this->secondField0_9->Name = L"secondField0_9";
			this->secondField0_9->Size = System::Drawing::Size(20, 20);
			this->secondField0_9->TabIndex = 109;
			this->secondField0_9->TabStop = false;
			this->secondField0_9->Click += gcnew System::EventHandler(this, &MyForm::secondField0_9_Click);
			// 
			// secondField1_0
			// 
			this->secondField1_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_0.BackgroundImage")));
			this->secondField1_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_0.Image")));
			this->secondField1_0->Location = System::Drawing::Point(292, 71);
			this->secondField1_0->Name = L"secondField1_0";
			this->secondField1_0->Size = System::Drawing::Size(20, 20);
			this->secondField1_0->TabIndex = 110;
			this->secondField1_0->TabStop = false;
			this->secondField1_0->Click += gcnew System::EventHandler(this, &MyForm::secondField1_0_Click);
			// 
			// secondField1_1
			// 
			this->secondField1_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_1.BackgroundImage")));
			this->secondField1_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_1.Image")));
			this->secondField1_1->Location = System::Drawing::Point(313, 71);
			this->secondField1_1->Name = L"secondField1_1";
			this->secondField1_1->Size = System::Drawing::Size(20, 20);
			this->secondField1_1->TabIndex = 111;
			this->secondField1_1->TabStop = false;
			this->secondField1_1->Click += gcnew System::EventHandler(this, &MyForm::secondField1_1_Click);
			// 
			// secondField1_2
			// 
			this->secondField1_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_2.BackgroundImage")));
			this->secondField1_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_2.Image")));
			this->secondField1_2->Location = System::Drawing::Point(334, 71);
			this->secondField1_2->Name = L"secondField1_2";
			this->secondField1_2->Size = System::Drawing::Size(20, 20);
			this->secondField1_2->TabIndex = 112;
			this->secondField1_2->TabStop = false;
			this->secondField1_2->Click += gcnew System::EventHandler(this, &MyForm::secondField1_2_Click);
			// 
			// secondField1_3
			// 
			this->secondField1_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_3.BackgroundImage")));
			this->secondField1_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_3.Image")));
			this->secondField1_3->Location = System::Drawing::Point(355, 71);
			this->secondField1_3->Name = L"secondField1_3";
			this->secondField1_3->Size = System::Drawing::Size(20, 20);
			this->secondField1_3->TabIndex = 113;
			this->secondField1_3->TabStop = false;
			this->secondField1_3->Click += gcnew System::EventHandler(this, &MyForm::secondField1_3_Click);
			// 
			// secondField1_4
			// 
			this->secondField1_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_4.BackgroundImage")));
			this->secondField1_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_4.Image")));
			this->secondField1_4->Location = System::Drawing::Point(376, 71);
			this->secondField1_4->Name = L"secondField1_4";
			this->secondField1_4->Size = System::Drawing::Size(20, 20);
			this->secondField1_4->TabIndex = 114;
			this->secondField1_4->TabStop = false;
			this->secondField1_4->Click += gcnew System::EventHandler(this, &MyForm::secondField1_4_Click);
			// 
			// secondField1_5
			// 
			this->secondField1_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_5.BackgroundImage")));
			this->secondField1_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_5.Image")));
			this->secondField1_5->Location = System::Drawing::Point(397, 71);
			this->secondField1_5->Name = L"secondField1_5";
			this->secondField1_5->Size = System::Drawing::Size(20, 20);
			this->secondField1_5->TabIndex = 115;
			this->secondField1_5->TabStop = false;
			this->secondField1_5->Click += gcnew System::EventHandler(this, &MyForm::secondField1_5_Click);
			// 
			// secondField1_6
			// 
			this->secondField1_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_6.BackgroundImage")));
			this->secondField1_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_6.Image")));
			this->secondField1_6->Location = System::Drawing::Point(418, 71);
			this->secondField1_6->Name = L"secondField1_6";
			this->secondField1_6->Size = System::Drawing::Size(20, 20);
			this->secondField1_6->TabIndex = 116;
			this->secondField1_6->TabStop = false;
			this->secondField1_6->Click += gcnew System::EventHandler(this, &MyForm::secondField1_6_Click);
			// 
			// secondField1_7
			// 
			this->secondField1_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_7.BackgroundImage")));
			this->secondField1_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_7.Image")));
			this->secondField1_7->Location = System::Drawing::Point(439, 71);
			this->secondField1_7->Name = L"secondField1_7";
			this->secondField1_7->Size = System::Drawing::Size(20, 20);
			this->secondField1_7->TabIndex = 117;
			this->secondField1_7->TabStop = false;
			this->secondField1_7->Click += gcnew System::EventHandler(this, &MyForm::secondField1_7_Click);
			// 
			// secondField1_8
			// 
			this->secondField1_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_8.BackgroundImage")));
			this->secondField1_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_8.Image")));
			this->secondField1_8->Location = System::Drawing::Point(460, 71);
			this->secondField1_8->Name = L"secondField1_8";
			this->secondField1_8->Size = System::Drawing::Size(20, 20);
			this->secondField1_8->TabIndex = 118;
			this->secondField1_8->TabStop = false;
			this->secondField1_8->Click += gcnew System::EventHandler(this, &MyForm::secondField1_8_Click);
			// 
			// secondField1_9
			// 
			this->secondField1_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_9.BackgroundImage")));
			this->secondField1_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField1_9.Image")));
			this->secondField1_9->Location = System::Drawing::Point(481, 71);
			this->secondField1_9->Name = L"secondField1_9";
			this->secondField1_9->Size = System::Drawing::Size(20, 20);
			this->secondField1_9->TabIndex = 119;
			this->secondField1_9->TabStop = false;
			this->secondField1_9->Click += gcnew System::EventHandler(this, &MyForm::secondField1_9_Click);
			// 
			// secondField2_0
			// 
			this->secondField2_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_0.BackgroundImage")));
			this->secondField2_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_0.Image")));
			this->secondField2_0->Location = System::Drawing::Point(292, 92);
			this->secondField2_0->Name = L"secondField2_0";
			this->secondField2_0->Size = System::Drawing::Size(20, 20);
			this->secondField2_0->TabIndex = 120;
			this->secondField2_0->TabStop = false;
			this->secondField2_0->Click += gcnew System::EventHandler(this, &MyForm::secondField2_0_Click);
			// 
			// secondField2_1
			// 
			this->secondField2_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_1.BackgroundImage")));
			this->secondField2_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_1.Image")));
			this->secondField2_1->Location = System::Drawing::Point(313, 92);
			this->secondField2_1->Name = L"secondField2_1";
			this->secondField2_1->Size = System::Drawing::Size(20, 20);
			this->secondField2_1->TabIndex = 121;
			this->secondField2_1->TabStop = false;
			this->secondField2_1->Click += gcnew System::EventHandler(this, &MyForm::secondField2_1_Click);
			// 
			// secondField2_2
			// 
			this->secondField2_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_2.BackgroundImage")));
			this->secondField2_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_2.Image")));
			this->secondField2_2->Location = System::Drawing::Point(334, 92);
			this->secondField2_2->Name = L"secondField2_2";
			this->secondField2_2->Size = System::Drawing::Size(20, 20);
			this->secondField2_2->TabIndex = 122;
			this->secondField2_2->TabStop = false;
			this->secondField2_2->Click += gcnew System::EventHandler(this, &MyForm::secondField2_2_Click);
			// 
			// secondField2_3
			// 
			this->secondField2_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_3.BackgroundImage")));
			this->secondField2_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_3.Image")));
			this->secondField2_3->Location = System::Drawing::Point(355, 92);
			this->secondField2_3->Name = L"secondField2_3";
			this->secondField2_3->Size = System::Drawing::Size(20, 20);
			this->secondField2_3->TabIndex = 123;
			this->secondField2_3->TabStop = false;
			this->secondField2_3->Click += gcnew System::EventHandler(this, &MyForm::secondField2_3_Click);
			// 
			// secondField2_4
			// 
			this->secondField2_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_4.BackgroundImage")));
			this->secondField2_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_4.Image")));
			this->secondField2_4->Location = System::Drawing::Point(376, 92);
			this->secondField2_4->Name = L"secondField2_4";
			this->secondField2_4->Size = System::Drawing::Size(20, 20);
			this->secondField2_4->TabIndex = 124;
			this->secondField2_4->TabStop = false;
			this->secondField2_4->Click += gcnew System::EventHandler(this, &MyForm::secondField2_4_Click);
			// 
			// secondField2_5
			// 
			this->secondField2_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_5.BackgroundImage")));
			this->secondField2_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_5.Image")));
			this->secondField2_5->Location = System::Drawing::Point(397, 92);
			this->secondField2_5->Name = L"secondField2_5";
			this->secondField2_5->Size = System::Drawing::Size(20, 20);
			this->secondField2_5->TabIndex = 125;
			this->secondField2_5->TabStop = false;
			this->secondField2_5->Click += gcnew System::EventHandler(this, &MyForm::secondField2_5_Click);
			// 
			// secondField2_6
			// 
			this->secondField2_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_6.BackgroundImage")));
			this->secondField2_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_6.Image")));
			this->secondField2_6->Location = System::Drawing::Point(418, 92);
			this->secondField2_6->Name = L"secondField2_6";
			this->secondField2_6->Size = System::Drawing::Size(20, 20);
			this->secondField2_6->TabIndex = 126;
			this->secondField2_6->TabStop = false;
			this->secondField2_6->Click += gcnew System::EventHandler(this, &MyForm::secondField2_6_Click);
			// 
			// secondField2_7
			// 
			this->secondField2_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_7.BackgroundImage")));
			this->secondField2_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_7.Image")));
			this->secondField2_7->Location = System::Drawing::Point(439, 92);
			this->secondField2_7->Name = L"secondField2_7";
			this->secondField2_7->Size = System::Drawing::Size(20, 20);
			this->secondField2_7->TabIndex = 127;
			this->secondField2_7->TabStop = false;
			this->secondField2_7->Click += gcnew System::EventHandler(this, &MyForm::secondField2_7_Click);
			// 
			// secondField2_8
			// 
			this->secondField2_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_8.BackgroundImage")));
			this->secondField2_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_8.Image")));
			this->secondField2_8->Location = System::Drawing::Point(460, 92);
			this->secondField2_8->Name = L"secondField2_8";
			this->secondField2_8->Size = System::Drawing::Size(20, 20);
			this->secondField2_8->TabIndex = 128;
			this->secondField2_8->TabStop = false;
			this->secondField2_8->Click += gcnew System::EventHandler(this, &MyForm::secondField2_8_Click);
			// 
			// secondField2_9
			// 
			this->secondField2_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_9.BackgroundImage")));
			this->secondField2_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField2_9.Image")));
			this->secondField2_9->Location = System::Drawing::Point(481, 92);
			this->secondField2_9->Name = L"secondField2_9";
			this->secondField2_9->Size = System::Drawing::Size(20, 20);
			this->secondField2_9->TabIndex = 129;
			this->secondField2_9->TabStop = false;
			this->secondField2_9->Click += gcnew System::EventHandler(this, &MyForm::secondField2_9_Click);
			// 
			// secondField3_0
			// 
			this->secondField3_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_0.BackgroundImage")));
			this->secondField3_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_0.Image")));
			this->secondField3_0->Location = System::Drawing::Point(292, 113);
			this->secondField3_0->Name = L"secondField3_0";
			this->secondField3_0->Size = System::Drawing::Size(20, 20);
			this->secondField3_0->TabIndex = 130;
			this->secondField3_0->TabStop = false;
			this->secondField3_0->Click += gcnew System::EventHandler(this, &MyForm::secondField3_0_Click);
			// 
			// secondField3_1
			// 
			this->secondField3_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_1.BackgroundImage")));
			this->secondField3_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_1.Image")));
			this->secondField3_1->Location = System::Drawing::Point(313, 113);
			this->secondField3_1->Name = L"secondField3_1";
			this->secondField3_1->Size = System::Drawing::Size(20, 20);
			this->secondField3_1->TabIndex = 131;
			this->secondField3_1->TabStop = false;
			this->secondField3_1->Click += gcnew System::EventHandler(this, &MyForm::secondField3_1_Click);
			// 
			// secondField3_2
			// 
			this->secondField3_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_2.BackgroundImage")));
			this->secondField3_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_2.Image")));
			this->secondField3_2->Location = System::Drawing::Point(334, 113);
			this->secondField3_2->Name = L"secondField3_2";
			this->secondField3_2->Size = System::Drawing::Size(20, 20);
			this->secondField3_2->TabIndex = 132;
			this->secondField3_2->TabStop = false;
			this->secondField3_2->Click += gcnew System::EventHandler(this, &MyForm::secondField3_2_Click);
			// 
			// secondField3_3
			// 
			this->secondField3_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_3.BackgroundImage")));
			this->secondField3_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_3.Image")));
			this->secondField3_3->Location = System::Drawing::Point(355, 113);
			this->secondField3_3->Name = L"secondField3_3";
			this->secondField3_3->Size = System::Drawing::Size(20, 20);
			this->secondField3_3->TabIndex = 133;
			this->secondField3_3->TabStop = false;
			this->secondField3_3->Click += gcnew System::EventHandler(this, &MyForm::secondField3_3_Click);
			// 
			// secondField3_4
			// 
			this->secondField3_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_4.BackgroundImage")));
			this->secondField3_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_4.Image")));
			this->secondField3_4->Location = System::Drawing::Point(376, 113);
			this->secondField3_4->Name = L"secondField3_4";
			this->secondField3_4->Size = System::Drawing::Size(20, 20);
			this->secondField3_4->TabIndex = 134;
			this->secondField3_4->TabStop = false;
			this->secondField3_4->Click += gcnew System::EventHandler(this, &MyForm::secondField3_4_Click);
			// 
			// secondField3_5
			// 
			this->secondField3_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_5.BackgroundImage")));
			this->secondField3_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_5.Image")));
			this->secondField3_5->Location = System::Drawing::Point(397, 113);
			this->secondField3_5->Name = L"secondField3_5";
			this->secondField3_5->Size = System::Drawing::Size(20, 20);
			this->secondField3_5->TabIndex = 135;
			this->secondField3_5->TabStop = false;
			this->secondField3_5->Click += gcnew System::EventHandler(this, &MyForm::secondField3_5_Click);
			// 
			// secondField3_6
			// 
			this->secondField3_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_6.BackgroundImage")));
			this->secondField3_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_6.Image")));
			this->secondField3_6->Location = System::Drawing::Point(418, 113);
			this->secondField3_6->Name = L"secondField3_6";
			this->secondField3_6->Size = System::Drawing::Size(20, 20);
			this->secondField3_6->TabIndex = 136;
			this->secondField3_6->TabStop = false;
			this->secondField3_6->Click += gcnew System::EventHandler(this, &MyForm::secondField3_6_Click);
			// 
			// secondField3_7
			// 
			this->secondField3_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_7.BackgroundImage")));
			this->secondField3_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_7.Image")));
			this->secondField3_7->Location = System::Drawing::Point(439, 113);
			this->secondField3_7->Name = L"secondField3_7";
			this->secondField3_7->Size = System::Drawing::Size(20, 20);
			this->secondField3_7->TabIndex = 137;
			this->secondField3_7->TabStop = false;
			this->secondField3_7->Click += gcnew System::EventHandler(this, &MyForm::secondField3_7_Click);
			// 
			// secondField3_8
			// 
			this->secondField3_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_8.BackgroundImage")));
			this->secondField3_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_8.Image")));
			this->secondField3_8->Location = System::Drawing::Point(460, 113);
			this->secondField3_8->Name = L"secondField3_8";
			this->secondField3_8->Size = System::Drawing::Size(20, 20);
			this->secondField3_8->TabIndex = 138;
			this->secondField3_8->TabStop = false;
			this->secondField3_8->Click += gcnew System::EventHandler(this, &MyForm::secondField3_8_Click);
			// 
			// secondField3_9
			// 
			this->secondField3_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_9.BackgroundImage")));
			this->secondField3_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField3_9.Image")));
			this->secondField3_9->Location = System::Drawing::Point(481, 113);
			this->secondField3_9->Name = L"secondField3_9";
			this->secondField3_9->Size = System::Drawing::Size(20, 20);
			this->secondField3_9->TabIndex = 139;
			this->secondField3_9->TabStop = false;
			this->secondField3_9->Click += gcnew System::EventHandler(this, &MyForm::secondField3_9_Click);
			// 
			// secondField4_0
			// 
			this->secondField4_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_0.BackgroundImage")));
			this->secondField4_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_0.Image")));
			this->secondField4_0->Location = System::Drawing::Point(292, 134);
			this->secondField4_0->Name = L"secondField4_0";
			this->secondField4_0->Size = System::Drawing::Size(20, 20);
			this->secondField4_0->TabIndex = 140;
			this->secondField4_0->TabStop = false;
			this->secondField4_0->Click += gcnew System::EventHandler(this, &MyForm::secondField4_0_Click);
			// 
			// secondField4_1
			// 
			this->secondField4_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_1.BackgroundImage")));
			this->secondField4_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_1.Image")));
			this->secondField4_1->Location = System::Drawing::Point(313, 134);
			this->secondField4_1->Name = L"secondField4_1";
			this->secondField4_1->Size = System::Drawing::Size(20, 20);
			this->secondField4_1->TabIndex = 141;
			this->secondField4_1->TabStop = false;
			this->secondField4_1->Click += gcnew System::EventHandler(this, &MyForm::secondField4_1_Click);
			// 
			// secondField4_2
			// 
			this->secondField4_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_2.BackgroundImage")));
			this->secondField4_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_2.Image")));
			this->secondField4_2->Location = System::Drawing::Point(334, 134);
			this->secondField4_2->Name = L"secondField4_2";
			this->secondField4_2->Size = System::Drawing::Size(20, 20);
			this->secondField4_2->TabIndex = 142;
			this->secondField4_2->TabStop = false;
			this->secondField4_2->Click += gcnew System::EventHandler(this, &MyForm::secondField4_2_Click);
			// 
			// secondField4_3
			// 
			this->secondField4_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_3.BackgroundImage")));
			this->secondField4_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_3.Image")));
			this->secondField4_3->Location = System::Drawing::Point(355, 134);
			this->secondField4_3->Name = L"secondField4_3";
			this->secondField4_3->Size = System::Drawing::Size(20, 20);
			this->secondField4_3->TabIndex = 143;
			this->secondField4_3->TabStop = false;
			this->secondField4_3->Click += gcnew System::EventHandler(this, &MyForm::secondField4_3_Click);
			// 
			// secondField4_4
			// 
			this->secondField4_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_4.BackgroundImage")));
			this->secondField4_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_4.Image")));
			this->secondField4_4->Location = System::Drawing::Point(376, 134);
			this->secondField4_4->Name = L"secondField4_4";
			this->secondField4_4->Size = System::Drawing::Size(20, 20);
			this->secondField4_4->TabIndex = 144;
			this->secondField4_4->TabStop = false;
			this->secondField4_4->Click += gcnew System::EventHandler(this, &MyForm::secondField4_4_Click);
			// 
			// secondField4_5
			// 
			this->secondField4_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_5.BackgroundImage")));
			this->secondField4_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_5.Image")));
			this->secondField4_5->Location = System::Drawing::Point(397, 134);
			this->secondField4_5->Name = L"secondField4_5";
			this->secondField4_5->Size = System::Drawing::Size(20, 20);
			this->secondField4_5->TabIndex = 145;
			this->secondField4_5->TabStop = false;
			this->secondField4_5->Click += gcnew System::EventHandler(this, &MyForm::secondField4_5_Click);
			// 
			// secondField4_6
			// 
			this->secondField4_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_6.BackgroundImage")));
			this->secondField4_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_6.Image")));
			this->secondField4_6->Location = System::Drawing::Point(418, 134);
			this->secondField4_6->Name = L"secondField4_6";
			this->secondField4_6->Size = System::Drawing::Size(20, 20);
			this->secondField4_6->TabIndex = 146;
			this->secondField4_6->TabStop = false;
			this->secondField4_6->Click += gcnew System::EventHandler(this, &MyForm::secondField4_6_Click);
			// 
			// secondField4_7
			// 
			this->secondField4_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_7.BackgroundImage")));
			this->secondField4_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_7.Image")));
			this->secondField4_7->Location = System::Drawing::Point(439, 134);
			this->secondField4_7->Name = L"secondField4_7";
			this->secondField4_7->Size = System::Drawing::Size(20, 20);
			this->secondField4_7->TabIndex = 147;
			this->secondField4_7->TabStop = false;
			this->secondField4_7->Click += gcnew System::EventHandler(this, &MyForm::secondField4_7_Click);
			// 
			// secondField4_8
			// 
			this->secondField4_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_8.BackgroundImage")));
			this->secondField4_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_8.Image")));
			this->secondField4_8->Location = System::Drawing::Point(460, 134);
			this->secondField4_8->Name = L"secondField4_8";
			this->secondField4_8->Size = System::Drawing::Size(20, 20);
			this->secondField4_8->TabIndex = 148;
			this->secondField4_8->TabStop = false;
			this->secondField4_8->Click += gcnew System::EventHandler(this, &MyForm::secondField4_8_Click);
			// 
			// secondField4_9
			// 
			this->secondField4_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_9.BackgroundImage")));
			this->secondField4_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField4_9.Image")));
			this->secondField4_9->Location = System::Drawing::Point(481, 134);
			this->secondField4_9->Name = L"secondField4_9";
			this->secondField4_9->Size = System::Drawing::Size(20, 20);
			this->secondField4_9->TabIndex = 149;
			this->secondField4_9->TabStop = false;
			this->secondField4_9->Click += gcnew System::EventHandler(this, &MyForm::secondField4_9_Click);
			// 
			// secondField5_0
			// 
			this->secondField5_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_0.BackgroundImage")));
			this->secondField5_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_0.Image")));
			this->secondField5_0->Location = System::Drawing::Point(292, 155);
			this->secondField5_0->Name = L"secondField5_0";
			this->secondField5_0->Size = System::Drawing::Size(20, 20);
			this->secondField5_0->TabIndex = 150;
			this->secondField5_0->TabStop = false;
			this->secondField5_0->Click += gcnew System::EventHandler(this, &MyForm::secondField5_0_Click);
			// 
			// secondField5_1
			// 
			this->secondField5_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_1.BackgroundImage")));
			this->secondField5_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_1.Image")));
			this->secondField5_1->Location = System::Drawing::Point(313, 155);
			this->secondField5_1->Name = L"secondField5_1";
			this->secondField5_1->Size = System::Drawing::Size(20, 20);
			this->secondField5_1->TabIndex = 151;
			this->secondField5_1->TabStop = false;
			this->secondField5_1->Click += gcnew System::EventHandler(this, &MyForm::secondField5_1_Click);
			// 
			// secondField5_2
			// 
			this->secondField5_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_2.BackgroundImage")));
			this->secondField5_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_2.Image")));
			this->secondField5_2->Location = System::Drawing::Point(334, 155);
			this->secondField5_2->Name = L"secondField5_2";
			this->secondField5_2->Size = System::Drawing::Size(20, 20);
			this->secondField5_2->TabIndex = 152;
			this->secondField5_2->TabStop = false;
			this->secondField5_2->Click += gcnew System::EventHandler(this, &MyForm::secondField5_2_Click);
			// 
			// secondField5_3
			// 
			this->secondField5_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_3.BackgroundImage")));
			this->secondField5_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_3.Image")));
			this->secondField5_3->Location = System::Drawing::Point(355, 155);
			this->secondField5_3->Name = L"secondField5_3";
			this->secondField5_3->Size = System::Drawing::Size(20, 20);
			this->secondField5_3->TabIndex = 153;
			this->secondField5_3->TabStop = false;
			this->secondField5_3->Click += gcnew System::EventHandler(this, &MyForm::secondField5_3_Click);
			// 
			// secondField5_4
			// 
			this->secondField5_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_4.BackgroundImage")));
			this->secondField5_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_4.Image")));
			this->secondField5_4->Location = System::Drawing::Point(376, 155);
			this->secondField5_4->Name = L"secondField5_4";
			this->secondField5_4->Size = System::Drawing::Size(20, 20);
			this->secondField5_4->TabIndex = 154;
			this->secondField5_4->TabStop = false;
			this->secondField5_4->Click += gcnew System::EventHandler(this, &MyForm::secondField5_4_Click);
			// 
			// secondField5_5
			// 
			this->secondField5_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_5.BackgroundImage")));
			this->secondField5_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_5.Image")));
			this->secondField5_5->Location = System::Drawing::Point(397, 155);
			this->secondField5_5->Name = L"secondField5_5";
			this->secondField5_5->Size = System::Drawing::Size(20, 20);
			this->secondField5_5->TabIndex = 155;
			this->secondField5_5->TabStop = false;
			this->secondField5_5->Click += gcnew System::EventHandler(this, &MyForm::secondField5_5_Click);
			// 
			// secondField5_6
			// 
			this->secondField5_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_6.BackgroundImage")));
			this->secondField5_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_6.Image")));
			this->secondField5_6->Location = System::Drawing::Point(418, 155);
			this->secondField5_6->Name = L"secondField5_6";
			this->secondField5_6->Size = System::Drawing::Size(20, 20);
			this->secondField5_6->TabIndex = 156;
			this->secondField5_6->TabStop = false;
			this->secondField5_6->Click += gcnew System::EventHandler(this, &MyForm::secondField5_6_Click);
			// 
			// secondField5_7
			// 
			this->secondField5_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_7.BackgroundImage")));
			this->secondField5_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_7.Image")));
			this->secondField5_7->Location = System::Drawing::Point(439, 155);
			this->secondField5_7->Name = L"secondField5_7";
			this->secondField5_7->Size = System::Drawing::Size(20, 20);
			this->secondField5_7->TabIndex = 157;
			this->secondField5_7->TabStop = false;
			this->secondField5_7->Click += gcnew System::EventHandler(this, &MyForm::secondField5_7_Click);
			// 
			// secondField5_8
			// 
			this->secondField5_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_8.BackgroundImage")));
			this->secondField5_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_8.Image")));
			this->secondField5_8->Location = System::Drawing::Point(460, 155);
			this->secondField5_8->Name = L"secondField5_8";
			this->secondField5_8->Size = System::Drawing::Size(20, 20);
			this->secondField5_8->TabIndex = 158;
			this->secondField5_8->TabStop = false;
			this->secondField5_8->Click += gcnew System::EventHandler(this, &MyForm::secondField5_8_Click);
			// 
			// secondField5_9
			// 
			this->secondField5_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_9.BackgroundImage")));
			this->secondField5_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField5_9.Image")));
			this->secondField5_9->Location = System::Drawing::Point(481, 155);
			this->secondField5_9->Name = L"secondField5_9";
			this->secondField5_9->Size = System::Drawing::Size(20, 20);
			this->secondField5_9->TabIndex = 159;
			this->secondField5_9->TabStop = false;
			this->secondField5_9->Click += gcnew System::EventHandler(this, &MyForm::secondField5_9_Click);
			// 
			// secondField6_0
			// 
			this->secondField6_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_0.BackgroundImage")));
			this->secondField6_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_0.Image")));
			this->secondField6_0->Location = System::Drawing::Point(292, 176);
			this->secondField6_0->Name = L"secondField6_0";
			this->secondField6_0->Size = System::Drawing::Size(20, 20);
			this->secondField6_0->TabIndex = 160;
			this->secondField6_0->TabStop = false;
			this->secondField6_0->Click += gcnew System::EventHandler(this, &MyForm::secondField6_0_Click);
			// 
			// secondField6_1
			// 
			this->secondField6_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_1.BackgroundImage")));
			this->secondField6_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_1.Image")));
			this->secondField6_1->Location = System::Drawing::Point(313, 176);
			this->secondField6_1->Name = L"secondField6_1";
			this->secondField6_1->Size = System::Drawing::Size(20, 20);
			this->secondField6_1->TabIndex = 161;
			this->secondField6_1->TabStop = false;
			this->secondField6_1->Click += gcnew System::EventHandler(this, &MyForm::secondField6_1_Click);
			// 
			// secondField6_2
			// 
			this->secondField6_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_2.BackgroundImage")));
			this->secondField6_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_2.Image")));
			this->secondField6_2->Location = System::Drawing::Point(334, 176);
			this->secondField6_2->Name = L"secondField6_2";
			this->secondField6_2->Size = System::Drawing::Size(20, 20);
			this->secondField6_2->TabIndex = 162;
			this->secondField6_2->TabStop = false;
			this->secondField6_2->Click += gcnew System::EventHandler(this, &MyForm::secondField6_2_Click);
			// 
			// secondField6_3
			// 
			this->secondField6_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_3.BackgroundImage")));
			this->secondField6_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_3.Image")));
			this->secondField6_3->Location = System::Drawing::Point(355, 176);
			this->secondField6_3->Name = L"secondField6_3";
			this->secondField6_3->Size = System::Drawing::Size(20, 20);
			this->secondField6_3->TabIndex = 163;
			this->secondField6_3->TabStop = false;
			this->secondField6_3->Click += gcnew System::EventHandler(this, &MyForm::secondField6_3_Click);
			// 
			// secondField6_4
			// 
			this->secondField6_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_4.BackgroundImage")));
			this->secondField6_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_4.Image")));
			this->secondField6_4->Location = System::Drawing::Point(376, 176);
			this->secondField6_4->Name = L"secondField6_4";
			this->secondField6_4->Size = System::Drawing::Size(20, 20);
			this->secondField6_4->TabIndex = 164;
			this->secondField6_4->TabStop = false;
			this->secondField6_4->Click += gcnew System::EventHandler(this, &MyForm::secondField6_4_Click);
			// 
			// secondField6_5
			// 
			this->secondField6_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_5.BackgroundImage")));
			this->secondField6_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_5.Image")));
			this->secondField6_5->Location = System::Drawing::Point(397, 176);
			this->secondField6_5->Name = L"secondField6_5";
			this->secondField6_5->Size = System::Drawing::Size(20, 20);
			this->secondField6_5->TabIndex = 165;
			this->secondField6_5->TabStop = false;
			this->secondField6_5->Click += gcnew System::EventHandler(this, &MyForm::secondField6_5_Click);
			// 
			// secondField6_6
			// 
			this->secondField6_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_6.BackgroundImage")));
			this->secondField6_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_6.Image")));
			this->secondField6_6->Location = System::Drawing::Point(418, 176);
			this->secondField6_6->Name = L"secondField6_6";
			this->secondField6_6->Size = System::Drawing::Size(20, 20);
			this->secondField6_6->TabIndex = 166;
			this->secondField6_6->TabStop = false;
			this->secondField6_6->Click += gcnew System::EventHandler(this, &MyForm::secondField6_6_Click);
			// 
			// secondField6_7
			// 
			this->secondField6_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_7.BackgroundImage")));
			this->secondField6_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_7.Image")));
			this->secondField6_7->Location = System::Drawing::Point(439, 176);
			this->secondField6_7->Name = L"secondField6_7";
			this->secondField6_7->Size = System::Drawing::Size(20, 20);
			this->secondField6_7->TabIndex = 167;
			this->secondField6_7->TabStop = false;
			this->secondField6_7->Click += gcnew System::EventHandler(this, &MyForm::secondField6_7_Click);
			// 
			// secondField6_8
			// 
			this->secondField6_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_8.BackgroundImage")));
			this->secondField6_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_8.Image")));
			this->secondField6_8->Location = System::Drawing::Point(460, 176);
			this->secondField6_8->Name = L"secondField6_8";
			this->secondField6_8->Size = System::Drawing::Size(20, 20);
			this->secondField6_8->TabIndex = 168;
			this->secondField6_8->TabStop = false;
			this->secondField6_8->Click += gcnew System::EventHandler(this, &MyForm::secondField6_8_Click);
			// 
			// secondField6_9
			// 
			this->secondField6_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_9.BackgroundImage")));
			this->secondField6_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField6_9.Image")));
			this->secondField6_9->Location = System::Drawing::Point(481, 176);
			this->secondField6_9->Name = L"secondField6_9";
			this->secondField6_9->Size = System::Drawing::Size(20, 20);
			this->secondField6_9->TabIndex = 169;
			this->secondField6_9->TabStop = false;
			this->secondField6_9->Click += gcnew System::EventHandler(this, &MyForm::secondField6_9_Click);
			// 
			// secondField7_0
			// 
			this->secondField7_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_0.BackgroundImage")));
			this->secondField7_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_0.Image")));
			this->secondField7_0->Location = System::Drawing::Point(292, 197);
			this->secondField7_0->Name = L"secondField7_0";
			this->secondField7_0->Size = System::Drawing::Size(20, 20);
			this->secondField7_0->TabIndex = 170;
			this->secondField7_0->TabStop = false;
			this->secondField7_0->Click += gcnew System::EventHandler(this, &MyForm::secondField7_0_Click);
			// 
			// secondField7_1
			// 
			this->secondField7_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_1.BackgroundImage")));
			this->secondField7_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_1.Image")));
			this->secondField7_1->Location = System::Drawing::Point(313, 197);
			this->secondField7_1->Name = L"secondField7_1";
			this->secondField7_1->Size = System::Drawing::Size(20, 20);
			this->secondField7_1->TabIndex = 171;
			this->secondField7_1->TabStop = false;
			this->secondField7_1->Click += gcnew System::EventHandler(this, &MyForm::secondField7_1_Click);
			// 
			// secondField7_2
			// 
			this->secondField7_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_2.BackgroundImage")));
			this->secondField7_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_2.Image")));
			this->secondField7_2->Location = System::Drawing::Point(334, 197);
			this->secondField7_2->Name = L"secondField7_2";
			this->secondField7_2->Size = System::Drawing::Size(20, 20);
			this->secondField7_2->TabIndex = 172;
			this->secondField7_2->TabStop = false;
			this->secondField7_2->Click += gcnew System::EventHandler(this, &MyForm::secondField7_2_Click);
			// 
			// secondField7_3
			// 
			this->secondField7_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_3.BackgroundImage")));
			this->secondField7_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_3.Image")));
			this->secondField7_3->Location = System::Drawing::Point(355, 197);
			this->secondField7_3->Name = L"secondField7_3";
			this->secondField7_3->Size = System::Drawing::Size(20, 20);
			this->secondField7_3->TabIndex = 173;
			this->secondField7_3->TabStop = false;
			this->secondField7_3->Click += gcnew System::EventHandler(this, &MyForm::secondField7_3_Click);
			// 
			// secondField7_4
			// 
			this->secondField7_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_4.BackgroundImage")));
			this->secondField7_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_4.Image")));
			this->secondField7_4->Location = System::Drawing::Point(376, 197);
			this->secondField7_4->Name = L"secondField7_4";
			this->secondField7_4->Size = System::Drawing::Size(20, 20);
			this->secondField7_4->TabIndex = 174;
			this->secondField7_4->TabStop = false;
			this->secondField7_4->Click += gcnew System::EventHandler(this, &MyForm::secondField7_4_Click);
			// 
			// secondField7_5
			// 
			this->secondField7_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_5.BackgroundImage")));
			this->secondField7_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_5.Image")));
			this->secondField7_5->Location = System::Drawing::Point(397, 197);
			this->secondField7_5->Name = L"secondField7_5";
			this->secondField7_5->Size = System::Drawing::Size(20, 20);
			this->secondField7_5->TabIndex = 175;
			this->secondField7_5->TabStop = false;
			this->secondField7_5->Click += gcnew System::EventHandler(this, &MyForm::secondField7_5_Click);
			// 
			// secondField7_6
			// 
			this->secondField7_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_6.BackgroundImage")));
			this->secondField7_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_6.Image")));
			this->secondField7_6->Location = System::Drawing::Point(418, 197);
			this->secondField7_6->Name = L"secondField7_6";
			this->secondField7_6->Size = System::Drawing::Size(20, 20);
			this->secondField7_6->TabIndex = 176;
			this->secondField7_6->TabStop = false;
			this->secondField7_6->Click += gcnew System::EventHandler(this, &MyForm::secondField7_6_Click);
			// 
			// secondField7_7
			// 
			this->secondField7_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_7.BackgroundImage")));
			this->secondField7_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_7.Image")));
			this->secondField7_7->Location = System::Drawing::Point(439, 197);
			this->secondField7_7->Name = L"secondField7_7";
			this->secondField7_7->Size = System::Drawing::Size(20, 20);
			this->secondField7_7->TabIndex = 177;
			this->secondField7_7->TabStop = false;
			this->secondField7_7->Click += gcnew System::EventHandler(this, &MyForm::secondField7_7_Click);
			// 
			// secondField7_8
			// 
			this->secondField7_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_8.BackgroundImage")));
			this->secondField7_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_8.Image")));
			this->secondField7_8->Location = System::Drawing::Point(460, 197);
			this->secondField7_8->Name = L"secondField7_8";
			this->secondField7_8->Size = System::Drawing::Size(20, 20);
			this->secondField7_8->TabIndex = 178;
			this->secondField7_8->TabStop = false;
			this->secondField7_8->Click += gcnew System::EventHandler(this, &MyForm::secondField7_8_Click);
			// 
			// secondField7_9
			// 
			this->secondField7_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_9.BackgroundImage")));
			this->secondField7_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField7_9.Image")));
			this->secondField7_9->Location = System::Drawing::Point(481, 197);
			this->secondField7_9->Name = L"secondField7_9";
			this->secondField7_9->Size = System::Drawing::Size(20, 20);
			this->secondField7_9->TabIndex = 179;
			this->secondField7_9->TabStop = false;
			this->secondField7_9->Click += gcnew System::EventHandler(this, &MyForm::secondField7_9_Click);
			// 
			// secondField8_0
			// 
			this->secondField8_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_0.BackgroundImage")));
			this->secondField8_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_0.Image")));
			this->secondField8_0->Location = System::Drawing::Point(292, 218);
			this->secondField8_0->Name = L"secondField8_0";
			this->secondField8_0->Size = System::Drawing::Size(20, 20);
			this->secondField8_0->TabIndex = 180;
			this->secondField8_0->TabStop = false;
			this->secondField8_0->Click += gcnew System::EventHandler(this, &MyForm::secondField8_0_Click);
			// 
			// secondField8_1
			// 
			this->secondField8_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_1.BackgroundImage")));
			this->secondField8_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_1.Image")));
			this->secondField8_1->Location = System::Drawing::Point(313, 218);
			this->secondField8_1->Name = L"secondField8_1";
			this->secondField8_1->Size = System::Drawing::Size(20, 20);
			this->secondField8_1->TabIndex = 181;
			this->secondField8_1->TabStop = false;
			this->secondField8_1->Click += gcnew System::EventHandler(this, &MyForm::secondField8_1_Click);
			// 
			// secondField8_2
			// 
			this->secondField8_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_2.BackgroundImage")));
			this->secondField8_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_2.Image")));
			this->secondField8_2->Location = System::Drawing::Point(334, 218);
			this->secondField8_2->Name = L"secondField8_2";
			this->secondField8_2->Size = System::Drawing::Size(20, 20);
			this->secondField8_2->TabIndex = 182;
			this->secondField8_2->TabStop = false;
			this->secondField8_2->Click += gcnew System::EventHandler(this, &MyForm::secondField8_2_Click);
			// 
			// secondField8_3
			// 
			this->secondField8_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_3.BackgroundImage")));
			this->secondField8_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_3.Image")));
			this->secondField8_3->Location = System::Drawing::Point(355, 218);
			this->secondField8_3->Name = L"secondField8_3";
			this->secondField8_3->Size = System::Drawing::Size(20, 20);
			this->secondField8_3->TabIndex = 183;
			this->secondField8_3->TabStop = false;
			this->secondField8_3->Click += gcnew System::EventHandler(this, &MyForm::secondField8_3_Click);
			// 
			// secondField8_4
			// 
			this->secondField8_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_4.BackgroundImage")));
			this->secondField8_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_4.Image")));
			this->secondField8_4->Location = System::Drawing::Point(376, 218);
			this->secondField8_4->Name = L"secondField8_4";
			this->secondField8_4->Size = System::Drawing::Size(20, 20);
			this->secondField8_4->TabIndex = 184;
			this->secondField8_4->TabStop = false;
			this->secondField8_4->Click += gcnew System::EventHandler(this, &MyForm::secondField8_4_Click);
			// 
			// secondField8_5
			// 
			this->secondField8_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_5.BackgroundImage")));
			this->secondField8_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_5.Image")));
			this->secondField8_5->Location = System::Drawing::Point(397, 218);
			this->secondField8_5->Name = L"secondField8_5";
			this->secondField8_5->Size = System::Drawing::Size(20, 20);
			this->secondField8_5->TabIndex = 185;
			this->secondField8_5->TabStop = false;
			this->secondField8_5->Click += gcnew System::EventHandler(this, &MyForm::secondField8_5_Click);
			// 
			// secondField8_6
			// 
			this->secondField8_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_6.BackgroundImage")));
			this->secondField8_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_6.Image")));
			this->secondField8_6->Location = System::Drawing::Point(418, 218);
			this->secondField8_6->Name = L"secondField8_6";
			this->secondField8_6->Size = System::Drawing::Size(20, 20);
			this->secondField8_6->TabIndex = 186;
			this->secondField8_6->TabStop = false;
			this->secondField8_6->Click += gcnew System::EventHandler(this, &MyForm::secondField8_6_Click);
			// 
			// secondField8_7
			// 
			this->secondField8_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_7.BackgroundImage")));
			this->secondField8_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_7.Image")));
			this->secondField8_7->Location = System::Drawing::Point(439, 218);
			this->secondField8_7->Name = L"secondField8_7";
			this->secondField8_7->Size = System::Drawing::Size(20, 20);
			this->secondField8_7->TabIndex = 187;
			this->secondField8_7->TabStop = false;
			this->secondField8_7->Click += gcnew System::EventHandler(this, &MyForm::secondField8_7_Click);
			// 
			// secondField8_8
			// 
			this->secondField8_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_8.BackgroundImage")));
			this->secondField8_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_8.Image")));
			this->secondField8_8->Location = System::Drawing::Point(460, 218);
			this->secondField8_8->Name = L"secondField8_8";
			this->secondField8_8->Size = System::Drawing::Size(20, 20);
			this->secondField8_8->TabIndex = 188;
			this->secondField8_8->TabStop = false;
			this->secondField8_8->Click += gcnew System::EventHandler(this, &MyForm::secondField8_8_Click);
			// 
			// secondField8_9
			// 
			this->secondField8_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_9.BackgroundImage")));
			this->secondField8_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField8_9.Image")));
			this->secondField8_9->Location = System::Drawing::Point(481, 218);
			this->secondField8_9->Name = L"secondField8_9";
			this->secondField8_9->Size = System::Drawing::Size(20, 20);
			this->secondField8_9->TabIndex = 189;
			this->secondField8_9->TabStop = false;
			this->secondField8_9->Click += gcnew System::EventHandler(this, &MyForm::secondField8_9_Click);
			// 
			// secondField9_0
			// 
			this->secondField9_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_0.BackgroundImage")));
			this->secondField9_0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_0.Image")));
			this->secondField9_0->Location = System::Drawing::Point(292, 239);
			this->secondField9_0->Name = L"secondField9_0";
			this->secondField9_0->Size = System::Drawing::Size(20, 20);
			this->secondField9_0->TabIndex = 190;
			this->secondField9_0->TabStop = false;
			this->secondField9_0->Click += gcnew System::EventHandler(this, &MyForm::secondField9_0_Click);
			// 
			// secondField9_1
			// 
			this->secondField9_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_1.BackgroundImage")));
			this->secondField9_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_1.Image")));
			this->secondField9_1->Location = System::Drawing::Point(313, 239);
			this->secondField9_1->Name = L"secondField9_1";
			this->secondField9_1->Size = System::Drawing::Size(20, 20);
			this->secondField9_1->TabIndex = 191;
			this->secondField9_1->TabStop = false;
			this->secondField9_1->Click += gcnew System::EventHandler(this, &MyForm::secondField9_1_Click);
			// 
			// secondField9_2
			// 
			this->secondField9_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_2.BackgroundImage")));
			this->secondField9_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_2.Image")));
			this->secondField9_2->Location = System::Drawing::Point(334, 239);
			this->secondField9_2->Name = L"secondField9_2";
			this->secondField9_2->Size = System::Drawing::Size(20, 20);
			this->secondField9_2->TabIndex = 192;
			this->secondField9_2->TabStop = false;
			this->secondField9_2->Click += gcnew System::EventHandler(this, &MyForm::secondField9_2_Click);
			// 
			// secondField9_3
			// 
			this->secondField9_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_3.BackgroundImage")));
			this->secondField9_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_3.Image")));
			this->secondField9_3->Location = System::Drawing::Point(355, 239);
			this->secondField9_3->Name = L"secondField9_3";
			this->secondField9_3->Size = System::Drawing::Size(20, 20);
			this->secondField9_3->TabIndex = 193;
			this->secondField9_3->TabStop = false;
			this->secondField9_3->Click += gcnew System::EventHandler(this, &MyForm::secondField9_3_Click);
			// 
			// secondField9_4
			// 
			this->secondField9_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_4.BackgroundImage")));
			this->secondField9_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_4.Image")));
			this->secondField9_4->Location = System::Drawing::Point(376, 239);
			this->secondField9_4->Name = L"secondField9_4";
			this->secondField9_4->Size = System::Drawing::Size(20, 20);
			this->secondField9_4->TabIndex = 194;
			this->secondField9_4->TabStop = false;
			this->secondField9_4->Click += gcnew System::EventHandler(this, &MyForm::secondField9_4_Click);
			// 
			// secondField9_5
			// 
			this->secondField9_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_5.BackgroundImage")));
			this->secondField9_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_5.Image")));
			this->secondField9_5->Location = System::Drawing::Point(397, 239);
			this->secondField9_5->Name = L"secondField9_5";
			this->secondField9_5->Size = System::Drawing::Size(20, 20);
			this->secondField9_5->TabIndex = 195;
			this->secondField9_5->TabStop = false;
			this->secondField9_5->Click += gcnew System::EventHandler(this, &MyForm::secondField9_5_Click);
			// 
			// secondField9_6
			// 
			this->secondField9_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_6.BackgroundImage")));
			this->secondField9_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_6.Image")));
			this->secondField9_6->Location = System::Drawing::Point(418, 239);
			this->secondField9_6->Name = L"secondField9_6";
			this->secondField9_6->Size = System::Drawing::Size(20, 20);
			this->secondField9_6->TabIndex = 196;
			this->secondField9_6->TabStop = false;
			this->secondField9_6->Click += gcnew System::EventHandler(this, &MyForm::secondField9_6_Click);
			// 
			// secondField9_7
			// 
			this->secondField9_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_7.BackgroundImage")));
			this->secondField9_7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_7.Image")));
			this->secondField9_7->Location = System::Drawing::Point(439, 239);
			this->secondField9_7->Name = L"secondField9_7";
			this->secondField9_7->Size = System::Drawing::Size(20, 20);
			this->secondField9_7->TabIndex = 197;
			this->secondField9_7->TabStop = false;
			this->secondField9_7->Click += gcnew System::EventHandler(this, &MyForm::secondField9_7_Click);
			// 
			// secondField9_8
			// 
			this->secondField9_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_8.BackgroundImage")));
			this->secondField9_8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_8.Image")));
			this->secondField9_8->Location = System::Drawing::Point(460, 239);
			this->secondField9_8->Name = L"secondField9_8";
			this->secondField9_8->Size = System::Drawing::Size(20, 20);
			this->secondField9_8->TabIndex = 198;
			this->secondField9_8->TabStop = false;
			this->secondField9_8->Click += gcnew System::EventHandler(this, &MyForm::secondField9_8_Click);
			// 
			// secondField9_9
			// 
			this->secondField9_9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_9.BackgroundImage")));
			this->secondField9_9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondField9_9.Image")));
			this->secondField9_9->Location = System::Drawing::Point(481, 239);
			this->secondField9_9->Name = L"secondField9_9";
			this->secondField9_9->Size = System::Drawing::Size(20, 20);
			this->secondField9_9->TabIndex = 199;
			this->secondField9_9->TabStop = false;
			this->secondField9_9->Click += gcnew System::EventHandler(this, &MyForm::secondField9_9_Click);
			// 
			// labelWhoresMove
			// 
			this->labelWhoresMove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelWhoresMove->Location = System::Drawing::Point(30, 16);
			this->labelWhoresMove->Name = L"labelWhoresMove";
			this->labelWhoresMove->Size = System::Drawing::Size(471, 24);
			this->labelWhoresMove->TabIndex = 201;
			this->labelWhoresMove->Text = L"Ходить: ";
			this->labelWhoresMove->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupGamespace
			// 
			this->groupGamespace->Controls->Add(this->mainMenu);
			this->groupGamespace->Controls->Add(this->labelShoots1);
			this->groupGamespace->Controls->Add(this->labelPlayer2);
			this->groupGamespace->Controls->Add(this->labelPlayer1);
			this->groupGamespace->Controls->Add(this->secondField9_9);
			this->groupGamespace->Controls->Add(this->secondField9_8);
			this->groupGamespace->Controls->Add(this->secondField9_7);
			this->groupGamespace->Controls->Add(this->secondField9_6);
			this->groupGamespace->Controls->Add(this->secondField9_5);
			this->groupGamespace->Controls->Add(this->secondField9_4);
			this->groupGamespace->Controls->Add(this->secondField9_3);
			this->groupGamespace->Controls->Add(this->secondField9_2);
			this->groupGamespace->Controls->Add(this->secondField9_1);
			this->groupGamespace->Controls->Add(this->secondField9_0);
			this->groupGamespace->Controls->Add(this->secondField8_9);
			this->groupGamespace->Controls->Add(this->secondField8_8);
			this->groupGamespace->Controls->Add(this->secondField8_7);
			this->groupGamespace->Controls->Add(this->secondField8_6);
			this->groupGamespace->Controls->Add(this->secondField8_5);
			this->groupGamespace->Controls->Add(this->secondField8_4);
			this->groupGamespace->Controls->Add(this->secondField8_3);
			this->groupGamespace->Controls->Add(this->secondField8_2);
			this->groupGamespace->Controls->Add(this->secondField8_1);
			this->groupGamespace->Controls->Add(this->secondField8_0);
			this->groupGamespace->Controls->Add(this->secondField7_9);
			this->groupGamespace->Controls->Add(this->secondField7_8);
			this->groupGamespace->Controls->Add(this->secondField7_7);
			this->groupGamespace->Controls->Add(this->secondField7_6);
			this->groupGamespace->Controls->Add(this->secondField7_5);
			this->groupGamespace->Controls->Add(this->secondField7_4);
			this->groupGamespace->Controls->Add(this->secondField7_3);
			this->groupGamespace->Controls->Add(this->secondField7_2);
			this->groupGamespace->Controls->Add(this->secondField7_1);
			this->groupGamespace->Controls->Add(this->secondField7_0);
			this->groupGamespace->Controls->Add(this->secondField6_9);
			this->groupGamespace->Controls->Add(this->secondField6_8);
			this->groupGamespace->Controls->Add(this->secondField6_7);
			this->groupGamespace->Controls->Add(this->secondField6_6);
			this->groupGamespace->Controls->Add(this->secondField6_5);
			this->groupGamespace->Controls->Add(this->secondField6_4);
			this->groupGamespace->Controls->Add(this->secondField6_3);
			this->groupGamespace->Controls->Add(this->secondField6_2);
			this->groupGamespace->Controls->Add(this->secondField6_1);
			this->groupGamespace->Controls->Add(this->secondField6_0);
			this->groupGamespace->Controls->Add(this->secondField5_9);
			this->groupGamespace->Controls->Add(this->secondField5_8);
			this->groupGamespace->Controls->Add(this->secondField5_7);
			this->groupGamespace->Controls->Add(this->secondField5_6);
			this->groupGamespace->Controls->Add(this->secondField5_5);
			this->groupGamespace->Controls->Add(this->secondField5_4);
			this->groupGamespace->Controls->Add(this->secondField5_3);
			this->groupGamespace->Controls->Add(this->secondField5_2);
			this->groupGamespace->Controls->Add(this->secondField5_1);
			this->groupGamespace->Controls->Add(this->secondField5_0);
			this->groupGamespace->Controls->Add(this->secondField4_9);
			this->groupGamespace->Controls->Add(this->secondField4_8);
			this->groupGamespace->Controls->Add(this->secondField4_7);
			this->groupGamespace->Controls->Add(this->secondField4_6);
			this->groupGamespace->Controls->Add(this->secondField4_5);
			this->groupGamespace->Controls->Add(this->secondField4_4);
			this->groupGamespace->Controls->Add(this->secondField4_3);
			this->groupGamespace->Controls->Add(this->secondField4_2);
			this->groupGamespace->Controls->Add(this->secondField4_1);
			this->groupGamespace->Controls->Add(this->secondField4_0);
			this->groupGamespace->Controls->Add(this->secondField3_9);
			this->groupGamespace->Controls->Add(this->secondField3_8);
			this->groupGamespace->Controls->Add(this->secondField3_7);
			this->groupGamespace->Controls->Add(this->secondField3_6);
			this->groupGamespace->Controls->Add(this->secondField3_5);
			this->groupGamespace->Controls->Add(this->secondField3_4);
			this->groupGamespace->Controls->Add(this->secondField3_3);
			this->groupGamespace->Controls->Add(this->secondField3_2);
			this->groupGamespace->Controls->Add(this->secondField3_1);
			this->groupGamespace->Controls->Add(this->secondField3_0);
			this->groupGamespace->Controls->Add(this->secondField2_9);
			this->groupGamespace->Controls->Add(this->secondField2_8);
			this->groupGamespace->Controls->Add(this->secondField2_7);
			this->groupGamespace->Controls->Add(this->secondField2_6);
			this->groupGamespace->Controls->Add(this->secondField2_5);
			this->groupGamespace->Controls->Add(this->secondField2_4);
			this->groupGamespace->Controls->Add(this->secondField2_3);
			this->groupGamespace->Controls->Add(this->secondField2_2);
			this->groupGamespace->Controls->Add(this->secondField2_1);
			this->groupGamespace->Controls->Add(this->secondField2_0);
			this->groupGamespace->Controls->Add(this->secondField1_9);
			this->groupGamespace->Controls->Add(this->secondField1_8);
			this->groupGamespace->Controls->Add(this->secondField1_7);
			this->groupGamespace->Controls->Add(this->secondField1_6);
			this->groupGamespace->Controls->Add(this->secondField1_5);
			this->groupGamespace->Controls->Add(this->secondField1_4);
			this->groupGamespace->Controls->Add(this->secondField1_3);
			this->groupGamespace->Controls->Add(this->secondField1_2);
			this->groupGamespace->Controls->Add(this->secondField1_1);
			this->groupGamespace->Controls->Add(this->secondField1_0);
			this->groupGamespace->Controls->Add(this->secondField0_9);
			this->groupGamespace->Controls->Add(this->secondField0_8);
			this->groupGamespace->Controls->Add(this->secondField0_7);
			this->groupGamespace->Controls->Add(this->secondField0_6);
			this->groupGamespace->Controls->Add(this->secondField0_5);
			this->groupGamespace->Controls->Add(this->secondField0_4);
			this->groupGamespace->Controls->Add(this->secondField0_3);
			this->groupGamespace->Controls->Add(this->secondField0_2);
			this->groupGamespace->Controls->Add(this->secondField0_1);
			this->groupGamespace->Controls->Add(this->secondField0_0);
			this->groupGamespace->Controls->Add(this->firstField9_9);
			this->groupGamespace->Controls->Add(this->firstField9_8);
			this->groupGamespace->Controls->Add(this->firstField9_7);
			this->groupGamespace->Controls->Add(this->firstField9_6);
			this->groupGamespace->Controls->Add(this->firstField9_5);
			this->groupGamespace->Controls->Add(this->firstField9_4);
			this->groupGamespace->Controls->Add(this->firstField9_3);
			this->groupGamespace->Controls->Add(this->firstField9_2);
			this->groupGamespace->Controls->Add(this->firstField9_1);
			this->groupGamespace->Controls->Add(this->firstField9_0);
			this->groupGamespace->Controls->Add(this->firstField8_9);
			this->groupGamespace->Controls->Add(this->firstField8_8);
			this->groupGamespace->Controls->Add(this->firstField8_7);
			this->groupGamespace->Controls->Add(this->firstField8_6);
			this->groupGamespace->Controls->Add(this->firstField8_5);
			this->groupGamespace->Controls->Add(this->firstField8_4);
			this->groupGamespace->Controls->Add(this->firstField8_3);
			this->groupGamespace->Controls->Add(this->firstField8_2);
			this->groupGamespace->Controls->Add(this->firstField8_1);
			this->groupGamespace->Controls->Add(this->firstField8_0);
			this->groupGamespace->Controls->Add(this->firstField7_9);
			this->groupGamespace->Controls->Add(this->firstField7_8);
			this->groupGamespace->Controls->Add(this->firstField7_7);
			this->groupGamespace->Controls->Add(this->firstField7_6);
			this->groupGamespace->Controls->Add(this->firstField7_5);
			this->groupGamespace->Controls->Add(this->firstField7_4);
			this->groupGamespace->Controls->Add(this->firstField7_3);
			this->groupGamespace->Controls->Add(this->firstField7_2);
			this->groupGamespace->Controls->Add(this->firstField7_1);
			this->groupGamespace->Controls->Add(this->firstField7_0);
			this->groupGamespace->Controls->Add(this->firstField6_9);
			this->groupGamespace->Controls->Add(this->firstField6_8);
			this->groupGamespace->Controls->Add(this->firstField6_7);
			this->groupGamespace->Controls->Add(this->firstField6_6);
			this->groupGamespace->Controls->Add(this->firstField6_5);
			this->groupGamespace->Controls->Add(this->firstField6_4);
			this->groupGamespace->Controls->Add(this->firstField6_3);
			this->groupGamespace->Controls->Add(this->firstField6_2);
			this->groupGamespace->Controls->Add(this->firstField6_1);
			this->groupGamespace->Controls->Add(this->firstField6_0);
			this->groupGamespace->Controls->Add(this->firstField5_9);
			this->groupGamespace->Controls->Add(this->firstField5_8);
			this->groupGamespace->Controls->Add(this->firstField5_7);
			this->groupGamespace->Controls->Add(this->firstField5_6);
			this->groupGamespace->Controls->Add(this->firstField5_5);
			this->groupGamespace->Controls->Add(this->firstField5_4);
			this->groupGamespace->Controls->Add(this->firstField5_3);
			this->groupGamespace->Controls->Add(this->firstField5_2);
			this->groupGamespace->Controls->Add(this->firstField5_1);
			this->groupGamespace->Controls->Add(this->firstField5_0);
			this->groupGamespace->Controls->Add(this->firstField4_9);
			this->groupGamespace->Controls->Add(this->firstField4_8);
			this->groupGamespace->Controls->Add(this->firstField4_7);
			this->groupGamespace->Controls->Add(this->firstField4_6);
			this->groupGamespace->Controls->Add(this->firstField4_5);
			this->groupGamespace->Controls->Add(this->firstField4_4);
			this->groupGamespace->Controls->Add(this->firstField4_3);
			this->groupGamespace->Controls->Add(this->firstField4_2);
			this->groupGamespace->Controls->Add(this->firstField4_1);
			this->groupGamespace->Controls->Add(this->firstField4_0);
			this->groupGamespace->Controls->Add(this->firstField3_9);
			this->groupGamespace->Controls->Add(this->firstField3_8);
			this->groupGamespace->Controls->Add(this->firstField3_7);
			this->groupGamespace->Controls->Add(this->firstField3_6);
			this->groupGamespace->Controls->Add(this->firstField3_5);
			this->groupGamespace->Controls->Add(this->firstField3_4);
			this->groupGamespace->Controls->Add(this->firstField3_3);
			this->groupGamespace->Controls->Add(this->firstField3_2);
			this->groupGamespace->Controls->Add(this->firstField3_1);
			this->groupGamespace->Controls->Add(this->firstField3_0);
			this->groupGamespace->Controls->Add(this->firstField2_9);
			this->groupGamespace->Controls->Add(this->firstField2_8);
			this->groupGamespace->Controls->Add(this->firstField2_7);
			this->groupGamespace->Controls->Add(this->firstField2_6);
			this->groupGamespace->Controls->Add(this->firstField2_5);
			this->groupGamespace->Controls->Add(this->firstField2_4);
			this->groupGamespace->Controls->Add(this->firstField2_3);
			this->groupGamespace->Controls->Add(this->firstField2_2);
			this->groupGamespace->Controls->Add(this->firstField2_1);
			this->groupGamespace->Controls->Add(this->firstField2_0);
			this->groupGamespace->Controls->Add(this->firstField1_9);
			this->groupGamespace->Controls->Add(this->firstField1_8);
			this->groupGamespace->Controls->Add(this->firstField1_7);
			this->groupGamespace->Controls->Add(this->firstField1_6);
			this->groupGamespace->Controls->Add(this->firstField1_5);
			this->groupGamespace->Controls->Add(this->firstField1_4);
			this->groupGamespace->Controls->Add(this->firstField1_3);
			this->groupGamespace->Controls->Add(this->firstField1_2);
			this->groupGamespace->Controls->Add(this->firstField1_1);
			this->groupGamespace->Controls->Add(this->firstField1_0);
			this->groupGamespace->Controls->Add(this->firstField0_9);
			this->groupGamespace->Controls->Add(this->firstField0_8);
			this->groupGamespace->Controls->Add(this->firstField0_7);
			this->groupGamespace->Controls->Add(this->firstField0_6);
			this->groupGamespace->Controls->Add(this->firstField0_5);
			this->groupGamespace->Controls->Add(this->firstField0_4);
			this->groupGamespace->Controls->Add(this->firstField0_3);
			this->groupGamespace->Controls->Add(this->firstField0_2);
			this->groupGamespace->Controls->Add(this->firstField0_1);
			this->groupGamespace->Controls->Add(this->firstField0_0);
			this->groupGamespace->Controls->Add(this->buttonToMainMenu);
			this->groupGamespace->Controls->Add(this->labelWhoresMove);
			this->groupGamespace->Controls->Add(this->labelHits2);
			this->groupGamespace->Controls->Add(this->labelShoots2);
			this->groupGamespace->Controls->Add(this->labelHits1);
			this->groupGamespace->Location = System::Drawing::Point(-8, -11);
			this->groupGamespace->Name = L"groupGamespace";
			this->groupGamespace->Size = System::Drawing::Size(530, 359);
			this->groupGamespace->TabIndex = 0;
			this->groupGamespace->TabStop = false;
			// 
			// mainMenu
			// 
			this->mainMenu->Controls->Add(this->completionMenu);
			this->mainMenu->Controls->Add(this->player2TextBox);
			this->mainMenu->Controls->Add(this->player1TextBox);
			this->mainMenu->Controls->Add(this->label7);
			this->mainMenu->Controls->Add(this->label6);
			this->mainMenu->Controls->Add(this->startGame);
			this->mainMenu->Controls->Add(this->label5);
			this->mainMenu->Location = System::Drawing::Point(6, 0);
			this->mainMenu->Name = L"mainMenu";
			this->mainMenu->Size = System::Drawing::Size(530, 353);
			this->mainMenu->TabIndex = 208;
			this->mainMenu->TabStop = false;
			// 
			// completionMenu
			// 
			this->completionMenu->Controls->Add(this->buttonExit);
			this->completionMenu->Controls->Add(this->buttonToMainMenu2);
			this->completionMenu->Controls->Add(this->buttonNewGame);
			this->completionMenu->Controls->Add(this->labelWinner);
			this->completionMenu->Location = System::Drawing::Point(0, 0);
			this->completionMenu->Name = L"completionMenu";
			this->completionMenu->Size = System::Drawing::Size(524, 339);
			this->completionMenu->TabIndex = 1;
			this->completionMenu->TabStop = false;
			this->completionMenu->Visible = false;
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->Location = System::Drawing::Point(214, 280);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(100, 30);
			this->buttonExit->TabIndex = 3;
			this->buttonExit->Text = L"Вихiд з гри";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
			// 
			// buttonToMainMenu2
			// 
			this->buttonToMainMenu2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonToMainMenu2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonToMainMenu2->Location = System::Drawing::Point(179, 191);
			this->buttonToMainMenu2->Name = L"buttonToMainMenu2";
			this->buttonToMainMenu2->Size = System::Drawing::Size(170, 36);
			this->buttonToMainMenu2->TabIndex = 2;
			this->buttonToMainMenu2->Text = L"Головне меню";
			this->buttonToMainMenu2->UseVisualStyleBackColor = false;
			this->buttonToMainMenu2->Click += gcnew System::EventHandler(this, &MyForm::buttonToMainMenu2_Click);
			// 
			// buttonNewGame
			// 
			this->buttonNewGame->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonNewGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNewGame->Location = System::Drawing::Point(124, 134);
			this->buttonNewGame->Name = L"buttonNewGame";
			this->buttonNewGame->Size = System::Drawing::Size(280, 36);
			this->buttonNewGame->TabIndex = 1;
			this->buttonNewGame->Text = L"Нова гра з тими ж гравцями";
			this->buttonNewGame->UseVisualStyleBackColor = false;
			this->buttonNewGame->Click += gcnew System::EventHandler(this, &MyForm::buttonNewGame_Click);
			// 
			// labelWinner
			// 
			this->labelWinner->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelWinner->Location = System::Drawing::Point(5, 50);
			this->labelWinner->Name = L"labelWinner";
			this->labelWinner->Size = System::Drawing::Size(513, 45);
			this->labelWinner->TabIndex = 0;
			this->labelWinner->Text = L"Перемiг: ";
			this->labelWinner->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// player2TextBox
			// 
			this->player2TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->player2TextBox->Location = System::Drawing::Point(317, 173);
			this->player2TextBox->MaxLength = 20;
			this->player2TextBox->Name = L"player2TextBox";
			this->player2TextBox->Size = System::Drawing::Size(100, 29);
			this->player2TextBox->TabIndex = 5;
			// 
			// player1TextBox
			// 
			this->player1TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->player1TextBox->Location = System::Drawing::Point(317, 131);
			this->player1TextBox->MaxLength = 20;
			this->player1TextBox->Name = L"player1TextBox";
			this->player1TextBox->Size = System::Drawing::Size(100, 29);
			this->player1TextBox->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(120, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(190, 24);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Iм\'я другого гравця:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(120, 134);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(196, 24);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Iм\'я першого гравця:";
			// 
			// startGame
			// 
			this->startGame->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->startGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startGame->Location = System::Drawing::Point(124, 241);
			this->startGame->Name = L"startGame";
			this->startGame->Size = System::Drawing::Size(280, 65);
			this->startGame->TabIndex = 1;
			this->startGame->Text = L"Почати гру";
			this->startGame->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->startGame->UseVisualStyleBackColor = false;
			this->startGame->Click += gcnew System::EventHandler(this, &MyForm::startGame_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(33, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(468, 81);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Морський бiй";
			// 
			// labelShoots1
			// 
			this->labelShoots1->AutoSize = true;
			this->labelShoots1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelShoots1->Location = System::Drawing::Point(27, 281);
			this->labelShoots1->Name = L"labelShoots1";
			this->labelShoots1->Size = System::Drawing::Size(70, 16);
			this->labelShoots1->TabIndex = 204;
			this->labelShoots1->Text = L"Пострiли:";
			// 
			// labelPlayer2
			// 
			this->labelPlayer2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPlayer2->Location = System::Drawing::Point(292, 261);
			this->labelPlayer2->Name = L"labelPlayer2";
			this->labelPlayer2->Size = System::Drawing::Size(209, 22);
			this->labelPlayer2->TabIndex = 203;
			this->labelPlayer2->Text = L"Player2";
			this->labelPlayer2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelPlayer1
			// 
			this->labelPlayer1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPlayer1->Location = System::Drawing::Point(30, 261);
			this->labelPlayer1->Name = L"labelPlayer1";
			this->labelPlayer1->Size = System::Drawing::Size(209, 22);
			this->labelPlayer1->TabIndex = 202;
			this->labelPlayer1->Text = L"Player1";
			this->labelPlayer1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonToMainMenu
			// 
			this->buttonToMainMenu->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonToMainMenu->Location = System::Drawing::Point(11, 15);
			this->buttonToMainMenu->Name = L"buttonToMainMenu";
			this->buttonToMainMenu->Size = System::Drawing::Size(96, 23);
			this->buttonToMainMenu->TabIndex = 209;
			this->buttonToMainMenu->Text = L"Головне меню";
			this->buttonToMainMenu->UseVisualStyleBackColor = false;
			this->buttonToMainMenu->Click += gcnew System::EventHandler(this, &MyForm::buttonToMainMenu_Click);
			// 
			// labelHits2
			// 
			this->labelHits2->AutoSize = true;
			this->labelHits2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelHits2->Location = System::Drawing::Point(289, 300);
			this->labelHits2->Name = L"labelHits2";
			this->labelHits2->Size = System::Drawing::Size(115, 16);
			this->labelHits2->TabIndex = 207;
			this->labelHits2->Text = L"Влучнi пострiли:";
			// 
			// labelShoots2
			// 
			this->labelShoots2->AutoSize = true;
			this->labelShoots2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelShoots2->Location = System::Drawing::Point(289, 281);
			this->labelShoots2->Name = L"labelShoots2";
			this->labelShoots2->Size = System::Drawing::Size(70, 16);
			this->labelShoots2->TabIndex = 206;
			this->labelShoots2->Text = L"Пострiли:";
			// 
			// labelHits1
			// 
			this->labelHits1->AutoSize = true;
			this->labelHits1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelHits1->Location = System::Drawing::Point(27, 300);
			this->labelHits1->Name = L"labelHits1";
			this->labelHits1->Size = System::Drawing::Size(115, 16);
			this->labelHits1->TabIndex = 205;
			this->labelHits1->Text = L"Влучнi пострiли:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(518, 320);
			this->Controls->Add(this->groupGamespace);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Морський бiй";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField0_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField1_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField2_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField3_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField4_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField5_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField6_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField7_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField8_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstField9_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField0_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField1_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField2_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField3_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField4_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField5_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField6_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField7_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField8_9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondField9_9))->EndInit();
			this->groupGamespace->ResumeLayout(false);
			this->groupGamespace->PerformLayout();
			this->mainMenu->ResumeLayout(false);
			this->mainMenu->PerformLayout();
			this->completionMenu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		
		//Імена гравців
		String ^player1Name, ^player2Name;
		//Кількость пострілів
		int numOfShoots1 = 0, numOfShoots2 = 0;
		//Кількість влучень
		int hitCount1 = 0, hitCount2 = 0;
		//Чий зараз хід: false - 1-й гравець, true - 2-й гравець
		bool whoseMove = false;

		//Функція обнуління даних масивів, імен гравців, кількості пострілів та влучень
		void zeroing()
		{
			for(int i=0;i<FIELD_SIZE;++i)
				for (int j = 0; j < FIELD_SIZE; ++j)
				{
					field1[i][j] = 0;
					field2[i][j] = 0;
					shipsPos1[i][j] = shipsPos2[i][j] = false;
				}
			player1Name = player2Name = "";
			player1TextBox->Text = "";
			player2TextBox->Text = "";
			numOfShoots1 = numOfShoots2 = 0;
			hitCount1 = hitCount2 = 0;
		}

		//Функція ініціалізує змінні необхідні для почтку гри
		void startingGame()
		{
			whoseMove = rand() % 2;
			genShipsPos(shipsPos1);
			genShipsPos(shipsPos2);
			DrawField1();
			DrawField2();
			labelPlayer1->Text = player1Name;
			labelPlayer2->Text = player2Name;
			labelShoots1->Text = "Пострiли: " + numOfShoots1;
			labelShoots2->Text = "Пострiли: " + numOfShoots2;
			labelHits1->Text = "Влучнi пострiли: " + hitCount1;
			labelHits2->Text = "Влучнi пострiли: " + hitCount2;
			if (!whoseMove)
			{
				labelWhoresMove->Text = "Ходить: " + player1Name;
			}
			else
			{
				labelWhoresMove->Text = "Ходить: " + player2Name;
			}
		}

		//Функія генерує позиції кораблів на полі
		//приймає масив позіцій кораблів
		void genShipsPos(bool arr[][FIELD_SIZE])
		{
			//масив кількості та розміру кораблів
			//0-й стовпець - кількіть; 1-й стовпець - розмір
			int ships[][2] = {
				{1,4},
				{2,3},
				{3,2},
				{4,1},
			};
			//цикл виклку функції генерації позицій кораблів одного роміру
			for (int i = 0; i < 4; ++i)
			{
				setRandShips(arr, ships[i][1], ships[i][0]);
			}
		}

		//Функція генерації позицій кораблів одного розміру
		//приймає масив позицій кораблів, розмір кораблю, кіл-сть кораблів для генерації
		void setRandShips(bool map[][FIELD_SIZE], int ship_rate, int ship_count)
		{
			bool setting_is_possible = 1;
			int x, y;
			int dir = 0;
			int temp_x;
			int temp_y;
			int count_ship = 0;
			while (count_ship < ship_count) {
				do {
					x = rand() % FIELD_SIZE;
					y = rand() % FIELD_SIZE;

					temp_x = x;
					temp_y = y;

					dir = rand() % 4;

					setting_is_possible = 1;
					for (int i = 0; i < ship_rate; ++i) {
						if (x < 0 || y < 0 || x >= FIELD_SIZE || y >= FIELD_SIZE) {
							setting_is_possible = 0;
							break;
						}
						if (map[x][y] == 1 ||
							map[x][y + 1] == 1 ||
							map[x][y - 1] == 1 ||
							map[x + 1][y] == 1 ||
							map[x + 1][y + 1] == 1 ||
							map[x + 1][y - 1] == 1 ||
							map[x - 1][y] == 1 ||
							map[x - 1][y + 1] == 1 ||
							map[x - 1][y - 1] == 1)
						{
							setting_is_possible = 0;
							break;
						}
						switch (dir) {
						case 0:x++; break;
						case 1:y++; break;
						case 2:x--; break;
						case 3:y--; break;
						}
					}
				} while (setting_is_possible != 1);

				if (setting_is_possible == 1) {
					x = temp_x;
					y = temp_y;
					for (int i = 0; i < ship_rate; ++i) {
						map[x][y] = 1;
						switch (dir) {
						case 0:x++; break;
						case 1:y++; break;
						case 2:x--; break;
						case 3:y--; break;
						}
					}
				}
				count_ship++;
			}
		}

		//Функції відрисовки полів. Першого та другого відповідно
		void DrawField1()
		{
			labelShoots2->Text = "Пострiли: " + numOfShoots2;
			labelHits2->Text = "Влучнi пострiли: " + hitCount2;
			//0 - white field
			//1 - point field
			//2 - kross field
			//3 - black field
			switch (field1[0][0])
			{
			case 0:firstField0_0->Image = whiteField; break;
			case 1:firstField0_0->Image = pointField; break;
			case 2:firstField0_0->Image = krossField; break;
			case 3:firstField0_0->Image = blackField; break;
			}
			switch (field1[0][1])
			{
			case 0:firstField0_1->Image = whiteField; break;
			case 1:firstField0_1->Image = pointField; break;
			case 2:firstField0_1->Image = krossField; break;
			case 3:firstField0_1->Image = blackField; break;
			}
			switch (field1[0][2])
			{
			case 0:firstField0_2->Image = whiteField; break;
			case 1:firstField0_2->Image = pointField; break;
			case 2:firstField0_2->Image = krossField; break;
			case 3:firstField0_2->Image = blackField; break;
			}
			switch (field1[0][3])
			{
			case 0:firstField0_3->Image = whiteField; break;
			case 1:firstField0_3->Image = pointField; break;
			case 2:firstField0_3->Image = krossField; break;
			case 3:firstField0_3->Image = blackField; break;
			}
			switch (field1[0][4])
			{
			case 0:firstField0_4->Image = whiteField; break;
			case 1:firstField0_4->Image = pointField; break;
			case 2:firstField0_4->Image = krossField; break;
			case 3:firstField0_4->Image = blackField; break;
			}
			switch (field1[0][5])
			{
			case 0:firstField0_5->Image = whiteField; break;
			case 1:firstField0_5->Image = pointField; break;
			case 2:firstField0_5->Image = krossField; break;
			case 3:firstField0_5->Image = blackField; break;
			}
			switch (field1[0][6])
			{
			case 0:firstField0_6->Image = whiteField; break;
			case 1:firstField0_6->Image = pointField; break;
			case 2:firstField0_6->Image = krossField; break;
			case 3:firstField0_6->Image = blackField; break;
			}
			switch (field1[0][7])
			{
			case 0:firstField0_7->Image = whiteField; break;
			case 1:firstField0_7->Image = pointField; break;
			case 2:firstField0_7->Image = krossField; break;
			case 3:firstField0_7->Image = blackField; break;
			}
			switch (field1[0][8])
			{
			case 0:firstField0_8->Image = whiteField; break;
			case 1:firstField0_8->Image = pointField; break;
			case 2:firstField0_8->Image = krossField; break;
			case 3:firstField0_8->Image = blackField; break;
			}
			switch (field1[0][9])
			{
			case 0:firstField0_9->Image = whiteField; break;
			case 1:firstField0_9->Image = pointField; break;
			case 2:firstField0_9->Image = krossField; break;
			case 3:firstField0_9->Image = blackField; break;
			}
			switch (field1[1][0])
			{
			case 0:firstField1_0->Image = whiteField; break;
			case 1:firstField1_0->Image = pointField; break;
			case 2:firstField1_0->Image = krossField; break;
			case 3:firstField1_0->Image = blackField; break;
			}
			switch (field1[1][1])
			{
			case 0:firstField1_1->Image = whiteField; break;
			case 1:firstField1_1->Image = pointField; break;
			case 2:firstField1_1->Image = krossField; break;
			case 3:firstField1_1->Image = blackField; break;
			}
			switch (field1[1][2])
			{
			case 0:firstField1_2->Image = whiteField; break;
			case 1:firstField1_2->Image = pointField; break;
			case 2:firstField1_2->Image = krossField; break;
			case 3:firstField1_2->Image = blackField; break;
			}
			switch (field1[1][3])
			{
			case 0:firstField1_3->Image = whiteField; break;
			case 1:firstField1_3->Image = pointField; break;
			case 2:firstField1_3->Image = krossField; break;
			case 3:firstField1_3->Image = blackField; break;
			}
			switch (field1[1][4])
			{
			case 0:firstField1_4->Image = whiteField; break;
			case 1:firstField1_4->Image = pointField; break;
			case 2:firstField1_4->Image = krossField; break;
			case 3:firstField1_4->Image = blackField; break;
			}
			switch (field1[1][5])
			{
			case 0:firstField1_5->Image = whiteField; break;
			case 1:firstField1_5->Image = pointField; break;
			case 2:firstField1_5->Image = krossField; break;
			case 3:firstField1_5->Image = blackField; break;
			}
			switch (field1[1][6])
			{
			case 0:firstField1_6->Image = whiteField; break;
			case 1:firstField1_6->Image = pointField; break;
			case 2:firstField1_6->Image = krossField; break;
			case 3:firstField1_6->Image = blackField; break;
			}
			switch (field1[1][7])
			{
			case 0:firstField1_7->Image = whiteField; break;
			case 1:firstField1_7->Image = pointField; break;
			case 2:firstField1_7->Image = krossField; break;
			case 3:firstField1_7->Image = blackField; break;
			}
			switch (field1[1][8])
			{
			case 0:firstField1_8->Image = whiteField; break;
			case 1:firstField1_8->Image = pointField; break;
			case 2:firstField1_8->Image = krossField; break;
			case 3:firstField1_8->Image = blackField; break;
			}
			switch (field1[1][9])
			{
			case 0:firstField1_9->Image = whiteField; break;
			case 1:firstField1_9->Image = pointField; break;
			case 2:firstField1_9->Image = krossField; break;
			case 3:firstField1_9->Image = blackField; break;
			}
			switch (field1[2][0])
			{
			case 0:firstField2_0->Image = whiteField; break;
			case 1:firstField2_0->Image = pointField; break;
			case 2:firstField2_0->Image = krossField; break;
			case 3:firstField2_0->Image = blackField; break;
			}
			switch (field1[2][1])
			{
			case 0:firstField2_1->Image = whiteField; break;
			case 1:firstField2_1->Image = pointField; break;
			case 2:firstField2_1->Image = krossField; break;
			case 3:firstField2_1->Image = blackField; break;
			}
			switch (field1[2][2])
			{
			case 0:firstField2_2->Image = whiteField; break;
			case 1:firstField2_2->Image = pointField; break;
			case 2:firstField2_2->Image = krossField; break;
			case 3:firstField2_2->Image = blackField; break;
			}
			switch (field1[2][3])
			{
			case 0:firstField2_3->Image = whiteField; break;
			case 1:firstField2_3->Image = pointField; break;
			case 2:firstField2_3->Image = krossField; break;
			case 3:firstField2_3->Image = blackField; break;
			}
			switch (field1[2][4])
			{
			case 0:firstField2_4->Image = whiteField; break;
			case 1:firstField2_4->Image = pointField; break;
			case 2:firstField2_4->Image = krossField; break;
			case 3:firstField2_4->Image = blackField; break;
			}
			switch (field1[2][5])
			{
			case 0:firstField2_5->Image = whiteField; break;
			case 1:firstField2_5->Image = pointField; break;
			case 2:firstField2_5->Image = krossField; break;
			case 3:firstField2_5->Image = blackField; break;
			}
			switch (field1[2][6])
			{
			case 0:firstField2_6->Image = whiteField; break;
			case 1:firstField2_6->Image = pointField; break;
			case 2:firstField2_6->Image = krossField; break;
			case 3:firstField2_6->Image = blackField; break;
			}
			switch (field1[2][7])
			{
			case 0:firstField2_7->Image = whiteField; break;
			case 1:firstField2_7->Image = pointField; break;
			case 2:firstField2_7->Image = krossField; break;
			case 3:firstField2_7->Image = blackField; break;
			}
			switch (field1[2][8])
			{
			case 0:firstField2_8->Image = whiteField; break;
			case 1:firstField2_8->Image = pointField; break;
			case 2:firstField2_8->Image = krossField; break;
			case 3:firstField2_8->Image = blackField; break;
			}
			switch (field1[2][9])
			{
			case 0:firstField2_9->Image = whiteField; break;
			case 1:firstField2_9->Image = pointField; break;
			case 2:firstField2_9->Image = krossField; break;
			case 3:firstField2_9->Image = blackField; break;
			}
			switch (field1[3][0])
			{
			case 0:firstField3_0->Image = whiteField; break;
			case 1:firstField3_0->Image = pointField; break;
			case 2:firstField3_0->Image = krossField; break;
			case 3:firstField3_0->Image = blackField; break;
			}
			switch (field1[3][1])
			{
			case 0:firstField3_1->Image = whiteField; break;
			case 1:firstField3_1->Image = pointField; break;
			case 2:firstField3_1->Image = krossField; break;
			case 3:firstField3_1->Image = blackField; break;
			}
			switch (field1[3][2])
			{
			case 0:firstField3_2->Image = whiteField; break;
			case 1:firstField3_2->Image = pointField; break;
			case 2:firstField3_2->Image = krossField; break;
			case 3:firstField3_2->Image = blackField; break;
			}
			switch (field1[3][3])
			{
			case 0:firstField3_3->Image = whiteField; break;
			case 1:firstField3_3->Image = pointField; break;
			case 2:firstField3_3->Image = krossField; break;
			case 3:firstField3_3->Image = blackField; break;
			}
			switch (field1[3][4])
			{
			case 0:firstField3_4->Image = whiteField; break;
			case 1:firstField3_4->Image = pointField; break;
			case 2:firstField3_4->Image = krossField; break;
			case 3:firstField3_4->Image = blackField; break;
			}
			switch (field1[3][5])
			{
			case 0:firstField3_5->Image = whiteField; break;
			case 1:firstField3_5->Image = pointField; break;
			case 2:firstField3_5->Image = krossField; break;
			case 3:firstField3_5->Image = blackField; break;
			}
			switch (field1[3][6])
			{
			case 0:firstField3_6->Image = whiteField; break;
			case 1:firstField3_6->Image = pointField; break;
			case 2:firstField3_6->Image = krossField; break;
			case 3:firstField3_6->Image = blackField; break;
			}
			switch (field1[3][7])
			{
			case 0:firstField3_7->Image = whiteField; break;
			case 1:firstField3_7->Image = pointField; break;
			case 2:firstField3_7->Image = krossField; break;
			case 3:firstField3_7->Image = blackField; break;
			}
			switch (field1[3][8])
			{
			case 0:firstField3_8->Image = whiteField; break;
			case 1:firstField3_8->Image = pointField; break;
			case 2:firstField3_8->Image = krossField; break;
			case 3:firstField3_8->Image = blackField; break;
			}
			switch (field1[3][9])
			{
			case 0:firstField3_9->Image = whiteField; break;
			case 1:firstField3_9->Image = pointField; break;
			case 2:firstField3_9->Image = krossField; break;
			case 3:firstField3_9->Image = blackField; break;
			}
			switch (field1[4][0])
			{
			case 0:firstField4_0->Image = whiteField; break;
			case 1:firstField4_0->Image = pointField; break;
			case 2:firstField4_0->Image = krossField; break;
			case 3:firstField4_0->Image = blackField; break;
			}
			switch (field1[4][1])
			{
			case 0:firstField4_1->Image = whiteField; break;
			case 1:firstField4_1->Image = pointField; break;
			case 2:firstField4_1->Image = krossField; break;
			case 3:firstField4_1->Image = blackField; break;
			}
			switch (field1[4][2])
			{
			case 0:firstField4_2->Image = whiteField; break;
			case 1:firstField4_2->Image = pointField; break;
			case 2:firstField4_2->Image = krossField; break;
			case 3:firstField4_2->Image = blackField; break;
			}
			switch (field1[4][3])
			{
			case 0:firstField4_3->Image = whiteField; break;
			case 1:firstField4_3->Image = pointField; break;
			case 2:firstField4_3->Image = krossField; break;
			case 3:firstField4_3->Image = blackField; break;
			}
			switch (field1[4][4])
			{
			case 0:firstField4_4->Image = whiteField; break;
			case 1:firstField4_4->Image = pointField; break;
			case 2:firstField4_4->Image = krossField; break;
			case 3:firstField4_4->Image = blackField; break;
			}
			switch (field1[4][5])
			{
			case 0:firstField4_5->Image = whiteField; break;
			case 1:firstField4_5->Image = pointField; break;
			case 2:firstField4_5->Image = krossField; break;
			case 3:firstField4_5->Image = blackField; break;
			}
			switch (field1[4][6])
			{
			case 0:firstField4_6->Image = whiteField; break;
			case 1:firstField4_6->Image = pointField; break;
			case 2:firstField4_6->Image = krossField; break;
			case 3:firstField4_6->Image = blackField; break;
			}
			switch (field1[4][7])
			{
			case 0:firstField4_7->Image = whiteField; break;
			case 1:firstField4_7->Image = pointField; break;
			case 2:firstField4_7->Image = krossField; break;
			case 3:firstField4_7->Image = blackField; break;
			}
			switch (field1[4][8])
			{
			case 0:firstField4_8->Image = whiteField; break;
			case 1:firstField4_8->Image = pointField; break;
			case 2:firstField4_8->Image = krossField; break;
			case 3:firstField4_8->Image = blackField; break;
			}
			switch (field1[4][9])
			{
			case 0:firstField4_9->Image = whiteField; break;
			case 1:firstField4_9->Image = pointField; break;
			case 2:firstField4_9->Image = krossField; break;
			case 3:firstField4_9->Image = blackField; break;
			}
			switch (field1[5][0])
			{
			case 0:firstField5_0->Image = whiteField; break;
			case 1:firstField5_0->Image = pointField; break;
			case 2:firstField5_0->Image = krossField; break;
			case 3:firstField5_0->Image = blackField; break;
			}
			switch (field1[5][1])
			{
			case 0:firstField5_1->Image = whiteField; break;
			case 1:firstField5_1->Image = pointField; break;
			case 2:firstField5_1->Image = krossField; break;
			case 3:firstField5_1->Image = blackField; break;
			}
			switch (field1[5][2])
			{
			case 0:firstField5_2->Image = whiteField; break;
			case 1:firstField5_2->Image = pointField; break;
			case 2:firstField5_2->Image = krossField; break;
			case 3:firstField5_2->Image = blackField; break;
			}
			switch (field1[5][3])
			{
			case 0:firstField5_3->Image = whiteField; break;
			case 1:firstField5_3->Image = pointField; break;
			case 2:firstField5_3->Image = krossField; break;
			case 3:firstField5_3->Image = blackField; break;
			}
			switch (field1[5][4])
			{
			case 0:firstField5_4->Image = whiteField; break;
			case 1:firstField5_4->Image = pointField; break;
			case 2:firstField5_4->Image = krossField; break;
			case 3:firstField5_4->Image = blackField; break;
			}
			switch (field1[5][5])
			{
			case 0:firstField5_5->Image = whiteField; break;
			case 1:firstField5_5->Image = pointField; break;
			case 2:firstField5_5->Image = krossField; break;
			case 3:firstField5_5->Image = blackField; break;
			}
			switch (field1[5][6])
			{
			case 0:firstField5_6->Image = whiteField; break;
			case 1:firstField5_6->Image = pointField; break;
			case 2:firstField5_6->Image = krossField; break;
			case 3:firstField5_6->Image = blackField; break;
			}
			switch (field1[5][7])
			{
			case 0:firstField5_7->Image = whiteField; break;
			case 1:firstField5_7->Image = pointField; break;
			case 2:firstField5_7->Image = krossField; break;
			case 3:firstField5_7->Image = blackField; break;
			}
			switch (field1[5][8])
			{
			case 0:firstField5_8->Image = whiteField; break;
			case 1:firstField5_8->Image = pointField; break;
			case 2:firstField5_8->Image = krossField; break;
			case 3:firstField5_8->Image = blackField; break;
			}
			switch (field1[5][9])
			{
			case 0:firstField5_9->Image = whiteField; break;
			case 1:firstField5_9->Image = pointField; break;
			case 2:firstField5_9->Image = krossField; break;
			case 3:firstField5_9->Image = blackField; break;
			}
			switch (field1[6][0])
			{
			case 0:firstField6_0->Image = whiteField; break;
			case 1:firstField6_0->Image = pointField; break;
			case 2:firstField6_0->Image = krossField; break;
			case 3:firstField6_0->Image = blackField; break;
			}
			switch (field1[6][1])
			{
			case 0:firstField6_1->Image = whiteField; break;
			case 1:firstField6_1->Image = pointField; break;
			case 2:firstField6_1->Image = krossField; break;
			case 3:firstField6_1->Image = blackField; break;
			}
			switch (field1[6][2])
			{
			case 0:firstField6_2->Image = whiteField; break;
			case 1:firstField6_2->Image = pointField; break;
			case 2:firstField6_2->Image = krossField; break;
			case 3:firstField6_2->Image = blackField; break;
			}
			switch (field1[6][3])
			{
			case 0:firstField6_3->Image = whiteField; break;
			case 1:firstField6_3->Image = pointField; break;
			case 2:firstField6_3->Image = krossField; break;
			case 3:firstField6_3->Image = blackField; break;
			}
			switch (field1[6][4])
			{
			case 0:firstField6_4->Image = whiteField; break;
			case 1:firstField6_4->Image = pointField; break;
			case 2:firstField6_4->Image = krossField; break;
			case 3:firstField6_4->Image = blackField; break;
			}
			switch (field1[6][5])
			{
			case 0:firstField6_5->Image = whiteField; break;
			case 1:firstField6_5->Image = pointField; break;
			case 2:firstField6_5->Image = krossField; break;
			case 3:firstField6_5->Image = blackField; break;
			}
			switch (field1[6][6])
			{
			case 0:firstField6_6->Image = whiteField; break;
			case 1:firstField6_6->Image = pointField; break;
			case 2:firstField6_6->Image = krossField; break;
			case 3:firstField6_6->Image = blackField; break;
			}
			switch (field1[6][7])
			{
			case 0:firstField6_7->Image = whiteField; break;
			case 1:firstField6_7->Image = pointField; break;
			case 2:firstField6_7->Image = krossField; break;
			case 3:firstField6_7->Image = blackField; break;
			}
			switch (field1[6][8])
			{
			case 0:firstField6_8->Image = whiteField; break;
			case 1:firstField6_8->Image = pointField; break;
			case 2:firstField6_8->Image = krossField; break;
			case 3:firstField6_8->Image = blackField; break;
			}
			switch (field1[6][9])
			{
			case 0:firstField6_9->Image = whiteField; break;
			case 1:firstField6_9->Image = pointField; break;
			case 2:firstField6_9->Image = krossField; break;
			case 3:firstField6_9->Image = blackField; break;
			}
			switch (field1[7][0])
			{
			case 0:firstField7_0->Image = whiteField; break;
			case 1:firstField7_0->Image = pointField; break;
			case 2:firstField7_0->Image = krossField; break;
			case 3:firstField7_0->Image = blackField; break;
			}
			switch (field1[7][1])
			{
			case 0:firstField7_1->Image = whiteField; break;
			case 1:firstField7_1->Image = pointField; break;
			case 2:firstField7_1->Image = krossField; break;
			case 3:firstField7_1->Image = blackField; break;
			}
			switch (field1[7][2])
			{
			case 0:firstField7_2->Image = whiteField; break;
			case 1:firstField7_2->Image = pointField; break;
			case 2:firstField7_2->Image = krossField; break;
			case 3:firstField7_2->Image = blackField; break;
			}
			switch (field1[7][3])
			{
			case 0:firstField7_3->Image = whiteField; break;
			case 1:firstField7_3->Image = pointField; break;
			case 2:firstField7_3->Image = krossField; break;
			case 3:firstField7_3->Image = blackField; break;
			}
			switch (field1[7][4])
			{
			case 0:firstField7_4->Image = whiteField; break;
			case 1:firstField7_4->Image = pointField; break;
			case 2:firstField7_4->Image = krossField; break;
			case 3:firstField7_4->Image = blackField; break;
			}
			switch (field1[7][5])
			{
			case 0:firstField7_5->Image = whiteField; break;
			case 1:firstField7_5->Image = pointField; break;
			case 2:firstField7_5->Image = krossField; break;
			case 3:firstField7_5->Image = blackField; break;
			}
			switch (field1[7][6])
			{
			case 0:firstField7_6->Image = whiteField; break;
			case 1:firstField7_6->Image = pointField; break;
			case 2:firstField7_6->Image = krossField; break;
			case 3:firstField7_6->Image = blackField; break;
			}
			switch (field1[7][7])
			{
			case 0:firstField7_7->Image = whiteField; break;
			case 1:firstField7_7->Image = pointField; break;
			case 2:firstField7_7->Image = krossField; break;
			case 3:firstField7_7->Image = blackField; break;
			}
			switch (field1[7][8])
			{
			case 0:firstField7_8->Image = whiteField; break;
			case 1:firstField7_8->Image = pointField; break;
			case 2:firstField7_8->Image = krossField; break;
			case 3:firstField7_8->Image = blackField; break;
			}
			switch (field1[7][9])
			{
			case 0:firstField7_9->Image = whiteField; break;
			case 1:firstField7_9->Image = pointField; break;
			case 2:firstField7_9->Image = krossField; break;
			case 3:firstField7_9->Image = blackField; break;
			}
			switch (field1[8][0])
			{
			case 0:firstField8_0->Image = whiteField; break;
			case 1:firstField8_0->Image = pointField; break;
			case 2:firstField8_0->Image = krossField; break;
			case 3:firstField8_0->Image = blackField; break;
			}
			switch (field1[8][1])
			{
			case 0:firstField8_1->Image = whiteField; break;
			case 1:firstField8_1->Image = pointField; break;
			case 2:firstField8_1->Image = krossField; break;
			case 3:firstField8_1->Image = blackField; break;
			}
			switch (field1[8][2])
			{
			case 0:firstField8_2->Image = whiteField; break;
			case 1:firstField8_2->Image = pointField; break;
			case 2:firstField8_2->Image = krossField; break;
			case 3:firstField8_2->Image = blackField; break;
			}
			switch (field1[8][3])
			{
			case 0:firstField8_3->Image = whiteField; break;
			case 1:firstField8_3->Image = pointField; break;
			case 2:firstField8_3->Image = krossField; break;
			case 3:firstField8_3->Image = blackField; break;
			}
			switch (field1[8][4])
			{
			case 0:firstField8_4->Image = whiteField; break;
			case 1:firstField8_4->Image = pointField; break;
			case 2:firstField8_4->Image = krossField; break;
			case 3:firstField8_4->Image = blackField; break;
			}
			switch (field1[8][5])
			{
			case 0:firstField8_5->Image = whiteField; break;
			case 1:firstField8_5->Image = pointField; break;
			case 2:firstField8_5->Image = krossField; break;
			case 3:firstField8_5->Image = blackField; break;
			}
			switch (field1[8][6])
			{
			case 0:firstField8_6->Image = whiteField; break;
			case 1:firstField8_6->Image = pointField; break;
			case 2:firstField8_6->Image = krossField; break;
			case 3:firstField8_6->Image = blackField; break;
			}
			switch (field1[8][7])
			{
			case 0:firstField8_7->Image = whiteField; break;
			case 1:firstField8_7->Image = pointField; break;
			case 2:firstField8_7->Image = krossField; break;
			case 3:firstField8_7->Image = blackField; break;
			}
			switch (field1[8][8])
			{
			case 0:firstField8_8->Image = whiteField; break;
			case 1:firstField8_8->Image = pointField; break;
			case 2:firstField8_8->Image = krossField; break;
			case 3:firstField8_8->Image = blackField; break;
			}
			switch (field1[8][9])
			{
			case 0:firstField8_9->Image = whiteField; break;
			case 1:firstField8_9->Image = pointField; break;
			case 2:firstField8_9->Image = krossField; break;
			case 3:firstField8_9->Image = blackField; break;
			}
			switch (field1[9][0])
			{
			case 0:firstField9_0->Image = whiteField; break;
			case 1:firstField9_0->Image = pointField; break;
			case 2:firstField9_0->Image = krossField; break;
			case 3:firstField9_0->Image = blackField; break;
			}
			switch (field1[9][1])
			{
			case 0:firstField9_1->Image = whiteField; break;
			case 1:firstField9_1->Image = pointField; break;
			case 2:firstField9_1->Image = krossField; break;
			case 3:firstField9_1->Image = blackField; break;
			}
			switch (field1[9][2])
			{
			case 0:firstField9_2->Image = whiteField; break;
			case 1:firstField9_2->Image = pointField; break;
			case 2:firstField9_2->Image = krossField; break;
			case 3:firstField9_2->Image = blackField; break;
			}
			switch (field1[9][3])
			{
			case 0:firstField9_3->Image = whiteField; break;
			case 1:firstField9_3->Image = pointField; break;
			case 2:firstField9_3->Image = krossField; break;
			case 3:firstField9_3->Image = blackField; break;
			}
			switch (field1[9][4])
			{
			case 0:firstField9_4->Image = whiteField; break;
			case 1:firstField9_4->Image = pointField; break;
			case 2:firstField9_4->Image = krossField; break;
			case 3:firstField9_4->Image = blackField; break;
			}
			switch (field1[9][5])
			{
			case 0:firstField9_5->Image = whiteField; break;
			case 1:firstField9_5->Image = pointField; break;
			case 2:firstField9_5->Image = krossField; break;
			case 3:firstField9_5->Image = blackField; break;
			}
			switch (field1[9][6])
			{
			case 0:firstField9_6->Image = whiteField; break;
			case 1:firstField9_6->Image = pointField; break;
			case 2:firstField9_6->Image = krossField; break;
			case 3:firstField9_6->Image = blackField; break;
			}
			switch (field1[9][7])
			{
			case 0:firstField9_7->Image = whiteField; break;
			case 1:firstField9_7->Image = pointField; break;
			case 2:firstField9_7->Image = krossField; break;
			case 3:firstField9_7->Image = blackField; break;
			}
			switch (field1[9][8])
			{
			case 0:firstField9_8->Image = whiteField; break;
			case 1:firstField9_8->Image = pointField; break;
			case 2:firstField9_8->Image = krossField; break;
			case 3:firstField9_8->Image = blackField; break;
			}
			switch (field1[9][9])
			{
			case 0:firstField9_9->Image = whiteField; break;
			case 1:firstField9_9->Image = pointField; break;
			case 2:firstField9_9->Image = krossField; break;
			case 3:firstField9_9->Image = blackField; break;
			}
		}
		void DrawField2()
		{
			labelShoots1->Text = "Пострiли: " + numOfShoots1;
			labelHits1->Text = "Влучнi пострiли: " + hitCount1;
			//0 - white field
			//1 - point field
			//2 - kross field
			//3 - black field
			switch (field2[0][0])
			{
			case 0:secondField0_0->Image = whiteField; break;
			case 1:secondField0_0->Image = pointField; break;
			case 2:secondField0_0->Image = krossField; break;
			case 3:secondField0_0->Image = blackField; break;
			}
			switch (field2[0][1])
			{
			case 0:secondField0_1->Image = whiteField; break;
			case 1:secondField0_1->Image = pointField; break;
			case 2:secondField0_1->Image = krossField; break;
			case 3:secondField0_1->Image = blackField; break;
			}
			switch (field2[0][2])
			{
			case 0:secondField0_2->Image = whiteField; break;
			case 1:secondField0_2->Image = pointField; break;
			case 2:secondField0_2->Image = krossField; break;
			case 3:secondField0_2->Image = blackField; break;
			}
			switch (field2[0][3])
			{
			case 0:secondField0_3->Image = whiteField; break;
			case 1:secondField0_3->Image = pointField; break;
			case 2:secondField0_3->Image = krossField; break;
			case 3:secondField0_3->Image = blackField; break;
			}
			switch (field2[0][4])
			{
			case 0:secondField0_4->Image = whiteField; break;
			case 1:secondField0_4->Image = pointField; break;
			case 2:secondField0_4->Image = krossField; break;
			case 3:secondField0_4->Image = blackField; break;
			}
			switch (field2[0][5])
			{
			case 0:secondField0_5->Image = whiteField; break;
			case 1:secondField0_5->Image = pointField; break;
			case 2:secondField0_5->Image = krossField; break;
			case 3:secondField0_5->Image = blackField; break;
			}
			switch (field2[0][6])
			{
			case 0:secondField0_6->Image = whiteField; break;
			case 1:secondField0_6->Image = pointField; break;
			case 2:secondField0_6->Image = krossField; break;
			case 3:secondField0_6->Image = blackField; break;
			}
			switch (field2[0][7])
			{
			case 0:secondField0_7->Image = whiteField; break;
			case 1:secondField0_7->Image = pointField; break;
			case 2:secondField0_7->Image = krossField; break;
			case 3:secondField0_7->Image = blackField; break;
			}
			switch (field2[0][8])
			{
			case 0:secondField0_8->Image = whiteField; break;
			case 1:secondField0_8->Image = pointField; break;
			case 2:secondField0_8->Image = krossField; break;
			case 3:secondField0_8->Image = blackField; break;
			}
			switch (field2[0][9])
			{
			case 0:secondField0_9->Image = whiteField; break;
			case 1:secondField0_9->Image = pointField; break;
			case 2:secondField0_9->Image = krossField; break;
			case 3:secondField0_9->Image = blackField; break;
			}
			switch (field2[1][0])
			{
			case 0:secondField1_0->Image = whiteField; break;
			case 1:secondField1_0->Image = pointField; break;
			case 2:secondField1_0->Image = krossField; break;
			case 3:secondField1_0->Image = blackField; break;
			}
			switch (field2[1][1])
			{
			case 0:secondField1_1->Image = whiteField; break;
			case 1:secondField1_1->Image = pointField; break;
			case 2:secondField1_1->Image = krossField; break;
			case 3:secondField1_1->Image = blackField; break;
			}
			switch (field2[1][2])
			{
			case 0:secondField1_2->Image = whiteField; break;
			case 1:secondField1_2->Image = pointField; break;
			case 2:secondField1_2->Image = krossField; break;
			case 3:secondField1_2->Image = blackField; break;
			}
			switch (field2[1][3])
			{
			case 0:secondField1_3->Image = whiteField; break;
			case 1:secondField1_3->Image = pointField; break;
			case 2:secondField1_3->Image = krossField; break;
			case 3:secondField1_3->Image = blackField; break;
			}
			switch (field2[1][4])
			{
			case 0:secondField1_4->Image = whiteField; break;
			case 1:secondField1_4->Image = pointField; break;
			case 2:secondField1_4->Image = krossField; break;
			case 3:secondField1_4->Image = blackField; break;
			}
			switch (field2[1][5])
			{
			case 0:secondField1_5->Image = whiteField; break;
			case 1:secondField1_5->Image = pointField; break;
			case 2:secondField1_5->Image = krossField; break;
			case 3:secondField1_5->Image = blackField; break;
			}
			switch (field2[1][6])
			{
			case 0:secondField1_6->Image = whiteField; break;
			case 1:secondField1_6->Image = pointField; break;
			case 2:secondField1_6->Image = krossField; break;
			case 3:secondField1_6->Image = blackField; break;
			}
			switch (field2[1][7])
			{
			case 0:secondField1_7->Image = whiteField; break;
			case 1:secondField1_7->Image = pointField; break;
			case 2:secondField1_7->Image = krossField; break;
			case 3:secondField1_7->Image = blackField; break;
			}
			switch (field2[1][8])
			{
			case 0:secondField1_8->Image = whiteField; break;
			case 1:secondField1_8->Image = pointField; break;
			case 2:secondField1_8->Image = krossField; break;
			case 3:secondField1_8->Image = blackField; break;
			}
			switch (field2[1][9])
			{
			case 0:secondField1_9->Image = whiteField; break;
			case 1:secondField1_9->Image = pointField; break;
			case 2:secondField1_9->Image = krossField; break;
			case 3:secondField1_9->Image = blackField; break;
			}
			switch (field2[2][0])
			{
			case 0:secondField2_0->Image = whiteField; break;
			case 1:secondField2_0->Image = pointField; break;
			case 2:secondField2_0->Image = krossField; break;
			case 3:secondField2_0->Image = blackField; break;
			}
			switch (field2[2][1])
			{
			case 0:secondField2_1->Image = whiteField; break;
			case 1:secondField2_1->Image = pointField; break;
			case 2:secondField2_1->Image = krossField; break;
			case 3:secondField2_1->Image = blackField; break;
			}
			switch (field2[2][2])
			{
			case 0:secondField2_2->Image = whiteField; break;
			case 1:secondField2_2->Image = pointField; break;
			case 2:secondField2_2->Image = krossField; break;
			case 3:secondField2_2->Image = blackField; break;
			}
			switch (field2[2][3])
			{
			case 0:secondField2_3->Image = whiteField; break;
			case 1:secondField2_3->Image = pointField; break;
			case 2:secondField2_3->Image = krossField; break;
			case 3:secondField2_3->Image = blackField; break;
			}
			switch (field2[2][4])
			{
			case 0:secondField2_4->Image = whiteField; break;
			case 1:secondField2_4->Image = pointField; break;
			case 2:secondField2_4->Image = krossField; break;
			case 3:secondField2_4->Image = blackField; break;
			}
			switch (field2[2][5])
			{
			case 0:secondField2_5->Image = whiteField; break;
			case 1:secondField2_5->Image = pointField; break;
			case 2:secondField2_5->Image = krossField; break;
			case 3:secondField2_5->Image = blackField; break;
			}
			switch (field2[2][6])
			{
			case 0:secondField2_6->Image = whiteField; break;
			case 1:secondField2_6->Image = pointField; break;
			case 2:secondField2_6->Image = krossField; break;
			case 3:secondField2_6->Image = blackField; break;
			}
			switch (field2[2][7])
			{
			case 0:secondField2_7->Image = whiteField; break;
			case 1:secondField2_7->Image = pointField; break;
			case 2:secondField2_7->Image = krossField; break;
			case 3:secondField2_7->Image = blackField; break;
			}
			switch (field2[2][8])
			{
			case 0:secondField2_8->Image = whiteField; break;
			case 1:secondField2_8->Image = pointField; break;
			case 2:secondField2_8->Image = krossField; break;
			case 3:secondField2_8->Image = blackField; break;
			}
			switch (field2[2][9])
			{
			case 0:secondField2_9->Image = whiteField; break;
			case 1:secondField2_9->Image = pointField; break;
			case 2:secondField2_9->Image = krossField; break;
			case 3:secondField2_9->Image = blackField; break;
			}
			switch (field2[3][0])
			{
			case 0:secondField3_0->Image = whiteField; break;
			case 1:secondField3_0->Image = pointField; break;
			case 2:secondField3_0->Image = krossField; break;
			case 3:secondField3_0->Image = blackField; break;
			}
			switch (field2[3][1])
			{
			case 0:secondField3_1->Image = whiteField; break;
			case 1:secondField3_1->Image = pointField; break;
			case 2:secondField3_1->Image = krossField; break;
			case 3:secondField3_1->Image = blackField; break;
			}
			switch (field2[3][2])
			{
			case 0:secondField3_2->Image = whiteField; break;
			case 1:secondField3_2->Image = pointField; break;
			case 2:secondField3_2->Image = krossField; break;
			case 3:secondField3_2->Image = blackField; break;
			}
			switch (field2[3][3])
			{
			case 0:secondField3_3->Image = whiteField; break;
			case 1:secondField3_3->Image = pointField; break;
			case 2:secondField3_3->Image = krossField; break;
			case 3:secondField3_3->Image = blackField; break;
			}
			switch (field2[3][4])
			{
			case 0:secondField3_4->Image = whiteField; break;
			case 1:secondField3_4->Image = pointField; break;
			case 2:secondField3_4->Image = krossField; break;
			case 3:secondField3_4->Image = blackField; break;
			}
			switch (field2[3][5])
			{
			case 0:secondField3_5->Image = whiteField; break;
			case 1:secondField3_5->Image = pointField; break;
			case 2:secondField3_5->Image = krossField; break;
			case 3:secondField3_5->Image = blackField; break;
			}
			switch (field2[3][6])
			{
			case 0:secondField3_6->Image = whiteField; break;
			case 1:secondField3_6->Image = pointField; break;
			case 2:secondField3_6->Image = krossField; break;
			case 3:secondField3_6->Image = blackField; break;
			}
			switch (field2[3][7])
			{
			case 0:secondField3_7->Image = whiteField; break;
			case 1:secondField3_7->Image = pointField; break;
			case 2:secondField3_7->Image = krossField; break;
			case 3:secondField3_7->Image = blackField; break;
			}
			switch (field2[3][8])
			{
			case 0:secondField3_8->Image = whiteField; break;
			case 1:secondField3_8->Image = pointField; break;
			case 2:secondField3_8->Image = krossField; break;
			case 3:secondField3_8->Image = blackField; break;
			}
			switch (field2[3][9])
			{
			case 0:secondField3_9->Image = whiteField; break;
			case 1:secondField3_9->Image = pointField; break;
			case 2:secondField3_9->Image = krossField; break;
			case 3:secondField3_9->Image = blackField; break;
			}
			switch (field2[4][0])
			{
			case 0:secondField4_0->Image = whiteField; break;
			case 1:secondField4_0->Image = pointField; break;
			case 2:secondField4_0->Image = krossField; break;
			case 3:secondField4_0->Image = blackField; break;
			}
			switch (field2[4][1])
			{
			case 0:secondField4_1->Image = whiteField; break;
			case 1:secondField4_1->Image = pointField; break;
			case 2:secondField4_1->Image = krossField; break;
			case 3:secondField4_1->Image = blackField; break;
			}
			switch (field2[4][2])
			{
			case 0:secondField4_2->Image = whiteField; break;
			case 1:secondField4_2->Image = pointField; break;
			case 2:secondField4_2->Image = krossField; break;
			case 3:secondField4_2->Image = blackField; break;
			}
			switch (field2[4][3])
			{
			case 0:secondField4_3->Image = whiteField; break;
			case 1:secondField4_3->Image = pointField; break;
			case 2:secondField4_3->Image = krossField; break;
			case 3:secondField4_3->Image = blackField; break;
			}
			switch (field2[4][4])
			{
			case 0:secondField4_4->Image = whiteField; break;
			case 1:secondField4_4->Image = pointField; break;
			case 2:secondField4_4->Image = krossField; break;
			case 3:secondField4_4->Image = blackField; break;
			}
			switch (field2[4][5])
			{
			case 0:secondField4_5->Image = whiteField; break;
			case 1:secondField4_5->Image = pointField; break;
			case 2:secondField4_5->Image = krossField; break;
			case 3:secondField4_5->Image = blackField; break;
			}
			switch (field2[4][6])
			{
			case 0:secondField4_6->Image = whiteField; break;
			case 1:secondField4_6->Image = pointField; break;
			case 2:secondField4_6->Image = krossField; break;
			case 3:secondField4_6->Image = blackField; break;
			}
			switch (field2[4][7])
			{
			case 0:secondField4_7->Image = whiteField; break;
			case 1:secondField4_7->Image = pointField; break;
			case 2:secondField4_7->Image = krossField; break;
			case 3:secondField4_7->Image = blackField; break;
			}
			switch (field2[4][8])
			{
			case 0:secondField4_8->Image = whiteField; break;
			case 1:secondField4_8->Image = pointField; break;
			case 2:secondField4_8->Image = krossField; break;
			case 3:secondField4_8->Image = blackField; break;
			}
			switch (field2[4][9])
			{
			case 0:secondField4_9->Image = whiteField; break;
			case 1:secondField4_9->Image = pointField; break;
			case 2:secondField4_9->Image = krossField; break;
			case 3:secondField4_9->Image = blackField; break;
			}
			switch (field2[5][0])
			{
			case 0:secondField5_0->Image = whiteField; break;
			case 1:secondField5_0->Image = pointField; break;
			case 2:secondField5_0->Image = krossField; break;
			case 3:secondField5_0->Image = blackField; break;
			}
			switch (field2[5][1])
			{
			case 0:secondField5_1->Image = whiteField; break;
			case 1:secondField5_1->Image = pointField; break;
			case 2:secondField5_1->Image = krossField; break;
			case 3:secondField5_1->Image = blackField; break;
			}
			switch (field2[5][2])
			{
			case 0:secondField5_2->Image = whiteField; break;
			case 1:secondField5_2->Image = pointField; break;
			case 2:secondField5_2->Image = krossField; break;
			case 3:secondField5_2->Image = blackField; break;
			}
			switch (field2[5][3])
			{
			case 0:secondField5_3->Image = whiteField; break;
			case 1:secondField5_3->Image = pointField; break;
			case 2:secondField5_3->Image = krossField; break;
			case 3:secondField5_3->Image = blackField; break;
			}
			switch (field2[5][4])
			{
			case 0:secondField5_4->Image = whiteField; break;
			case 1:secondField5_4->Image = pointField; break;
			case 2:secondField5_4->Image = krossField; break;
			case 3:secondField5_4->Image = blackField; break;
			}
			switch (field2[5][5])
			{
			case 0:secondField5_5->Image = whiteField; break;
			case 1:secondField5_5->Image = pointField; break;
			case 2:secondField5_5->Image = krossField; break;
			case 3:secondField5_5->Image = blackField; break;
			}
			switch (field2[5][6])
			{
			case 0:secondField5_6->Image = whiteField; break;
			case 1:secondField5_6->Image = pointField; break;
			case 2:secondField5_6->Image = krossField; break;
			case 3:secondField5_6->Image = blackField; break;
			}
			switch (field2[5][7])
			{
			case 0:secondField5_7->Image = whiteField; break;
			case 1:secondField5_7->Image = pointField; break;
			case 2:secondField5_7->Image = krossField; break;
			case 3:secondField5_7->Image = blackField; break;
			}
			switch (field2[5][8])
			{
			case 0:secondField5_8->Image = whiteField; break;
			case 1:secondField5_8->Image = pointField; break;
			case 2:secondField5_8->Image = krossField; break;
			case 3:secondField5_8->Image = blackField; break;
			}
			switch (field2[5][9])
			{
			case 0:secondField5_9->Image = whiteField; break;
			case 1:secondField5_9->Image = pointField; break;
			case 2:secondField5_9->Image = krossField; break;
			case 3:secondField5_9->Image = blackField; break;
			}
			switch (field2[6][0])
			{
			case 0:secondField6_0->Image = whiteField; break;
			case 1:secondField6_0->Image = pointField; break;
			case 2:secondField6_0->Image = krossField; break;
			case 3:secondField6_0->Image = blackField; break;
			}
			switch (field2[6][1])
			{
			case 0:secondField6_1->Image = whiteField; break;
			case 1:secondField6_1->Image = pointField; break;
			case 2:secondField6_1->Image = krossField; break;
			case 3:secondField6_1->Image = blackField; break;
			}
			switch (field2[6][2])
			{
			case 0:secondField6_2->Image = whiteField; break;
			case 1:secondField6_2->Image = pointField; break;
			case 2:secondField6_2->Image = krossField; break;
			case 3:secondField6_2->Image = blackField; break;
			}
			switch (field2[6][3])
			{
			case 0:secondField6_3->Image = whiteField; break;
			case 1:secondField6_3->Image = pointField; break;
			case 2:secondField6_3->Image = krossField; break;
			case 3:secondField6_3->Image = blackField; break;
			}
			switch (field2[6][4])
			{
			case 0:secondField6_4->Image = whiteField; break;
			case 1:secondField6_4->Image = pointField; break;
			case 2:secondField6_4->Image = krossField; break;
			case 3:secondField6_4->Image = blackField; break;
			}
			switch (field2[6][5])
			{
			case 0:secondField6_5->Image = whiteField; break;
			case 1:secondField6_5->Image = pointField; break;
			case 2:secondField6_5->Image = krossField; break;
			case 3:secondField6_5->Image = blackField; break;
			}
			switch (field2[6][6])
			{
			case 0:secondField6_6->Image = whiteField; break;
			case 1:secondField6_6->Image = pointField; break;
			case 2:secondField6_6->Image = krossField; break;
			case 3:secondField6_6->Image = blackField; break;
			}
			switch (field2[6][7])
			{
			case 0:secondField6_7->Image = whiteField; break;
			case 1:secondField6_7->Image = pointField; break;
			case 2:secondField6_7->Image = krossField; break;
			case 3:secondField6_7->Image = blackField; break;
			}
			switch (field2[6][8])
			{
			case 0:secondField6_8->Image = whiteField; break;
			case 1:secondField6_8->Image = pointField; break;
			case 2:secondField6_8->Image = krossField; break;
			case 3:secondField6_8->Image = blackField; break;
			}
			switch (field2[6][9])
			{
			case 0:secondField6_9->Image = whiteField; break;
			case 1:secondField6_9->Image = pointField; break;
			case 2:secondField6_9->Image = krossField; break;
			case 3:secondField6_9->Image = blackField; break;
			}
			switch (field2[7][0])
			{
			case 0:secondField7_0->Image = whiteField; break;
			case 1:secondField7_0->Image = pointField; break;
			case 2:secondField7_0->Image = krossField; break;
			case 3:secondField7_0->Image = blackField; break;
			}
			switch (field2[7][1])
			{
			case 0:secondField7_1->Image = whiteField; break;
			case 1:secondField7_1->Image = pointField; break;
			case 2:secondField7_1->Image = krossField; break;
			case 3:secondField7_1->Image = blackField; break;
			}
			switch (field2[7][2])
			{
			case 0:secondField7_2->Image = whiteField; break;
			case 1:secondField7_2->Image = pointField; break;
			case 2:secondField7_2->Image = krossField; break;
			case 3:secondField7_2->Image = blackField; break;
			}
			switch (field2[7][3])
			{
			case 0:secondField7_3->Image = whiteField; break;
			case 1:secondField7_3->Image = pointField; break;
			case 2:secondField7_3->Image = krossField; break;
			case 3:secondField7_3->Image = blackField; break;
			}
			switch (field2[7][4])
			{
			case 0:secondField7_4->Image = whiteField; break;
			case 1:secondField7_4->Image = pointField; break;
			case 2:secondField7_4->Image = krossField; break;
			case 3:secondField7_4->Image = blackField; break;
			}
			switch (field2[7][5])
			{
			case 0:secondField7_5->Image = whiteField; break;
			case 1:secondField7_5->Image = pointField; break;
			case 2:secondField7_5->Image = krossField; break;
			case 3:secondField7_5->Image = blackField; break;
			}
			switch (field2[7][6])
			{
			case 0:secondField7_6->Image = whiteField; break;
			case 1:secondField7_6->Image = pointField; break;
			case 2:secondField7_6->Image = krossField; break;
			case 3:secondField7_6->Image = blackField; break;
			}
			switch (field2[7][7])
			{
			case 0:secondField7_7->Image = whiteField; break;
			case 1:secondField7_7->Image = pointField; break;
			case 2:secondField7_7->Image = krossField; break;
			case 3:secondField7_7->Image = blackField; break;
			}
			switch (field2[7][8])
			{
			case 0:secondField7_8->Image = whiteField; break;
			case 1:secondField7_8->Image = pointField; break;
			case 2:secondField7_8->Image = krossField; break;
			case 3:secondField7_8->Image = blackField; break;
			}
			switch (field2[7][9])
			{
			case 0:secondField7_9->Image = whiteField; break;
			case 1:secondField7_9->Image = pointField; break;
			case 2:secondField7_9->Image = krossField; break;
			case 3:secondField7_9->Image = blackField; break;
			}
			switch (field2[8][0])
			{
			case 0:secondField8_0->Image = whiteField; break;
			case 1:secondField8_0->Image = pointField; break;
			case 2:secondField8_0->Image = krossField; break;
			case 3:secondField8_0->Image = blackField; break;
			}
			switch (field2[8][1])
			{
			case 0:secondField8_1->Image = whiteField; break;
			case 1:secondField8_1->Image = pointField; break;
			case 2:secondField8_1->Image = krossField; break;
			case 3:secondField8_1->Image = blackField; break;
			}
			switch (field2[8][2])
			{
			case 0:secondField8_2->Image = whiteField; break;
			case 1:secondField8_2->Image = pointField; break;
			case 2:secondField8_2->Image = krossField; break;
			case 3:secondField8_2->Image = blackField; break;
			}
			switch (field2[8][3])
			{
			case 0:secondField8_3->Image = whiteField; break;
			case 1:secondField8_3->Image = pointField; break;
			case 2:secondField8_3->Image = krossField; break;
			case 3:secondField8_3->Image = blackField; break;
			}
			switch (field2[8][4])
			{
			case 0:secondField8_4->Image = whiteField; break;
			case 1:secondField8_4->Image = pointField; break;
			case 2:secondField8_4->Image = krossField; break;
			case 3:secondField8_4->Image = blackField; break;
			}
			switch (field2[8][5])
			{
			case 0:secondField8_5->Image = whiteField; break;
			case 1:secondField8_5->Image = pointField; break;
			case 2:secondField8_5->Image = krossField; break;
			case 3:secondField8_5->Image = blackField; break;
			}
			switch (field2[8][6])
			{
			case 0:secondField8_6->Image = whiteField; break;
			case 1:secondField8_6->Image = pointField; break;
			case 2:secondField8_6->Image = krossField; break;
			case 3:secondField8_6->Image = blackField; break;
			}
			switch (field2[8][7])
			{
			case 0:secondField8_7->Image = whiteField; break;
			case 1:secondField8_7->Image = pointField; break;
			case 2:secondField8_7->Image = krossField; break;
			case 3:secondField8_7->Image = blackField; break;
			}
			switch (field2[8][8])
			{
			case 0:secondField8_8->Image = whiteField; break;
			case 1:secondField8_8->Image = pointField; break;
			case 2:secondField8_8->Image = krossField; break;
			case 3:secondField8_8->Image = blackField; break;
			}
			switch (field2[8][9])
			{
			case 0:secondField8_9->Image = whiteField; break;
			case 1:secondField8_9->Image = pointField; break;
			case 2:secondField8_9->Image = krossField; break;
			case 3:secondField8_9->Image = blackField; break;
			}
			switch (field2[9][0])
			{
			case 0:secondField9_0->Image = whiteField; break;
			case 1:secondField9_0->Image = pointField; break;
			case 2:secondField9_0->Image = krossField; break;
			case 3:secondField9_0->Image = blackField; break;
			}
			switch (field2[9][1])
			{
			case 0:secondField9_1->Image = whiteField; break;
			case 1:secondField9_1->Image = pointField; break;
			case 2:secondField9_1->Image = krossField; break;
			case 3:secondField9_1->Image = blackField; break;
			}
			switch (field2[9][2])
			{
			case 0:secondField9_2->Image = whiteField; break;
			case 1:secondField9_2->Image = pointField; break;
			case 2:secondField9_2->Image = krossField; break;
			case 3:secondField9_2->Image = blackField; break;
			}
			switch (field2[9][3])
			{
			case 0:secondField9_3->Image = whiteField; break;
			case 1:secondField9_3->Image = pointField; break;
			case 2:secondField9_3->Image = krossField; break;
			case 3:secondField9_3->Image = blackField; break;
			}
			switch (field2[9][4])
			{
			case 0:secondField9_4->Image = whiteField; break;
			case 1:secondField9_4->Image = pointField; break;
			case 2:secondField9_4->Image = krossField; break;
			case 3:secondField9_4->Image = blackField; break;
			}
			switch (field2[9][5])
			{
			case 0:secondField9_5->Image = whiteField; break;
			case 1:secondField9_5->Image = pointField; break;
			case 2:secondField9_5->Image = krossField; break;
			case 3:secondField9_5->Image = blackField; break;
			}
			switch (field2[9][6])
			{
			case 0:secondField9_6->Image = whiteField; break;
			case 1:secondField9_6->Image = pointField; break;
			case 2:secondField9_6->Image = krossField; break;
			case 3:secondField9_6->Image = blackField; break;
			}
			switch (field2[9][7])
			{
			case 0:secondField9_7->Image = whiteField; break;
			case 1:secondField9_7->Image = pointField; break;
			case 2:secondField9_7->Image = krossField; break;
			case 3:secondField9_7->Image = blackField; break;
			}
			switch (field2[9][8])
			{
			case 0:secondField9_8->Image = whiteField; break;
			case 1:secondField9_8->Image = pointField; break;
			case 2:secondField9_8->Image = krossField; break;
			case 3:secondField9_8->Image = blackField; break;
			}
			switch (field2[9][9])
			{
			case 0:secondField9_9->Image = whiteField; break;
			case 1:secondField9_9->Image = pointField; break;
			case 2:secondField9_9->Image = krossField; break;
			case 3:secondField9_9->Image = blackField; break;
			}
		}

		//Функція обробки пострілу
		//приймає номер поля та координати пострілу
		void shotProcessing(short field_number, short x, short y)
		{
			//0 - white field
			//1 - point field
			//2 - kross field
			//3 - black field
			if (field_number == 1)
			{
				if (whoseMove&&field1[x][y] == 0)
				{
					++numOfShoots2;
					if (shipsPos1[x][y])
					{
						field1[x][y] = 2;
						++hitCount2;
						if (IsCompletelyDestroyed(shipsPos1, field1, x, y))
						{
							paintCompletelyDestroyed(shipsPos1, field1, x, y);
						}
						if (hitCount2 == 20)
						{
							labelWinner->Text = "Перемiг: " + player2Name;
							completionMenu->Visible = true;
							mainMenu->Visible = true;
						}
					}
					else
					{
						field1[x][y] = 1;
						whoseMove = false;
						labelWhoresMove->Text = "Ходить: " + player1Name;
					}
					DrawField1();
				}
			}
			else
			{
				if (!whoseMove&&field2[x][y] == 0)
				{
					++numOfShoots1;
					if (shipsPos2[x][y])
					{
						field2[x][y] = 2;
						++hitCount1;
						if (IsCompletelyDestroyed(shipsPos2, field2, x, y))
						{
							paintCompletelyDestroyed(shipsPos2, field2, x, y);
						}
						if (hitCount1 == 20)
						{
							labelWinner->Text = "Перемiг: " + player1Name;
							completionMenu->Visible = true;
							mainMenu->Visible = true;
						}
					}
					else
					{
						field2[x][y] = 1;
						whoseMove = true;
						labelWhoresMove->Text = "Ходить: " + player2Name;
					}
					DrawField2();
				}
			}
		}

		//Функція перевірки на знищення корабля повнітю
		//приймає масив позицій кораблів, масив інформації полів та координати пострілу
		//повертає: true - корабель знищенно повністю; false - корабель не повністю знищений
		bool IsCompletelyDestroyed(bool shipsPos[][FIELD_SIZE], int field[][FIELD_SIZE], short x, short y)
		{
			for (int i = 1; y + i < FIELD_SIZE && shipsPos[x][y + i]; ++i)
			{
				if (field[x][y + i] == 0)
					return false;
			}
			for (int i = 1; y - i >= 0 && shipsPos[x][y - i]; ++i)
			{
				if (field[x][y - i] == 0)
					return false;
			}
			for (int i = 1; x + i < FIELD_SIZE && shipsPos[x + i][y]; ++i)
			{
				if (field[x + i][y] == 0)
					return false;
			}
			for (int i = 1; x - i >= 0 && shipsPos[x - i][y]; ++i)
			{
				if (field[x - i][y] == 0)
					return false;
			}
			return true;
		}
		
		//Функція заміни хрестиків на чорні квадрати
		//приймає масив позицій кораблів, масив інформації полів та координати пострілу
		void paintCompletelyDestroyed(bool shipsPos[][FIELD_SIZE], int field[][FIELD_SIZE], int x, int y)
		{
			//0 - white field
			//1 - point field
			//2 - kross field
			//3 - black field
			field[x][y] = 3;
			//field[x + 1][y] = field[x - 1][y] = field[x][y + 1] = field[x][y - 1] = field[x + 1][y + 1] = field[x - 1][y - 1] = field[x + 1][y - 1] = field[x - 1][y + 1] = 1;
			for (int i = 1; y + i < FIELD_SIZE && shipsPos[x][y + i]; ++i)
			{
				field[x][y + i] = 3;
			}
			for (int i = 1; y - i >= 0 && shipsPos[x][y - i]; ++i)
			{
				field[x][y - i] = 3;
			}
			for (int i = 1; x + i < FIELD_SIZE && shipsPos[x + i][y]; ++i)
			{
				field[x + i][y] = 3;
			}
			for (int i = 1; x - i >= 0 && shipsPos[x - i][y]; ++i)
			{
				field[x - i][y] = 3;
			}
		}
private: System::Void startGame_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player1TextBox->Text == "" || player2TextBox->Text == "")
	{
		MessageBox::Show("Введiть iмена гравцiв!");
	}
	else
	{
		player1Name = player1TextBox->Text;
		player2Name = player2TextBox->Text;
		if (player1Name == player2Name)
		{
			player1Name += "1";
			player2Name += "2";
		}
		startingGame();
		mainMenu->Visible = false;
	}
}
private: System::Void buttonToMainMenu_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("Ви дійсно хочете завершити цю ігрову сесію та повернутися у головне меню?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		zeroing();
		mainMenu->Visible = true;
	}
}
private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
}
private: System::Void buttonToMainMenu2_Click(System::Object^  sender, System::EventArgs^  e) {
	zeroing();
	completionMenu->Visible = false;
}
private: System::Void buttonNewGame_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^tempName1 = player1Name;
	String ^tempName2 = player2Name;
	zeroing();
	player1Name = tempName1;
	player2Name = tempName2;
	startingGame();
	mainMenu->Visible = false;
	completionMenu->Visible = false;
}
#pragma region Field Click Handlers
private: System::Void firstField0_0_Click(System::Object^  sender, System::EventArgs^  e) {
	shotProcessing(1,0,0);
}
		 System::Void firstField0_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 0, 1);
		 }
		 System::Void firstField0_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 0, 2);
		 }
		 System::Void firstField0_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 0, 3);
		 }
		 System::Void firstField0_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 0, 4);
		 }
		 System::Void firstField0_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 0, 5);
		 }
		 System::Void firstField0_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 0, 6);
		 }
		 System::Void firstField0_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 0, 7);
		 }
		 System::Void firstField0_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 0, 8);
		 }
		 System::Void firstField0_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 0, 9);
		 }

		 System::Void firstField1_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 1, 0);
		 }
		 System::Void firstField1_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 1, 1);
		 }
		 System::Void firstField1_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 1, 2);
		 }
		 System::Void firstField1_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 1, 3);
		 }
		 System::Void firstField1_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 1, 4);
		 }
		 System::Void firstField1_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 1, 5);
		 }
		 System::Void firstField1_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 1, 6);
		 }
		 System::Void firstField1_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 1, 7);
		 }
		 System::Void firstField1_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 1, 8);
		 }
		 System::Void firstField1_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 1, 9);
		 }

		 System::Void firstField2_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 2, 0);
		 }
		 System::Void firstField2_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 2, 1);
		 }
		 System::Void firstField2_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 2, 2);
		 }
		 System::Void firstField2_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 2, 3);
		 }
		 System::Void firstField2_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 2, 4);
		 }
		 System::Void firstField2_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 2, 5);
		 }
		 System::Void firstField2_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 2, 6);
		 }
		 System::Void firstField2_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 2, 7);
		 }
		 System::Void firstField2_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 2, 8);
		 }
		 System::Void firstField2_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 2, 9);
		 }

		 System::Void firstField3_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 3, 0);
		 }
		 System::Void firstField3_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 3, 1);
		 }
		 System::Void firstField3_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 3, 2);
		 }
		 System::Void firstField3_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 3, 3);
		 }
		 System::Void firstField3_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 3, 4);
		 }
		 System::Void firstField3_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 3, 5);
		 }
		 System::Void firstField3_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 3, 6);
		 }
		 System::Void firstField3_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 3, 7);
		 }
		 System::Void firstField3_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 3, 8);
		 }
		 System::Void firstField3_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 3, 9);
		 }

		 System::Void firstField4_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 4, 0);
		 }
		 System::Void firstField4_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 4, 1);
		 }
		 System::Void firstField4_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 4, 2);
		 }
		 System::Void firstField4_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 4, 3);
		 }
		 System::Void firstField4_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 4, 4);
		 }
		 System::Void firstField4_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 4, 5);
		 }
		 System::Void firstField4_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 4, 6);
		 }
		 System::Void firstField4_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 4, 7);
		 }
		 System::Void firstField4_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 4, 8);
		 }
		 System::Void firstField4_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 4, 9);
		 }

		 System::Void firstField5_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 5, 0);
		 }
		 System::Void firstField5_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 5, 1);
		 }
		 System::Void firstField5_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 5, 2);
		 }
		 System::Void firstField5_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 5, 3);
		 }
		 System::Void firstField5_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 5, 4);
		 }
		 System::Void firstField5_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 5, 5);
		 }
		 System::Void firstField5_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 5, 6);
		 }
		 System::Void firstField5_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 5, 7);
		 }
		 System::Void firstField5_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 5, 8);
		 }
		 System::Void firstField5_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 5, 9);
		 }

		 System::Void firstField6_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 6, 0);
		 }
		 System::Void firstField6_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 6, 1);
		 }
		 System::Void firstField6_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 6, 2);
		 }
		 System::Void firstField6_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 6, 3);
		 }
		 System::Void firstField6_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 6, 4);
		 }
		 System::Void firstField6_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 6, 5);
		 }
		 System::Void firstField6_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 6, 6);
		 }
		 System::Void firstField6_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 6, 7);
		 }
		 System::Void firstField6_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 6, 8);
		 }
		 System::Void firstField6_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 6, 9);
		 }

		 System::Void firstField7_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 7, 0);
		 }
		 System::Void firstField7_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 7, 1);
		 }
		 System::Void firstField7_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 7, 2);
		 }
		 System::Void firstField7_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 7, 3);
		 }
		 System::Void firstField7_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 7, 4);
		 }
		 System::Void firstField7_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 7, 5);
		 }
		 System::Void firstField7_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 7, 6);
		 }
		 System::Void firstField7_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 7, 7);
		 }
		 System::Void firstField7_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 7, 8);
		 }
		 System::Void firstField7_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 7, 9);
		 }

		 System::Void firstField8_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 8, 0);
		 }
		 System::Void firstField8_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 8, 1);
		 }
		 System::Void firstField8_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 8, 2);
		 }
		 System::Void firstField8_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 8, 3);
		 }
		 System::Void firstField8_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 8, 4);
		 }
		 System::Void firstField8_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 8, 5);
		 }
		 System::Void firstField8_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 8, 6);
		 }
		 System::Void firstField8_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 8, 7);
		 }
		 System::Void firstField8_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 8, 8);
		 }
		 System::Void firstField8_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 8, 9);
		 }

		 System::Void firstField9_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 9, 0);
		 }
		 System::Void firstField9_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 9, 1);
		 }
		 System::Void firstField9_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 9, 2);
		 }
		 System::Void firstField9_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 9, 3);
		 }
		 System::Void firstField9_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 9, 4);
		 }
		 System::Void firstField9_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 9, 5);
		 }
		 System::Void firstField9_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 9, 6);
		 }
		 System::Void firstField9_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 9, 7);
		 }
		 System::Void firstField9_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 9, 8);
		 }
		 System::Void firstField9_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(1, 9, 9);
		 }


		 System::Void secondField0_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 0, 0);
		 }
		 System::Void secondField0_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 0, 1);
		 }
		 System::Void secondField0_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 0, 2);
		 }
		 System::Void secondField0_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 0, 3);
		 }
		 System::Void secondField0_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 0, 4);
		 }
		 System::Void secondField0_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 0, 5);
		 }
		 System::Void secondField0_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 0, 6);
		 }
		 System::Void secondField0_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 0, 7);
		 }
		 System::Void secondField0_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 0, 8);
		 }
		 System::Void secondField0_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 0, 9);
		 }

		 System::Void secondField1_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 1, 0);
		 }
		 System::Void secondField1_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 1, 1);
		 }
		 System::Void secondField1_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 1, 2);
		 }
		 System::Void secondField1_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 1, 3);
		 }
		 System::Void secondField1_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 1, 4);
		 }
		 System::Void secondField1_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 1, 5);
		 }
		 System::Void secondField1_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 1, 6);
		 }
		 System::Void secondField1_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 1, 7);
		 }
		 System::Void secondField1_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 1, 8);
		 }
		 System::Void secondField1_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 1, 9);
		 }

		 System::Void secondField2_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 2, 0);
		 }
		 System::Void secondField2_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 2, 1);
		 }
		 System::Void secondField2_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 2, 2);
		 }
		 System::Void secondField2_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 2, 3);
		 }
		 System::Void secondField2_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 2, 4);
		 }
		 System::Void secondField2_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 2, 5);
		 }
		 System::Void secondField2_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 2, 6);
		 }
		 System::Void secondField2_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 2, 7);
		 }
		 System::Void secondField2_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 2, 8);
		 }
		 System::Void secondField2_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 2, 9);
		 }

		 System::Void secondField3_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 3, 0);
		 }
		 System::Void secondField3_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 3, 1);
		 }
		 System::Void secondField3_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 3, 2);
		 }
		 System::Void secondField3_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 3, 3);
		 }
		 System::Void secondField3_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 3, 4);
		 }
		 System::Void secondField3_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 3, 5);
		 }
		 System::Void secondField3_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 3, 6);
		 }
		 System::Void secondField3_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 3, 7);
		 }
		 System::Void secondField3_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 3, 8);
		 }
		 System::Void secondField3_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 3, 9);
		 }

		 System::Void secondField4_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 4, 0);
		 }
		 System::Void secondField4_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 4, 1);
		 }
		 System::Void secondField4_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 4, 2);
		 }
		 System::Void secondField4_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 4, 3);
		 }
		 System::Void secondField4_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 4, 4);
		 }
		 System::Void secondField4_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 4, 5);
		 }
		 System::Void secondField4_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 4, 6);
		 }
		 System::Void secondField4_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 4, 7);
		 }
		 System::Void secondField4_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 4, 8);
		 }
		 System::Void secondField4_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 4, 9);
		 }

		 System::Void secondField5_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 5, 0);
		 }
		 System::Void secondField5_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 5, 1);
		 }
		 System::Void secondField5_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 5, 2);
		 }
		 System::Void secondField5_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 5, 3);
		 }
		 System::Void secondField5_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 5, 4);
		 }
		 System::Void secondField5_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 5, 5);
		 }
		 System::Void secondField5_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 5, 6);
		 }
		 System::Void secondField5_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 5, 7);
		 }
		 System::Void secondField5_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 5, 8);
		 }
		 System::Void secondField5_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 5, 9);
		 }

		 System::Void secondField6_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 6, 0);
		 }
		 System::Void secondField6_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 6, 1);
		 }
		 System::Void secondField6_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 6, 2);
		 }
		 System::Void secondField6_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 6, 3);
		 }
		 System::Void secondField6_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 6, 4);
		 }
		 System::Void secondField6_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 6, 5);
		 }
		 System::Void secondField6_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 6, 6);
		 }
		 System::Void secondField6_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 6, 7);
		 }
		 System::Void secondField6_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 6, 8);
		 }
		 System::Void secondField6_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 6, 9);
		 }

		 System::Void secondField7_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 7, 0);
		 }
		 System::Void secondField7_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 7, 1);
		 }
		 System::Void secondField7_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 7, 2);
		 }
		 System::Void secondField7_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 7, 3);
		 }
		 System::Void secondField7_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 7, 4);
		 }
		 System::Void secondField7_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 7, 5);
		 }
		 System::Void secondField7_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 7, 6);
		 }
		 System::Void secondField7_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 7, 7);
		 }
		 System::Void secondField7_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 7, 8);
		 }
		 System::Void secondField7_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 7, 9);
		 }

		 System::Void secondField8_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 8, 0);
		 }
		 System::Void secondField8_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 8, 1);
		 }
		 System::Void secondField8_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 8, 2);
		 }
		 System::Void secondField8_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 8, 3);
		 }
		 System::Void secondField8_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 8, 4);
		 }
		 System::Void secondField8_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 8, 5);
		 }
		 System::Void secondField8_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 8, 6);
		 }
		 System::Void secondField8_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 8, 7);
		 }
		 System::Void secondField8_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 8, 8);
		 }
		 System::Void secondField8_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 8, 9);
		 }

		 System::Void secondField9_0_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 9, 0);
		 }
		 System::Void secondField9_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 9, 1);
		 }
		 System::Void secondField9_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 9, 2);
		 }
		 System::Void secondField9_3_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 9, 3);
		 }
		 System::Void secondField9_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 9, 4);
		 }
		 System::Void secondField9_5_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 9, 5);
		 }
		 System::Void secondField9_6_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 9, 6);
		 }
		 System::Void secondField9_7_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 9, 7);
		 }
		 System::Void secondField9_8_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 9, 8);
		 }
		 System::Void secondField9_9_Click(System::Object^  sender, System::EventArgs^  e) {
			 shotProcessing(2, 9, 9);
		 }
#pragma endregion
};
}
