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
	printf("\nВведите объём батареи(mAh/ч):");
	scanf("\n%d", &mAh);
	cin.ignore(32767, '\n');
	printf("Введите название гаджета:");
	getline(cin, name);
	printf("Введите видеокарту:");
	getline(cin, names);
	printf("\nВведите частоту(mHz):");
	scanf("\n%d", &mHz);
	this->mAh = mAh;
	this->name = name;
	this->Video.names = names;
	this->Video.mHz = mHz;
	
}
void Notebook::PrintNotebook(int mAh, string name, string names, int mHz)
{

	printf("Объём батареи:                  %d", mAh);
	cout <<"\nНазвание:                       " << name;
	cout <<"\nВидеокарта:                     " << names;
	cout <<"\nЧастота видеочипа:              " << mHz;
	cout <<"\nКол-во ноутбуков:               " << NoteCounter;
}

void Notebook::correctNotebook(int mAh, string name, string names, int mHz)
{
	int n;

	printf("1.Название\n2.Объём батареи\n3.Видеокарта\n4.Частота видеочипа");
	printf("\nВыберите поле,которое хотите редактировать:");
	scanf("%d", &n); system("cls");
	switch (n)
	{ 
	case 1:
	{
		cin.ignore(32767, '\n');
		printf("Введите название гаджета:");
		getline(cin, name);
		this->name = name; break;
	}
	case 2:
		printf("\nВведите объём батареи(mAh/ч):");
		scanf("\n%d", &mAh);
		this->mAh = mAh;
		break;
	case 3:
		printf("Введите видеокарту:");
		cin.ignore(32767, '\n');
		getline(cin, names);
		this->Video.names = names; break;
		
			
	case 4:	
		printf("\nВведите частоту видеочипа(mHz):");
		scanf("\n%d", &mHz);
		this->Video.mHz;
		break;
}

}
Notebook::~Notebook()
{
	NoteCounter = 0;
}


	
	
