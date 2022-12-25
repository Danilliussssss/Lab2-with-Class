#pragma once
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
static int VideoCounter;
static int VideoPrice;
class VideoAdapter
{
	int TF;
	string name;
public:
	VideoAdapter();
	void InitVideo(VideoAdapter A);
	void PrintVideo();
	VideoAdapter& EnterVideo();
	
	~VideoAdapter();
};

