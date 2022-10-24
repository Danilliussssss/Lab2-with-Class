#include "NoteBook.h"
#pragma warning(disable : 4996)
Notebook::Notebook(string name)
{
	
	name = "";
	mAh = 0;
	this->name = name;
	VideoAdapter();
	NoteCounter++;
}
Notebook::VideoAdapter::VideoAdapter()
{
	names = "";
	mHz = 0;
}
void Notebook::SwipeNotebook(int mAh, string name,string names,int mHz) {
	this->mAh = mAh;
	this->name = name;
	this->Video.names = names;
	this->Video.mHz = mHz;
	
}
void Notebook::EnterNotebook(int mAh, string name,string names,int mHz)
{
	printf("\n������� ����� �������(mAh/�):");
	scanf("\n%d", &mAh);
	cin.ignore(32767, '\n');
	printf("������� �������� �������:");
	getline(cin, name);
	printf("������� ����������:");
	getline(cin, names);
	printf("\n������� �������(mHz):");
	scanf("\n%d", &mHz);
	this->mAh = mAh;
	this->name = name;
	this->Video.names = names;
	this->Video.mHz = mHz;
	
}
void Notebook::PrintNotebook(int mAh, string name, string names, int mHz)
{

	printf("����� �������:                  %d", mAh);
	cout <<"\n��������:                       " << name;
	cout <<"\n����������:                     " << names;
	cout <<"\n������� ���������:              " << mHz;
	cout <<"\n���-�� ���������:               " << NoteCounter;
}

void Notebook::correctNotebook(int mAh, string name, string names, int mHz)
{
	int n;

	printf("1.��������\n2.����� �������\n3.����������\n4.������� ���������");
	printf("\n�������� ����,������� ������ �������������:");
	scanf("%d", &n); system("cls");
	switch (n)
	{ 
	case 1:
	{
		cin.ignore(32767, '\n');
		printf("������� �������� �������:");
		getline(cin, name);
		this->name = name; break;
	}
	case 2:
		printf("\n������� ����� �������(mAh/�):");
		scanf("\n%d", &mAh);
		this->mAh = mAh;
		break;
	case 3:
		printf("������� ����������:");
		cin.ignore(32767, '\n');
		getline(cin, names);
		this->Video.names = names; break;
		
			
	case 4:	
		printf("\n������� ������� ���������(mHz):");
		scanf("\n%d", &mHz);
		this->Video.mHz;
		break;
}

}
Notebook::~Notebook()
{
	NoteCounter = 0;
}


	
	
