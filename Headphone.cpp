
#include "Headphone.h"
#pragma warning(disable : 4996)
pair<string, int> Headphone::EnterHeadphone()
{
	Gadget::Enter();
	cin.ignore(32767, '\n');
	printf("Введите цвет:");
	getline(cin, Color);
	printf("\nВведите радиус действия:");
	scanf("\n%d", &Radius);
	return make_pair(Color, Radius);
}
void Headphone::InitHeadphone(Headphone& H)
{
	InitGadget(H.mAh, H.name);
	Radius = H.Radius;
	Color = H.Color;
}
void Headphone::Print()
{
	Gadget::Print();
	cout << "\nЦвет:                         " << Color;
	printf("\nРадиус действия:              %d\n", Radius);
}


 
 
