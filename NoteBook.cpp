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
	printf("\nВведите объём батареи(mAh/ч):");
	scanf("\n%d", &mAh);
	printf("Введите название гаджета:");
	cin.ignore(32767, '\n');
	getline(cin, name);
	pair<int, string >p;
	p.first = mAh;
	p.second = name;
	return make_pair(mAh, name);
}
void Notebook::PrintNotebook()
{
	printf("Объём батареи:                  %d", mAh);
	cout << "\nНазвание:                       " << name;
	cout << "\nКол-во ноутбуков:               " << NoteCounter;
}
Notebook::~Notebook()
{
	NoteCounter--;
}

