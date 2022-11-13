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
	cout << "\n����������:                     " << name;
}
pair<int, string> VideoAdapter::EnterVideo()
{
	printf("\n������� ����� TF:");
	scanf("\n%f", &TF);
	cin.ignore(32767, '\n');
	printf("������� �������� ����������:");
	getline(cin, name);
	this->TF = TF;
	this->name = name;
	return make_pair(TF, name);
}
pair<int, string> VideoAdapter::correctVideo(int TF, string name)
{
	int n;

	printf("1.��������\n2.������� ����������\n");
	printf("\n�������� ����,������� ������ �������������:");
	scanf("%d", &n); system("cls");
	switch (n)
	{
	case 1:
	{
		cin.ignore(32767, '\n');
		printf("������� �������� ����������:");
		getline(cin, name);
		this->name = name; break;
	}
	case 2:
		printf("\n������� ����� TF:");
		scanf("\n%d", &TF);
		this->TF = TF;
		break;

	}
	return make_pair(this->TF, this->name);
}