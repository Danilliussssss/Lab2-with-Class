#include "Smartphone.h"
#pragma warning(disable : 4996)
Smartphone::Smartphone()
{
	mAh = 0;
	name = "";

}
Smartphone::Smartphone(int mAh, string name) {
	this->mAh = mAh;
	this->name = name;
	counter++;
}
pair<int, string>  Smartphone::EnterSmartphone()
{
	printf("\n������� ����� �������(mAh/�):");
	scanf("\n%d", &mAh);
	cin.ignore(32767, '\n');
	printf("������� �������� �������:");
	getline(cin, name);
	pair<int, string >p;
	p.first = mAh;
	p.second = name;
	printf("����� �������:                %d", mAh);
	cout << "\n��������:                     " << name;
	return make_pair(mAh, name);
}
void Smartphone::printSmartphone()
{

	printf("����� �������:                %d", mAh);
	cout << "\n��������:                     " << name;
	cout << "\n���-�� ����������:            " << counter;

}
pair<int, string> Smartphone::correct(int mAh, string name)
{
	int n;

	printf("1.��������\n2.����� �������\n");
	printf("�������� ����,������� ������ �������������:");
	scanf("%d", &n);
	if (n == 1)
	{
		system("cls");
		cin.ignore(32767, '\n');
		printf("1������� �������� �������:");
		getline(cin, name);
		this->name = name;
	}
	else if (n == 2)
	{

		system("cls");
		printf("\n������� ����� �������(mAh/�):");
		scanf("\n%d", &mAh);
		this->mAh = mAh;

	}
	return make_pair(mAh, name);
}
Smartphone::~Smartphone()
{
	counter = 0;
}

