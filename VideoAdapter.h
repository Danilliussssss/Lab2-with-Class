#pragma once
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
class VideoAdapter
{
	int TF;
	string name;
public:
	VideoAdapter();
	void InitVideo(int TF, string name);
	void PrintVideo();
	pair<int, string> EnterVideo();
	pair<int, string> correctVideo(int TF, string name);
};

