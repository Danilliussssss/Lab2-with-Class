#include "Gadget.h"
#pragma warning(disable : 4996)
Gadget::Gadget()
{
	counter++;
}
 void Gadget::InitGadget(int mAhParameter, string nameParameter)
{
	name =nameParameter;
	mAh = mAhParameter;
	
}
pair<string,int> Gadget::Enter()
{
	cin.ignore(32767, '\n');
	printf("������� �������� �������:");
	getline(cin, name); 
	printf("\n������� ����� �������:");
	scanf("\n%d", &mAh);
	return make_pair(name,mAh);
}
void Gadget::Print() 
{
	cout << "\n��������:                     " << name;
	printf("\n����� �������:                %d\n", mAh);
}
Gadget Gadget::operator++(int)
{
	Gadget New = *this;return *this;
}
Gadget Gadget::operator++()
{

	Gadget New = *this;
	return New;

}
 
Gadget::~Gadget()
{
	counter--;
}
void Gadget::PrintCounter()
{
	cout << "��� - ��                      " << counter;
}