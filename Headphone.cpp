
#include "Headphone.h"
#pragma warning(disable : 4996)
Headphone::Headphone ()
{

headcounter++;
}
void Headphone::InitHeadphone(int mAH,string Name)
{
	mAh = mAH;
	name = Name;
}
void Headphone::PrintHeadphone()
{
	cout << "\nНазвание:                     " << name;
	printf("\nОбъём батареи:                %d", mAh);
}
Headphone Headphone::operator++(int)
{

	Headphone New = *this;
	return *this;

}
Headphone Headphone::operator++()
{

	Headphone New = *this;
	return New;

}
Headphone::~Headphone()
{
	headcounter--;
}
 pair<int,string> Headphone::EnterHeadphone()
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
}

 
