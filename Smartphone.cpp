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
void Smartphone::EnterSmartphone(int mAh,string name)
{
	printf("\n������� ����� �������(mAh/�):");
	scanf("\n%d", &mAh);
	cin.ignore(32767, '\n');
	printf("������� �������� �������:");
	getline(cin,name);
    this->mAh = mAh;
	this->name = name;}
void Smartphone::printSmartphone()
{

	printf("����� �������:                %d",mAh);
	cout <<"\n��������:                     "<< name;
	cout <<"\n���-�� ����������:            "<< counter;
	
}
void Smartphone::correct(int mAh,string name)
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
	
}
Smartphone::~Smartphone()
{
	counter = 0;
}
