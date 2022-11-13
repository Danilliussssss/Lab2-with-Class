#pragma once
using namespace std;
#include <string>
#include <iostream>
static int Price;
static  int headcounter;
class Headphone
{
	string name;
	int mAh;
public:	Headphone();
public:	Headphone(int mAh, string name);
public:pair<int, string> EnterHeadphone();
public:void PrintHeadphone();
public:pair<int, string> correctHeadphone(int mAh, string name);
public:~Headphone();
};
