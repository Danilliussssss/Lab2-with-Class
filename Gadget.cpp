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
	printf("Введите название гаджета:");
	getline(cin, name); 
	printf("\nВведите объём батареи:");
	scanf("\n%d", &mAh);
	return make_pair(name,mAh);
}
void Gadget::Print() 
{
	cout << "\nНазвание:                     " << name;
	printf("\nОбъём батареи:                %d\n", mAh);
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
	cout << "Кол - во                      " << counter;
}