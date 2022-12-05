#include "Smartphone.h"
#pragma warning(disable : 4996)
Smartphone::Smartphone()
{
counter++;
}
void Smartphone::InitSmartphone(int mAH, string Name) {
	mAh = mAH;
	name = Name;
	
}
pair<int, string>  Smartphone::EnterSmartphone()
{
	printf("\nВведите объём батареи(mAh/ч):");
	scanf("\n%d", &mAh);
	cin.ignore(32767, '\n');
	printf("Введите название гаджета:");
	getline(cin, name);
	printf("Объём батареи:                %d", mAh);
	cout << "\nНазвание:                     " << name;
	pair<int, string >p;
	p.first = mAh;
	p.second = name;
	return make_pair(mAh, name);
}
void Smartphone::printSmartphone()
{

	printf("Объём батареи:                    %d", mAh);
	cout << "\nНазвание:                         " << name;
	
}
void Smartphone::PrintCounter()
{
cout << "\nКол-во смартфонов:                " << counter;

}
Smartphone::~Smartphone()
{
	counter--;
}

