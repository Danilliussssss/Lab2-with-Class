#include "Processor.h"
#pragma warning(disable : 4996)
Processor::Processor()
{
	GHz = 0;
	name = "";
}
void Processor::InitProcessor(float GHz, string name)
{
	this->GHz = GHz;
	this->name = name;
}
void Processor::PrintProcessor()
{
	cout << "\nЧастота процессора:           " << GHz;
	cout << "\nПроцессор:                    " << name;
}
pair<int, string> Processor::EnterProcessor()
{
	printf("\nВведите частоту процессора:");
	scanf("\n%f", &GHz);
	cin.ignore(32767, '\n');
	printf("Введите название процессора:");
	getline(cin, name);
	this->GHz = GHz;
	this->name = name;
	return make_pair(GHz, name);
}
pair<int, string> Processor::correctProcessor(int GHz, string name)
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
		scanf("\n%d", &GHz);
		this->GHz = GHz;
		break;

	}
	return make_pair(GHz, name);
}