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
	printf("\nВведите объём батареи(mAh/ч):");
	scanf("\n%d", &mAh);
	cin.ignore(32767, '\n');
	printf("Введите название гаджета:");
	getline(cin,name);
    this->mAh = mAh;
	this->name = name;}
void Smartphone::printSmartphone()
{

	printf("Объём батареи:                %d",mAh);
	cout <<"\nНазвание:                     "<< name;
	cout <<"\nКол-во смартфонов:            "<< counter;
	
}
void Smartphone::correct(int mAh,string name)
{
	int n;

	printf("1.Название\n2.Объём батареи\n");
	printf("Выберите поле,которое хотите редактировать:");
	scanf("%d", &n);
	if (n == 1)
	{
		system("cls");
		 cin.ignore(32767, '\n');
		 printf("1Введите название гаджета:");
		 getline(cin, name);
		this->name = name;
	}
	else if (n == 2)
	{
		
		system("cls");
		printf("\nВведите объём батареи(mAh/ч):");
		scanf("\n%d", &mAh); 
		this->mAh = mAh;
	}
	
}
Smartphone::~Smartphone()
{
	counter = 0;
}
