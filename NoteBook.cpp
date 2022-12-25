#include "NoteBook.h"
#pragma warning(disable : 4996)
pair<string, int>Notebook::EnterNotebook()
{
	Gadget::Enter();
	cin.ignore(32767, '\n');
	printf("������� ���� ����������:");
	getline(cin, ColorKeyboard);
	printf("\n������� ��������� ������(� ������):");
	scanf("\n%d", &Inch);
	return make_pair(ColorKeyboard, Inch);
	
}
void Notebook::InitGadget(Notebook N)
{
	Gadget::InitGadget(N.mAh,N.name);
	ColorKeyboard = N.ColorKeyboard;
	Inch = N.Inch;
}
void Notebook::PrintNotebook()
{
	cout << "\n���� ����������:                     " << name;
	printf("\n��������� ������(� ������):          %d\n", mAh);
}