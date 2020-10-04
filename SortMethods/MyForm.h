#include <chrono>
#include <random>
#include <functional>
#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ acc;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

	private: System::Windows::Forms::Label^ header;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;

	private:

	private: System::Windows::Forms::Label^ timesh1;
	private: System::Windows::Forms::Label^ timesh2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ diff;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ valgen;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ resetb;

	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->acc = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->header = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timesh1 = (gcnew System::Windows::Forms::Label());
			this->timesh2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->diff = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->valgen = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->resetb = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// acc
			// 
			this->acc->Enabled = false;
			this->acc->Location = System::Drawing::Point(264, 33);
			this->acc->Name = L"acc";
			this->acc->Size = System::Drawing::Size(75, 20);
			this->acc->TabIndex = 0;
			this->acc->Text = L"�������";
			this->acc->UseVisualStyleBackColor = true;
			this->acc->Click += gcnew System::EventHandler(this, &MyForm::acc_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(214, 33);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(44, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Tag = L"";
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// header
			// 
			this->header->AutoSize = true;
			this->header->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->header->Location = System::Drawing::Point(9, 33);
			this->header->Name = L"header";
			this->header->Size = System::Drawing::Size(201, 18);
			this->header->TabIndex = 3;
			this->header->Text = L"������� ���������� �����:";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(152, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 43);
			this->button1->TabIndex = 4;
			this->button1->Text = L"�����������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"�� �����: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(105, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"��������������� ������: ";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"������", L"�������������", L"�������", L"�����",
					L"�������", L"�������", L"����� �����"
			});
			this->comboBox1->Location = System::Drawing::Point(214, 5);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(125, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(9, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 18);
			this->label3->TabIndex = 8;
			this->label3->Text = L"�������� ��� ����������:";
			// 
			// timesh1
			// 
			this->timesh1->AutoSize = true;
			this->timesh1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timesh1->Location = System::Drawing::Point(12, 321);
			this->timesh1->Name = L"timesh1";
			this->timesh1->Size = System::Drawing::Size(129, 15);
			this->timesh1->TabIndex = 9;
			this->timesh1->Text = L"������� ���������: ";
			// 
			// timesh2
			// 
			this->timesh2->AutoSize = true;
			this->timesh2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timesh2->Location = System::Drawing::Point(12, 345);
			this->timesh2->Name = L"timesh2";
			this->timesh2->Size = System::Drawing::Size(83, 15);
			this->timesh2->TabIndex = 10;
			this->timesh2->Text = L"0 ����������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(168, 324);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 15);
			this->label4->TabIndex = 11;
			this->label4->Text = L"���������:";
			// 
			// diff
			// 
			this->diff->AutoSize = true;
			this->diff->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->diff->Location = System::Drawing::Point(168, 348);
			this->diff->Name = L"diff";
			this->diff->Size = System::Drawing::Size(14, 15);
			this->diff->TabIndex = 12;
			this->diff->Text = L"0";
			this->diff->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 648);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// valgen
			// 
			this->valgen->Enabled = false;
			this->valgen->Location = System::Drawing::Point(15, 238);
			this->valgen->Name = L"valgen";
			this->valgen->Size = System::Drawing::Size(106, 43);
			this->valgen->TabIndex = 14;
			this->valgen->Text = L"������������� ��������";
			this->valgen->UseVisualStyleBackColor = true;
			this->valgen->Click += gcnew System::EventHandler(this, &MyForm::valgen_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(514, -2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(269, 682);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			// 
			// resetb
			// 
			this->resetb->Enabled = false;
			this->resetb->Location = System::Drawing::Point(290, 238);
			this->resetb->Name = L"resetb";
			this->resetb->Size = System::Drawing::Size(106, 43);
			this->resetb->TabIndex = 16;
			this->resetb->Text = L"�������� ��������";
			this->resetb->UseVisualStyleBackColor = true;
			this->resetb->Click += gcnew System::EventHandler(this, &MyForm::resetb_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 683);
			this->Controls->Add(this->resetb);
			this->Controls->Add(this->valgen);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->diff);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->timesh2);
			this->Controls->Add(this->timesh1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->header);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->acc);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"����������";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		NumericUpDown^ num; // ���������� ��� �������� ��������

		int placeX;			// ���������� ��� ���������������� ��������� NumericUpDown
		int placeY;

		int size;			// ����������, �������� ������ � ������� �������

		cli::array <int>^ darr;		// �������, darr - �����������, sort - �����������
		cli::array <int>^ sort;

	private: System::Void acc_Click(System::Object^ sender, System::EventArgs^ e) {
		size = System::Convert::ToInt32(numericUpDown1->Value);
		button1->Enabled = true;
		valgen->Enabled = true;
		resetb->Enabled = true;
		for (int i = 0; i < size; i++) {
			num = gcnew NumericUpDown();
			placeX++;
			num->Name = "numBox_" + i;
			num->Width = 47;
			num->Height = 20;
			num->Maximum = 9999;
			num->Minimum = -9999;
			num->Location = Point((i % 10 == 0 ? placeX = 1 : placeX) * 50 - 37, (i % 10 == 0 ? placeY += 28 : placeY));
			num->Enabled = true;
			this->Controls->Add(num);
		}
		darr = gcnew cli::array<int>(size);
		for (int i = 0; i < size; i++) {
			darr[i] = 0;
		}
		acc->Visible = false;
		numericUpDown1->Visible = false;
		header->Text = "������� �������� �������:";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		placeX = 0;
		placeY = 33;
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((System::Convert::ToInt32(numericUpDown1->Value)) > 0)
			acc->Enabled = true;
		else
			acc->Enabled = false;
	}

private: System::Void valgen_Click(System::Object^ sender, System::EventArgs^ e) {
	mt19937 gen{ std::random_device()() };
	uniform_int_distribution<int> uid(-9999, 9999);
	auto roll = std::bind(uid, gen);
	for (int i = 0; i < size; i++) {
		NumericUpDown^ nm = (NumericUpDown^ )this->Controls["numBox_" + Convert::ToString(i)];
		nm->Value = roll();
	}
}

private: System::Void resetb_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < size; i++) {
		NumericUpDown^ nm = (NumericUpDown^)this->Controls["numBox_" + Convert::ToString(i)];
		nm->Value = 0;
	}
}

// ���������� ���������
void bubbleSort(cli::array <int>^ forsort, int sortsize) {
	for (int i = 0; i < sortsize - 1; i++) {
		for (int j = 0; j < sortsize - i - 1; j++) {
			if (forsort[j] > forsort[j + 1]) {
				forsort[j] += forsort[j + 1];
				forsort[j + 1] = forsort[j] - sort[j + 1];
				forsort[j] -= forsort[j + 1];
			}
		}
	}
}

//������������� ����������
void siftDown(cli::array <int>^ forsort, int root, int bottom) {
	int maxChild; // ������ ������������� �������
	int done = 0; // ���� ����, ��� ���� ������������
	// ���� �� ����� �� ���������� ����
	while ((root * 2 <= bottom) && (!done)){
		if (root * 2 == bottom)    // ���� �� � ��������� ����,
			maxChild = root * 2;    // ���������� ����� �������
		// ����� ���������� ������� ������� �� ����
		else if (forsort[root * 2] > forsort[root * 2 + 1])
			maxChild = root * 2;
		else
			maxChild = root * 2 + 1;
		// ���� ������� ������� ������ ������������� �������
		if (forsort[root] < forsort[maxChild]){
			forsort[root] += forsort[maxChild];
			forsort[maxChild] = forsort[root] - forsort[maxChild];
			forsort[root] -= forsort[maxChild];
			root = maxChild;
		}
		else // �����
			done = 1; // �������� ������������
	}
}
// ������� ���������� �� ����
void heapSort(cli::array <int>^ forsort, int sortsize) {
	// ��������� ������ ��� ��������
	for (int i = (sortsize / 2) - 1; i >= 0; i--)
		siftDown(forsort, i, sortsize - 1);
	// ���������� ����� �������� ��������� ��������
	for (int i = sortsize - 1; i >= 1; i--){
		forsort[0] += forsort[i];
		forsort[i] = forsort[0] - forsort[i];
		forsort[0] -= forsort[i];
		siftDown(forsort, 0, i - 1);
	}
}

// ���������� ���������
void insertionSort(cli::array <int>^ forsort, int sortsize) {
	int temp, item; // ��������� ���������� ��� �������� �������� �������� ������������ ������� � ������ ����������� ��������
	for (int counter = 1; counter < sortsize; counter++){
		temp = forsort[counter]; // �������������� ��������� ���������� ������� ��������� �������� �������
		item = counter - 1; // ���������� ������ ����������� �������� �������
		while (item >= 0 && forsort[item] > temp){  // ���� ������ �� ����� 0 � ���������� ������� ������� ������ ��������
			forsort[item + 1] = forsort[item]; // ������������ ��������� �������
			forsort[item] = temp;
			item--;
		}
	}
}

// ������� ���������� ������ �������
void selectionSort(cli::array <int>^ forsort, int sortsize) {
	int min, temp; // ��� ������ ������������ �������� � ��� ������
	for (int i = 0; i < sortsize - 1; i++){
		min = i; // ���������� ������ �������� ��������
		// ���� ����������� ������� ����� ��������� �� ����� i-���
		for (int j = i + 1; j < sortsize; j++){   // ��� ��������� ��������� ����� i-���
			if (forsort[j] < forsort[min]) // ���� ������� ������ ������������,
				min = j;       // ���������� ��� ������ � min
		}
		temp = forsort[i];      // ������ ������� i-�� � ����������� ��������
		forsort[i] = forsort[min];
		forsort[min] = temp;
	}
}

// ������� ������� ����������
void quickSort(cli::array <int>^ forsort, int left, int right) {
	int pivot; // ����������� �������
	int l_hold = left; //����� �������
	int r_hold = right; // ������ �������
	pivot = forsort[left];
	while (left < right){  // ���� ������� �� ���������
		while ((forsort[right] >= pivot) && (left < right))
			right--; // �������� ������ ������� ���� ������� [right] ������ [pivot]
		if (left != right){  // ���� ������� �� ����������
			forsort[left] = forsort[right]; // ���������� ������� [right] �� ����� ������������
			left++; // �������� ����� ������� ������
		}
		while ((forsort[left] <= pivot) && (left < right))
			left++; // �������� ����� ������� ���� ������� [left] ������ [pivot]
		if (left != right){  // ���� ������� �� ����������
			forsort[right] = forsort[left]; // ���������� ������� [left] �� ����� [right]
			right--; // �������� ������ ������� ������
		}
	}
	forsort[left] = pivot; // ������ ����������� ������� �� �����
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot) // ���������� �������� ���������� ��� ����� � ������ ����� �������
		quickSort(forsort, left, pivot - 1);
	if (right > pivot)
		quickSort(forsort, pivot + 1, right);
}

// ������� ���������� ���������� ��������
void mergeSort(cli::array <int>^ forsort, int left, int right) {
	if (left == right) return; // ������� ����������
	int mid = (left + right) / 2; // ���������� �������� ������������������
	// � ���������� �������� ������� ���������� ��� ������ ��������
	mergeSort(forsort, left, mid);
	mergeSort(forsort, mid + 1, right);
	int i = left;  // ������ ������� ����
	int j = mid + 1; // ������ ������� ����
	int *tmp = (int*)malloc(right * sizeof(int)); // �������������� ������
	for (int step = 0; step < right - left + 1; step++){  // ��� ���� ��������� ��������������� �������
		// ���������� � ����������� ������������������ ������� �� ��������� ���� �����
		// ��� ������� ������� ���� ���� j > r
		if ((j > right) || ((i <= mid) && (forsort[i] < forsort[j]))){
			tmp[step] = forsort[i];
			i++;
		}
		else{
			tmp[step] = forsort[j];
			j++;
		}
	}
	// ������������ �������������� ������������������ � �������� ������
	for (int step = 0; step < right - left + 1; step++)
		forsort[left + step] = tmp[step];
}

// ����� �����
void shellsort(cli::array <int>^ forsort, int sortsize){
	int i, j, k, increment, temp;
	int swp = 0, comp = 0; increment = sortsize / 2;
	while (increment > 0){
		for (i = 0; i < increment; i++){
			for (j = 0; j < sortsize; j += increment){
				temp = forsort[j];
				for (k = j - increment; k >= 0 && temp < forsort[k]; k -= increment){
					comp++;
					swp++;
					forsort[k + increment] = forsort[k];
				}
				forsort[k + increment] = temp;
				swp++;
			}
		}
		comp++;
		if (increment / 2 != 0)
			increment = increment / 2;
		else if (increment == 1)
			increment = 0;
		else
			increment = 1;
	}
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	auto timer1 = chrono::high_resolution_clock::now();		// ���������� ��� �������� �������
	auto timer2 = chrono::high_resolution_clock::now();
	bool val = true;	// �������� �� �����

	for (int i = 0; i < size; i++) {		
		NumericUpDown^ nm = (NumericUpDown^)this->Controls["numBox_" + Convert::ToString(i)];		// ���� �������� �� �������� � ������
		darr[i] = System::Convert::ToInt32(nm->Value);
	}

	label1->Text = "�� �����: \n";
	for (int i = 0; i < (size - 1); i++){		// ����� ��������� �������
		label1->Text += darr[i] + "\n";
	}
	label1->Text += darr[size - 1];

	sort = gcnew cli::array<int>(size);		// �������� ������ ������� � ��� ����������
	for (int i = 0; i < size; i++)
		sort[i] = darr[i];

	switch (comboBox1->SelectedIndex) {		// ���������� � ����������� �� ������
	case 0:
		timer1 = chrono::high_resolution_clock::now();
		bubbleSort(sort, size);
		timer2 = chrono::high_resolution_clock::now();
		diff->Text = (size * size).ToString();
		break;
	case 1:		// �������������
		timer1 = chrono::high_resolution_clock::now();
		heapSort(sort, size);
		timer2 = chrono::high_resolution_clock::now();
		diff->Text = (size * log(size)).ToString();
		break;
	case 2:		// �������
		timer1 = chrono::high_resolution_clock::now();
		insertionSort(sort, size);
		timer2 = chrono::high_resolution_clock::now();
		diff->Text = (size * size).ToString();
		break;
	case 3:		// �����
		timer1 = chrono::high_resolution_clock::now();
		selectionSort(sort, size);
		timer2 = chrono::high_resolution_clock::now();
		diff->Text = (size * size).ToString();
		break;
	case 4:		// �������
		timer1 = chrono::high_resolution_clock::now();
		quickSort(sort, 0, size - 1);
		timer2 = chrono::high_resolution_clock::now();
		diff->Text = (size * log(size)).ToString();
		break;
	case 5:		// �������
		timer1 = chrono::high_resolution_clock::now();
		mergeSort(sort, 0, size - 1);
		timer2 = chrono::high_resolution_clock::now();
		diff->Text = (size * log(size)).ToString();
		break;
	case 6:		// ����� �����
		timer1 = chrono::high_resolution_clock::now();
		shellsort(sort, size);
		timer2 = chrono::high_resolution_clock::now();
		diff->Text = (size * size).ToString();
		break;
	default:
		MessageBox::Show("���������� ������� ��� ����������");
		val = false;
		break;
	}

	auto elapsed_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(timer2 - timer1);	// ������� �������
	timesh2->Text = elapsed_ms.count() + " ����������";

	label2->Text = "��������������� ������: \n";	// ����� ���������������� �������
	while (val) {
		for (int i = 0; i < (size - 1); i++){
			label2->Text += sort[i] + "\n";
		}
		label2->Text += sort[size - 1];
		break;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}

};
}
