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
	printf("\n������� ����� �������(mAh/�):");
	scanf("\n%d", &mAh);
	cin.ignore(32767, '\n');
	printf("������� �������� �������:");
	getline(cin, name);
	printf("����� �������:                %d", mAh);
	cout << "\n��������:                     " << name;
	pair<int, string >p;
	p.first = mAh;
	p.second = name;
	return make_pair(mAh, name);
}
void Smartphone::printSmartphone()
{

	printf("����� �������:                    %d", mAh);
	cout << "\n��������:                         " << name;
	
}
void Smartphone::PrintCounter()
{
cout << "\n���-�� ����������:                " << counter;

}
Smartphone::~Smartphone()
{
	counter--;
}

