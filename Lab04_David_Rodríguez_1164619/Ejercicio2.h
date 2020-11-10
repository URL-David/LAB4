#pragma once
#include "DoubleLIst.h";
#include "Node.h";
#include <iostream>
#include <cstdlib>


namespace Lab04DavidRodríguez1164619 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Threading;

	/// <summary>
	/// Resumen de Ejercicio2
	/// </summary>
	public ref class Ejercicio2 : public System::Windows::Forms::Form
	{
	public:
		DoubleLIst* myList;
		Ejercicio2(void)
		{
			
			InitializeComponent();
			
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Ejercicio2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ lblTime1;
	private: System::Windows::Forms::Label^ lblTime2;



	protected:





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->lblTime1 = (gcnew System::Windows::Forms::Label());
			this->lblTime2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(393, 408);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Quick";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Ejercicio2::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(267, 408);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Buble";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Ejercicio2::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(63, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 47);
			this->button1->TabIndex = 6;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(63, 26);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(463, 337);
			this->dataGridView1->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(334, 369);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Ascendente";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Ejercicio2::button4_Click);
			// 
			// lblTime1
			// 
			this->lblTime1->AutoSize = true;
			this->lblTime1->Location = System::Drawing::Point(264, 438);
			this->lblTime1->Name = L"lblTime1";
			this->lblTime1->Size = System::Drawing::Size(49, 13);
			this->lblTime1->TabIndex = 12;
			this->lblTime1->Text = L"00:00.00";
			// 
			// lblTime2
			// 
			this->lblTime2->AutoSize = true;
			this->lblTime2->Location = System::Drawing::Point(390, 438);
			this->lblTime2->Name = L"lblTime2";
			this->lblTime2->Size = System::Drawing::Size(49, 13);
			this->lblTime2->TabIndex = 13;
			this->lblTime2->Text = L"00:00.00";
			// 
			// Ejercicio2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(561, 501);
			this->Controls->Add(this->lblTime2);
			this->Controls->Add(this->lblTime1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Ejercicio2";
			this->Text = L"Ejercicio2";
			this->Load += gcnew System::EventHandler(this, &Ejercicio2::Ejercicio2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Time1->Reset();
		Time1->Start();
		int arr[] = { 10, 7, 8, 9, 1, 5 };
		int n = sizeof(arr) / sizeof(arr[0]);
		MessageBox::Show("" + n);
		Bubble(arr, n);
		if (button4->Text == "Ascendente")
		{
			for (int i = 0; i < n; i++)
			{
				myList->InsertAtEnd(arr[i]);
			}
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				myList->InsertAtStart(arr[i]);
			}
		}
		Time1->Stop();
		TimeSpan ts = Time1->Elapsed;


		String^ elapsedTime = String::Format("{1:00}:{2:00}.{3:00}",
			ts.Hours, ts.Minutes, ts.Seconds,
			ts.Milliseconds / 10);
		lblTime1->Text = (elapsedTime);

	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Time2->Reset();
	Time2->Start();
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	Quick(arr, 0, n - 1);
	if (button4->Text == "Ascendente")
	{
		for (int i = 0; i < n; i++)
		{
			myList->InsertAtEnd(arr[i]);
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			myList->InsertAtStart(arr[i]);
		}
	}

	Time2->Stop();
	TimeSpan ts2 = Time2->Elapsed;


	String^ elapsedTime = String::Format("{1:00}:{2:00}.{3:00}",
		ts2.Hours, ts2.Minutes, ts2.Seconds,
		ts2.Milliseconds / 10);
	lblTime2->Text = (elapsedTime);

}
	   void Bubble(int arreglo[], int count) {
		   for (int i = 0; i < count - 1; i++) {
			   for (int j = i + 1; j < count; j++) {
				   if (arreglo[j] < arreglo[i]) {
					   int temp = arreglo[j];
					   arreglo[j] = arreglo[i];
					   arreglo[i] = temp;
				   }
			   }
		   }
	   }

	   void Quick(int* arr, int izquierda, int derecha) {
		   int i = izquierda;
		   int j = derecha;
		   int temp;
		   int p = arr[(izquierda + derecha) / 2];
		   while (i <= j) {
			   while (arr[i] < p) {
				   i++;
				   while (arr[j] > p) {
					   if (i <= j) {
						   temp = arr[i];
						   arr[i] = arr[j];
						   arr[j] = temp;
						   i++;
						   j--;
					   }
				   }
			   }
		   }
		   if (izquierda < j) {
			   Quick(arr, izquierda, j);
			   if (i < derecha) {
				   Quick(arr, i, derecha);
			   }
		   }
	   }
private: System::Void Ejercicio2_Load(System::Object^ sender, System::EventArgs^ e) {
}
	   int OR = 0;
	   Stopwatch^ Time1 = gcnew Stopwatch();
	   Stopwatch^ Time2 = gcnew Stopwatch();

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (OR == 1)
	{
		button4->Text = "Ascendente";
		OR = 0;
	}
	else
	{
		button4->Text = "Descendente";
		OR = 1;
	}

}
};
}
