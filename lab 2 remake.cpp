#pragma warning(disable : 4996)
#include <iostream>
#include "Headphone.h"
#include "NoteBook.h"
#include "Smartphone.h"
#include <fstream>
void printmenu()
{
	printf("Выберите категорию гаджетов:");
	printf("\n1.Смартфоны\n2.Наушники\n3.Ноутбуки\n4.Выход\n");
}
void Ctr(Smartphone A)
{
	fstream F("Smartphone.txt", ios::out | ios::app);
	F << A.name << "\n";
	F << A.mAh;
	F.close();
}
int main()
{
	
	int choose, massive;
	setlocale(LC_ALL, "russian");
	do {
		system("cls");
		printmenu();
		
		do
			scanf("%d", &choose);
		while (choose < 0 && choose>4);
		if (choose == 1)
		{
			system("cls");
			Smartphone SMARTPHONE;
			printf("Введите данные вашего смартфона:\n");
			pair<int, string >p = SMARTPHONE.EnterSmartphone();//Ввод данных смартфона
			pair<float, string >v = SMARTPHONE.pr.EnterProcessor();
			int C=SMARTPHONE.pr.EnterCore();
			C = C - 2; C++; ++C;
			float* pointer = SMARTPHONE.pr.CreateCore(C);
			for (int i = 0; i < C; i++)
				SMARTPHONE.pr.InitCore(pointer[i]);
			printf("\nВведите кол-во гаджетов:");
			scanf("%d", &massive);
			Smartphone* A = new Smartphone[massive];
			for (int i = 0; i < massive; i++) {
					A[i].InitSmartphone(p.first, p.second);
				A[i].pr.InitProcessor(v.first, v.second,C);
			}Ctr(SMARTPHONE);
			SMARTPHONE.~Smartphone();
			
			A->printSmartphone();
			A->pr.PrintProcessor();
			Smartphone::PrintCounter(); int n;
			printf("\nУдалить данные?\n1.Да\n2.Нет\n");
			scanf("%d", &n);
			if(n==1)
			delete[] A;
	
		}
		else if (choose == 2)
		{
			system("cls");
			Headphone HEADPHONE; 
			printf("Введите данные своих наушников:\n"); 
			  pair<int, string>p=HEADPHONE.EnterHeadphone();
			printf("\nВведите кол-во гаджетов:");
			scanf("%d", &massive);
			 Headphone* A = new Headphone[massive];
			 for (int i = 0; i < massive; i++)
				 A[i].InitHeadphone(p.first, p.second);
			 HEADPHONE.~Headphone();
			A->PrintHeadphone();
			
			int n;
			printf("\nУдалить данные?\n1.Да\n2.Нет\n");
			scanf("%d", &n);
			if (n == 1)
				delete[] A;
			
		}
		else if (choose == 3)
		{
			system("cls");
			Notebook Note;
			printf("Введите данные вашего ноутбука:\n");
			pair<int, string >p = Note.EnterNotebook();
			Note.a.EnterVideo();
			printf("\nВведите кол-во гаджетов:");
			scanf("%d", &massive);
			Notebook* A = new Notebook[massive];
			for (int i = 0; i < massive; i++) {
				A[i].InitNotebook( p.second,p.first);
				A[i].a.InitVideo(Note.a);
			}
			Note.~Notebook();
			A->PrintNotebook();
			A->a.PrintVideo();
			int n;
			
			printf("\nУдалить данные?\n1.Да\n2.Нет\n");
			scanf("%d", &n);
			if (n == 1)
				delete[] A;
			
		}
		else if (choose == 4)
			return 0;
		cout << "\n";
		system("pause");
	} while (choose != 4);
}



