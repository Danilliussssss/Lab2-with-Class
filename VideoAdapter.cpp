#include "VideoAdapter.h"

#pragma warning(disable : 4996)
VideoAdapter::VideoAdapter()
{
	VideoCounter++;
}
void VideoAdapter::InitVideo(VideoAdapter A)
{
	TF = A.TF;
	name =A.name ;
	
}
void VideoAdapter::PrintVideo()
{
	cout << "\nTF:                             " << TF;
	cout << "\n����������:                     " << name;
}
VideoAdapter& VideoAdapter::EnterVideo()
{
	printf("\n������� ����� TF:");
	scanf("\n%f", &TF);
	cin.ignore(32767, '\n');
	printf("������� �������� ����������:");
	getline(cin, name);
	return *this;
}

VideoAdapter::~VideoAdapter()
{
	VideoCounter--;
}