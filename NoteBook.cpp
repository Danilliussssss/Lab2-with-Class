#include "NoteBook.h"
#pragma warning(disable : 4996)
Notebook::Notebook(string name)
{

	name = "";
	mAh = 0;

	this->name = name;

}

void Notebook::SwipeNotebook(int mAh, string name) {
	this->mAh = mAh;
	this->name = name;
	NoteCounter++;
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

pair<int, string> Notebook::correctNotebook(int mAh, string name)
{
	int n;

	printf("1.��������\n2.����� �������\n");
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

	}
	return make_pair(mAh, name);
}
Notebook::~Notebook()
{
	NoteCounter = 0;
}

