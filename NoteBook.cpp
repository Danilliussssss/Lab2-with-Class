#include "NoteBook.h"
#pragma warning(disable : 4996)
Notebook::Notebook()
{
NoteCounter++;
}
void Notebook::InitNotebook(string Name, int mAH)
{
	name = Name;
	mAh = mAH;
	
}
pair<int, string> Notebook::EnterNotebook()
{
	printf("\n������� ����� �������(mAh/�):");
	scanf("\n%d", &mAh);
	printf("������� �������� �������:");
	cin.ignore(32767, '\n');
	getline(cin, name);
	pair<int, string >p;
	p.first = mAh;
	p.second = name;
	return make_pair(mAh, name);
}
void Notebook::PrintNotebook()
{
	printf("����� �������:                  %d", mAh);
	cout << "\n��������:                       " << name;
	cout << "\n���-�� ���������:               " << NoteCounter;
}
Notebook::~Notebook()
{
	NoteCounter--;
}

