
#include "Headphone.h"
#pragma warning(disable : 4996)
Headphone::Headphone()
{
	mAh = 0;
	name = "";
	
}
Headphone::Headphone(int mAh, string name) {
	this->mAh = mAh;
	this->name = name;
	headcounter++;
}
void Headphone::EnterHeadphone(int mAh, string name)
{
	printf("\nВведите объём батареи(mAh/ч):");
	scanf("\n%d", &mAh);
	cin.ignore(32767, '\n');
	printf("Введите название гаджета:");
	getline(cin, name);
	this->mAh = mAh;
	this->name = name;
}
void Headphone::PrintHeadphone(int mAh, string name)
{
	printf("Объём батареи:                %d", mAh);
	cout << "\nНазвание:                     " << name;
	cout << "\nКол-во наушников:             " << headcounter;
	
}
void Headphone::correctHeadphone(int mAh, string name)
{
	int n;

	printf("1.Название\n2.Объём батареи\n");
	printf("Выберите поле,которое хотите редактировать:");
	scanf("%d", &n);
	if (n == 1)
	{
		system("cls");
		cin.ignore(32767, '\n');
		printf("Введите название гаджета:");
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
Headphone::~Headphone()
{
	headcounter = 0;
}

	
