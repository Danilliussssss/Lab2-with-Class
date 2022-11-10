
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
pair<int, string> Headphone::EnterHeadphone()
{
	printf("\nВведите объём батареи(mAh/ч):");
	scanf("\n%d", &mAh);
	cin.ignore(32767, '\n');
	printf("Введите название гаджета:");
	getline(cin, name);
	pair<int, string >p;
	p.first = mAh;
	p.second = name;
	return make_pair(mAh, name);
}void Headphone::PrintHeadphone()
{
	printf("Объём батареи:                %d", mAh);
	cout << "\nНазвание:                     " << name;
	cout << "\nКол-во наушников:             " << headcounter;


}
pair<int, string> Headphone::correctHeadphone(int mAh, string name)
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

	}
	else if (n == 2)
	{

		system("cls");
		printf("\nВведите объём батареи(mAh/ч):");
		scanf("\n%d", &mAh);
	}

	return make_pair(mAh, name);
}
Headphone::~Headphone()
{
	headcounter = 0;
}

