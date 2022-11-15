#include "NoteBook.h"
#pragma warning(disable : 4996)
Notebook::Notebook(string name)
{

	name = "";
	mAh = 0;

	this->name = name;

}
 void Notebook::Counter()
{
NoteCounter++;
}
void Notebook::SwipeNotebook(int mAh, string name) {
	this->mAh = mAh;
	this->name = name;
	
}
pair<int, string> EnterNotebook(Notebook &N)
{
	printf("\n������� ����� �������(mAh/�):");
	scanf("\n%d", &N.mAh);
	printf("������� �������� �������:");
	cin.ignore(32767, '\n');
	getline(cin, N.name);
	pair<int, string >p;
	p.first = N.mAh;
	p.second = N.name;
	return make_pair(N.mAh, N.name);
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

