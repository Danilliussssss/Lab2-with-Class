#include "Smartphone.h"
#pragma warning(disable : 4996)
pair<string, int> Smartphone::EnterSmartphone() 
{
	Gadget::Enter();
	cin.ignore(32767, '\n');
	printf("Введите тип экрана:");
	getline(cin, TypeScreen);
	printf("\nВведите частоту обновления:");
	scanf("\n%d", &Hz);
	return make_pair(TypeScreen, Hz);
}
void Smartphone::PrintSmartphone()
{
	Print();
	cout << "\nТип экрана:                   " << TypeScreen;
	printf("\nЧастота обновления:            %d\n", Hz);
}
void Smartphone::InitSmartphone(Smartphone& S)
{
	InitGadget(S.mAh, S.name);
	TypeScreen = S.TypeScreen;
	Hz = S.Hz;
}

