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
	cout << "\n������� ����������:           " << TF;
	cout << "\n���������:                    " << name;
}
pair<int, string> Processor::EnterProcessor()
{
	printf("\n������� ������� ����������:");
	scanf("\n%f", &TF);
	cin.ignore(32767, '\n');
	printf("������� �������� ����������:");
	getline(cin, name);
	this->TF = TF;
	this->name = name;
	return make_pair(TF, name);
}
pair<int, string> Processor::correctProcessor(int TF, string name)
{
	int n;

	printf("1.��������\n2.������� ����������\n");
	printf("\n�������� ����,������� ������ �������������:");
	scanf("%d", &n); system("cls");
	switch (n)
	{
	case 1:
	{
		cin.ignore(32767, '\n');
		printf("������� �������� ����������:");
		getline(cin, name);
		this->name = name; break;
	}
	case 2:
		printf("\n������� ������� ����������:");
		scanf("\n%d", &TF);
		this->TF = TF;
		break;

	}
	return make_pair(TF, name);
}