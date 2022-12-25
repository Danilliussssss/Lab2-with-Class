#pragma warning(disable : 4996)
#include <iostream>
#include "Headphone.h"
#include "NoteBook.h"
#include "Smartphone.h"
#include <fstream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int massive;
void printmenu()
{
	printf("Выберите категорию гаджетов:");
	printf("\n1.Смартфоны\n2.Наушники\n3.Ноутбуки\n4.Выход\n");
}
void FileForGadget(Gadget A)
{
	ofstream F("Gadget.txt", ios::out | ios::app);
	 F << A.name << "\n";
	F << A.mAh<<"\n";
	F.close();
}

bool comp(Gadget S1,Gadget S2)
{
	return S1.name<=S2.name;
}

int main()
{
	int choose,Head=1,NoteB=1,Smart=1,Gadg=1;
	Headphone** N = new Headphone * [0];
	Notebook** F = new Notebook * [0];
	Smartphone** S = new Smartphone * [0];
	vector <Gadget> V;
	int n;
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
					pair<string, int >p = SMARTPHONE.EnterSmartphone();//Ввод данных смартфона
					pair<float, string >v = SMARTPHONE.pr.EnterProcessor();
					int C = SMARTPHONE.pr.EnterCore();
					float* pointer = SMARTPHONE.pr.CreateCore(C);
					for (int i = 0; i < C; i++)
						SMARTPHONE.pr.InitCore(pointer[i]);
					printf("\nВведите кол-во гаджетов:");
					scanf("%d", &massive);
					try {
						if (massive < 1)
							throw massive;
						Smartphone* A = new Smartphone[massive];
						V.push_back(SMARTPHONE);
						for (int i = 0; i < massive; i++) {
							A[i].InitSmartphone(SMARTPHONE);
							A[i].pr.InitProcessor(v.first, v.second, C);
							
						}
						
						A->PrintSmartphone();
						A->pr.PrintProcessor();
						Smartphone PrintCounter();
						S[Smart - 1] = new Smartphone[massive];
						
						
						cout << "\n";
						for (int i = 0; i < massive; i++)
						{
							S[Smart - 1][i].InitSmartphone(SMARTPHONE);
							FileForGadget(S[Smart - 1][i]);
						}
						Smart++;
						printf("\nУдалить данные?\n1.Да\n2.Нет\n");
						scanf("%d", &n);
						if (n == 1)
						{
							delete[] A;
							V.pop_back();
						}
						SMARTPHONE.~Smartphone();
						printf("\nПосмотреть всё созданное?\n1.Да\n2.Нет\n");
						scanf("%d", &n);
						if (n == 1)
						{
							printf("\nВсё созданное:\n");
							sort(V.begin(), V.end(),comp);
						for (vector< Gadget>::iterator c = V.begin(); c != V.end(); c++)
							c->Print();
						}
						printf("\nНайти что-то?\n1.Да\n2.Нет\n");
						scanf("%d", &n);
						if (n == 1)
						{
							printf("Введите название гаджета:");
							string search;
							cin.ignore(32767, '\n');
							getline(cin, search);
							vector<Gadget>::iterator c = find_if(V.begin(), V.end(), std::bind(std::equal_to<string>(),
								std::bind(&Gadget::name, placeholders::_1), search));
							if(c!=V.end())
							c->Print();
							else
								printf("\nНичего не найдено;(");
						}
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
					pair<string, int>p = HEADPHONE.EnterHeadphone();
					printf("\nВведите кол-во гаджетов:");
					scanf("%d", &massive);
					try {
						if (massive < 1)
							throw massive;
						Headphone* A = new Headphone[massive];
						for (int i = 0; i < massive; i++)
							A[i].InitHeadphone(HEADPHONE);
						V.push_back(HEADPHONE);
						
						
						A->Print();
						N[Head - 1] = new Headphone[massive];
						cout << "\n";
						for (int i = 0; i < massive; i++)
						{
							N[Head - 1][i].InitHeadphone(HEADPHONE);
							FileForGadget(N[Head - 1][i]);
						}
						HEADPHONE.~Headphone();
						Head++;
						
						printf("\nУдалить данные?\n1.Да\n2.Нет\n");
						scanf("%d", &n);
						if (n == 1)
						{
							delete[] A;
							V.pop_back();
						}
						printf("\nПосмотреть всё созданное?\n1.Да\n2.Нет\n");
						scanf("%d", &n);
						printf("Всё созданное:\n");sort(V.begin(), V.end(), comp);
						for (vector< Gadget>::iterator c = V.begin(); c != V.end(); c++)
							c->Print();
						printf("\nНайти что-то?\n1.Да\n2.Нет\n");
						scanf("%d", &n);
						if (n == 1)
						{
							printf("Введите название гаджета:");
							string search;
							cin.ignore(32767, '\n');
							getline(cin, search);
							vector<Gadget>::iterator c = find_if(V.begin(), V.end(), std::bind(std::equal_to<string>(),
								std::bind(&Gadget::name, placeholders::_1), search));
							if (c != V.end())
								c->Print();
							else
								printf("\nНичего не найдено;(");
						}
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
					pair< string,int >p = Note.EnterNotebook();
					Note.a.EnterVideo();
					printf("\nВведите кол-во гаджетов:");
					scanf("%d", &massive);
					try {
						if (massive < 1)
							throw massive;
						Notebook* A = new Notebook[massive];
						for (int i = 0; i < massive; i++) {
							A[i].InitGadget(Note);
							A[i].a.InitVideo(Note.a);
						}V.push_back(Note);
						
						A->PrintNotebook();
                         A->a.PrintVideo();
						 F[NoteB - 1] = new Notebook[massive];
						 for (int i = 0; i < massive; i++)
						 {
							 F[NoteB - 1][i].InitGadget(Note);
							 FileForGadget(F[NoteB - 1][i]);
						 }
						 NoteB++;
						 cout << "\n";
						Note.~Notebook();
						int n;
						printf("\nУдалить данные?\n1.Да\n2.Нет\n");
						scanf("%d", &n);
						if (n == 1)
						{
							delete[] A;

							V.pop_back();
						}
						printf("Всё созданное:\n");
						sort(V.begin(), V.end(), comp);
						for (vector< Gadget>::iterator c = V.begin(); c != V.end(); c++)
						c->Print();
						printf("\nНайти что-то?\n1.Да\n2.Нет\n");
						scanf("%d", &n);
						if (n == 1)
						{
							printf("Введите название гаджета:");
							string search;
							cin.ignore(32767, '\n');
							getline(cin, search);
							vector<Gadget>::iterator c = find_if(V.begin(), V.end(), std::bind(std::equal_to<string>(),
								std::bind(&Gadget::name, placeholders::_1), search));
							if (c != V.end())
								c->Print();
							else
								printf("\nНичего не найдено;(");
						}
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



