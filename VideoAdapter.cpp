#include "VideoAdapter.h"

#pragma warning(disable : 4996)
VideoAdapter::VideoAdapter()
{
	TF = 0;
	name = "";
}
void VideoAdapter::InitVideo(int TF, string name)
{
	this->TF = TF;
	this->name = name;
}
void VideoAdapter::PrintVideo()
{
	cout << "\nTF:                             " << TF;
	cout << "\nВидеокарта:                     " << name;
}
pair<int, string> VideoAdapter::EnterVideo()
{
	printf("\nВведите число TF:");
	scanf("\n%f", &TF);
	cin.ignore(32767, '\n');
	printf("Введите название видеокарты:");
	getline(cin, name);
	this->TF = TF;
	this->name = name;
	return make_pair(TF, name);
}
pair<int, string> VideoAdapter::correctVideo(int TF, string name)
{
	int n;

	printf("1.Название\n2.Частота процессора\n");
	printf("\nВыберите поле,которое хотите редактировать:");
	scanf("%d", &n); system("cls");
	switch (n)
	{
	case 1:
	{
		cin.ignore(32767, '\n');
		printf("Введите название видеокарты:");
		getline(cin, name);
		this->name = name; break;
	}
	case 2:
		printf("\nВведите число TF:");
		scanf("\n%d", &TF);
		this->TF = TF;
		break;

	}
	return make_pair(this->TF, this->name);
}