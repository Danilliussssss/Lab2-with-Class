
#include "Headphone.h"
#pragma warning(disable : 4996)
Headphone::Headphone ()
{
	mAh = 0;
	name = "";

}
Headphone::Headphone(int* mAh, string* name) {
	this->mAh = *mAh;
	this->name = *name;
	
}
int Headphone::operator++(int f)
{
headcounter++;
return headcounter;
}
void Headphone::PrintHeadphone()
{
	printf("����� �������:                %d", mAh);
	cout << "\n��������:                     " << name;
	cout << "\n���-�� ���������:             " << headcounter;


}
pair<int, string> Headphone::correctHeadphone(int *mAh, string *name)
{
	int n;

	printf("1.��������\n2.����� �������\n");
	printf("�������� ����,������� ������ �������������:");
	scanf("%d", &n);
	if (n == 1)
	{
		system("cls");
		cin.ignore(32767, '\n');
		printf("������� �������� �������:");
		getline(cin, *name);

	}
	else if (n == 2)
	{

		system("cls");
		printf("\n������� ����� �������(mAh/�):");
		scanf("\n%d", &mAh);
	}

	return make_pair(*mAh, *name);
}
Headphone::~Headphone()
{
	headcounter = 0;
}
int *Headphone::EntermAh()
{
	printf("\n������� ����� �������(mAh/�):");
	scanf("\n%d", &mAh);
	return &mAh;
}
string *Headphone::EnterName()
{
	cin.ignore(32767, '\n');
	printf("������� �������� �������:");
	getline(cin, name);
	string* n = &name;
	return n;
}