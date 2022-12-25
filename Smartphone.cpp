#include "Smartphone.h"
#pragma warning(disable : 4996)
pair<string, int> Smartphone::EnterSmartphone() 
{
	Gadget::Enter();
	cin.ignore(32767, '\n');
	printf("������� ��� ������:");
	getline(cin, TypeScreen);
	printf("\n������� ������� ����������:");
	scanf("\n%d", &Hz);
	return make_pair(TypeScreen, Hz);
}
void Smartphone::PrintSmartphone()
{
	Print();
	cout << "\n��� ������:                   " << TypeScreen;
	printf("\n������� ����������:            %d\n", Hz);
}
void Smartphone::InitSmartphone(Smartphone& S)
{
	InitGadget(S.mAh, S.name);
	TypeScreen = S.TypeScreen;
	Hz = S.Hz;
}

