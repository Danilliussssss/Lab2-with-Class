#pragma once
using namespace std;
#include <string>
#include <iostream>

static  int headcounter;
class Headphone
{
	string name;
	int mAh;
public:	Headphone();
public:	Headphone(int* mAh, string* name);
public:void PrintHeadphone();
	  int operator++(int headcounter);
public:pair<int, string> correctHeadphone(int *mAh, string *name);
public:~Headphone();
	  int* EntermAh();
	  string* EnterName();

};
