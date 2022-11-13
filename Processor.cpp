#include "Processor.h"
#pragma warning(disable : 4996)
Processor::Processor()
{
	TF = 0;
	name = "";
}
void Processor::InitProcessor(float TF, string name)
{
	this->TF = TF;
	this->name = name;
}
void Processor::PrintProcessor()
{
	cout << "\nЧастота процессора:           " << TF;
	cout << "\nПроцессор:                    " << name;
}
pair<int, string> Processor::EnterProcessor()
{
	printf("\nВведите частоту процессора:");
	scanf("\n%f", &TF);
	cin.ignore(32767, '\n');
	printf("Введите название процессора:");
	getline(cin, name);
	this->TF = TF;
	this->name = name;
	return make_pair(TF, name);
}
pair<int, string> Processor::correctProcessor(int TF, string name)
{
	int n;

	printf("1.Название\n2.Частота процессора\n");
	printf("\nВыберите поле,которое хотите редактировать:");
	scanf("%d", &n); system("cls");
	switch (n)
	{
	case 1:
	{
		cin.ignore(32767, '\n');
		printf("Введите название процессора:");
		getline(cin, name);
		this->name = name; break;
	}
	case 2:
		printf("\nВведите частоту процессора:");
		scanf("\n%d", &TF);
		this->TF = TF;
		break;

	}
	return make_pair(TF, name);
}