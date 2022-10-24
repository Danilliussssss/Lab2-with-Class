#pragma warning(disable : 4996)
#include <iostream>
#include "Headphone.h"
#include "NoteBook.h"
#include "Smartphone.h"
#include "Processor.h"

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
			printf("Введите данные своего смартфона:\n");
			SMARTPHONE.EnterSmartphone(SMARTPHONE.mAh, SMARTPHONE.name);
			Smartphone* A = nullptr;
			Processor PROCESSOR;
			PROCESSOR.EnterProcessor(PROCESSOR.GHz, PROCESSOR.name);
			Processor* Process = nullptr;
			printf("Введите кол-во гаджетов:");
			scanf("%d", &massive);
			for (int i = 0; i < massive; i++) {
				A = new Smartphone(SMARTPHONE.mAh, SMARTPHONE.name);
				Process = new Processor(PROCESSOR.GHz, PROCESSOR.name);
			}
			A->printSmartphone();
			Process->PrintProcessor(Process->GHz, Process->name);
			int a;
			printf("\nРедактировать данные?\n1.Да\n2.Нет\n");
			do {
				scanf("%d", &a);
			} while (a != 1 && a != 2);
			if (a == 1)
			{
				SMARTPHONE.correct(SMARTPHONE.mAh, SMARTPHONE.name);
				delete A;
				for (int i = 0; i < massive; i++)
					A = new Smartphone(SMARTPHONE.mAh, SMARTPHONE.name);
				A->printSmartphone();
			}
		}
		else if (choose == 2)
		{
			system("cls");
			Headphone HEADPHONE;
			printf("Введите данные своих наушников:\n");
			HEADPHONE.EnterHeadphone(HEADPHONE.mAh, HEADPHONE.name);
			Headphone* A = nullptr;

			printf("Введите кол-во гаджетов:");
			scanf("%d", &massive);
			for (int i = 0; i < massive; i++) {
				A = new Headphone(HEADPHONE.mAh, HEADPHONE.name);
			}
			A->PrintHeadphone(A->mAh, A->name);
			int a;
			printf("\nРедактировать данные?\n1.Да\n2.Нет\n");
			do {
				scanf("%d", &a);
			} while (a != 1 && a != 2);
			if (a == 1)
			{
				HEADPHONE.correctHeadphone(HEADPHONE.mAh, HEADPHONE.name);
				delete A;
				for (int i = 0; i < massive; i++)
					A = new Headphone(HEADPHONE.mAh, HEADPHONE.name);
				A->PrintHeadphone(A->mAh, A->name);
			}
		}
		else if (choose == 3)
		{
			system("cls");
			Notebook Note;
			printf("Введите данные своего ноутбука:\n");
			Notebook* N = nullptr;
			Note.EnterNotebook(Note.mAh, Note.name, Note.Video.names, Note.Video.mHz);
			printf("Введите кол-во гаджетов:");
			scanf("%d", &massive);
			for (int i = 0; i < massive; i++)
			{
				N = new Notebook(Note.name);
				N->SwipeNotebook(Note.mAh, Note.name, Note.Video.names, Note.Video.mHz);
			}
			N->PrintNotebook(N->mAh, N->name, N->Video.names, N->Video.mHz);
			int a;
			printf("\nРедактировать данные?\n1.Да\n2.Нет\n");
			do {
				scanf("%d", &a);
			} while (a != 1 && a != 2);
			if (a == 1)
			{
				system("cls");
				Note.correctNotebook(Note.mAh, Note.name, Note.Video.names, Note.Video.mHz);
				delete N;
				for (int i = 0; i < massive; i++)
				{
					N = new Notebook(Note.name);
					N->SwipeNotebook(Note.mAh, Note.name, Note.Video.names, Note.Video.mHz);
				}N->PrintNotebook(N->mAh, N->name, N->Video.names, N->Video.mHz);
			}
		}
		else if (choose == 4)
			return 0;
		cout << "\n";
		system("pause");
	} while (choose != 4);
}

  
