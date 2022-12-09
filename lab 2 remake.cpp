#pragma warning(disable : 4996)
#include <iostream>
#include "Headphone.h"
#include "NoteBook.h"
#include "Smartphone.h"
#include <fstream>
int massive;
void printmenu()
{
	printf("Выберите категорию гаджетов:");
	printf("\n1.Смартфоны\n2.Наушники\n3.Ноутбуки\n4.Выход\n");
}
void FileForSmartphone(Smartphone A)
{
	ofstream F("Smartphone.txt", ios::out | ios::app);
	 F << A.name << "\n";
	F << A.mAh<<"\n";
	F.close();
}
void FileForHeadphone(Headphone A)
{
	ofstream F("Headphone.txt", ios::out | ios::app);
	F << A.name << "\n";
	F << A.mAh << "\n";
	F.close();
}
void FileForNotebook(Notebook A)
{
	ofstream F("Notebook.txt", ios::out);
	F << A.name << "\n";
	F << A.mAh << "\n";
	F.close();
}

int main()
{
	int choose,f=1;
	Headphone** N = new Headphone * [0];
	
	setlocale(LC_ALL, "russian");
	do {
		system("cls");
		printmenu();
			scanf("%d", &choose);
			try {
				if (choose < 1 || choose>4)
					throw "Введите корректную цифру";
				if (choose == 1)
				{
					system("cls");
					Smartphone SMARTPHONE;
					printf("Введите данные вашего смартфона:\n");
					pair<int, string >p = SMARTPHONE.EnterSmartphone();//Ввод данных смартфона
					pair<float, string >v = SMARTPHONE.pr.EnterProcessor();
					int C = SMARTPHONE.pr.EnterCore();
					C = C - 2; C++; ++C;
					float* pointer = SMARTPHONE.pr.CreateCore(C);
					for (int i = 0; i < C; i++)
						SMARTPHONE.pr.InitCore(pointer[i]);
					printf("\nВведите кол-во гаджетов:");
					scanf("%d", &massive);
					try {
						if (massive < 1)
							throw massive;
						Smartphone* A = new Smartphone[massive];
						for (int i = 0; i < massive; i++) {
							A[i].InitSmartphone(p.first, p.second);
							A[i].pr.InitProcessor(v.first, v.second, C);
						}
						SMARTPHONE.~Smartphone();
						A->printSmartphone();
						A->pr.PrintProcessor();
						Smartphone::PrintCounter(); int n;
						printf("\nУдалить данные?\n1.Да\n2.Нет\n");
						scanf("%d", &n);
						if (n == 1)
							delete[] A;
						FileForSmartphone(A[massive - 1]);
					}
					catch (int a) {
						printf("Вы ввели некорректное число %d.", a);
					}
				}
				else if (choose == 2)
				{
					system("cls");
					Headphone HEADPHONE;
					printf("Введите данные своих наушников:\n");
					pair<int, string>p = HEADPHONE.EnterHeadphone();
					printf("\nВведите кол-во гаджетов:");
					scanf("%d", &massive);
					try {
						if (massive < 1)
							throw massive;
						Headphone* A = new Headphone[massive];
						for (int i = 0; i < massive; i++)
							A[i].InitHeadphone(p.first, p.second);
						A->PrintHeadphone();
						N[f - 1] = new Headphone[massive];
						for (int i = 0; i < massive; i++)
						{
							N[f - 1][i].InitHeadphone(p.first, p.second);
						}
						cout << "\n";
						for (int i = 0; i < massive; i++)
							FileForHeadphone(N[f - 1][i]);
						HEADPHONE.~Headphone();
						f++;

					}

					catch (int a) {
						printf("Вы ввели некорректное число %d.\n", a);
					}
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
					try {
						if (massive < 1)
							throw massive;
						Notebook* A = new Notebook[massive];
						for (int i = 0; i < massive; i++) {
							A[i].InitNotebook(p.second, p.first);
							A[i].a.InitVideo(Note.a);
						}
						Note.~Notebook();
						A->PrintNotebook();
						A->a.PrintVideo();
						int n;
						printf("\nУдалить данные?\n1.Да\n2.Нет\n");
						FileForNotebook(A[massive - 1]);
						scanf("%d", &n);
						if (n == 1)
							delete[] A;
					}
					catch (int a) {
						printf("Вы ввели некорректное число %d.", a);
					}
				}
				else if (choose == 4)
					
					return 0;
				cout << "\n";
				system("pause");
				}
			catch (const char* exception) {
				printf("\n%s\n", exception);
				system("pause");
			}
	} while (choose != 4);
}



