
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
	cout << "\n��������:                     " << name;
	printf("\n����� �������:                %d", mAh);
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
		 printf("\n������� ����� �������(mAh/�):");
		 scanf("\n%d", &mAh);
		 cin.ignore(32767, '\n');
		 printf("������� �������� �������:");
		 getline(cin, name); 
			 pair<int, string >p;
			 p.first = mAh;
			 p.second = name;
			 return make_pair(mAh, name);
}

 
