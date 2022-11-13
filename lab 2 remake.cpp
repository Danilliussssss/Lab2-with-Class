#pragma warning(disable : 4996)
#include <iostream>
#include "Headphone.h"
#include "NoteBook.h"
#include "Smartphone.h"


void printmenu()
{
	printf("Выберите категорию гаджетов:");
	printf("\n1.Смартфоны\n2.Наушники\n3.Ноутбуки\n4.Выход\n");
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

			printf("Введите данные вашего ноутбука:\n");
			pair<int, string >p = SMARTPHONE.EnterSmartphone();
			pair<int, string >v = SMARTPHONE.pr.EnterProcessor();
			printf("\nВведите кол-во гаджетов:");
			scanf("%d", &massive);
			Smartphone* A = nullptr;
			for (int i = 0; i < massive; i++) {
				A = new Smartphone(p.first, p.second);
				A->pr.InitProcessor(v.first, v.second);
			}
			A->printSmartphone();
			A->pr.PrintProcessor();
			int f;
			printf("\nРедактировать данные смартфона?\n1.Да\n2.Нет\n");
			do {
				scanf("%d", &f);
			} while (f != 1 && f != 2);
			if (f == 1)
			{
				delete A;
				pair<int, string >a = SMARTPHONE.correct(p.first, p.second);


				for (int i = 0; i < massive; i++)
					A = new Smartphone(a.first, a.second);

			}printf("\nРедактировать данные процессора?\n1.Да\n2.Нет\n");
			do {
				scanf("%d", &f);
			} while (f != 1 && f != 2);
			if (f == 1) {
				pair<int, string >m = SMARTPHONE.pr.correctProcessor(v.first, v.second);
				for (int i = 0; i < massive; i++)
					A->pr.InitProcessor(m.first, m.second);
			}
			A->printSmartphone();
			A->pr.PrintProcessor();
		}
		else if (choose == 2)
		{
			system("cls");
			Headphone HEADPHONE;
			printf("Введите данные своих наушников:\n");
			pair<int, string >p = HEADPHONE.EnterHeadphone();

			Headphone* A = nullptr;
			printf("\nВведите кол-во гаджетов:");
			scanf("%d", &massive);
			for (int i = 0; i < massive; i++) {
				A = new Headphone(p.first, p.second);
			}
			A->PrintHeadphone();
			int a;
			printf("\nРедактировать данные?\n1.Да\n2.Нет\n");
			do {
				scanf("%d", &a);
			} while (a != 1 && a != 2);
			if (a == 1)
			{
				delete A;
				pair<int, string >a = HEADPHONE.correctHeadphone(p.first, p.second);

				for (int i = 0; i < massive; i++)
					A = new Headphone(a.first, a.second);
				A->PrintHeadphone();
			}
		}
		else if (choose == 3)
		{
			system("cls");
			Notebook Note;

			printf("Введите данные вашего ноутбука:\n");
			pair<int, string >p = Note.EnterNotebook();
			pair<int, string >v = Note.a.EnterVideo();
			printf("\nВведите кол-во гаджетов:");
			scanf("%d", &massive);
			Notebook* A = new Notebook[massive];
			for (int i = 0; i < massive; i++) {
				A[i].SwipeNotebook(p.first, p.second);
				Notebook::Counter();
				A[i].a.InitVideo(v.first, v.second);
			}
			A->PrintNotebook();
			A->a.PrintVideo();
			int f;
			printf("\nРедактировать данные ноутбука?\n1.Да\n2.Нет\n");
			do {
				scanf("%d", &f);
			} while (f != 1 && f != 2);
			if (f == 1)
			{
				delete[] A;
				pair<int, string >a = Note.correctNotebook(p.first, p.second);

				Notebook* A = new Notebook[massive];
				for (int i = 0; i < massive; i++)
				{
					A[i].SwipeNotebook(a.first, a.second);
					Notebook::Counter();
				}


			}printf("\nРедактировать данные видеокарты?\n1.Да\n2.Нет\n");
			do {
				scanf("%d", &f);
			} while (f != 1 && f != 2);
			if (f == 1) {
				pair<int, string >m = Note.a.correctVideo(v.first, v.second);
				
				for (int i = 0; i < massive; i++)
					A[i].a.InitVideo(m.first, m.second);
			}	A->PrintNotebook();
			A->a.PrintVideo();
		}
		else if (choose == 4)
			return 0;
		cout << "\n";
		system("pause");
	} while (choose != 4);
}



