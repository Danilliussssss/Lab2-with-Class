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
pair<int, string> EnterHeadphone();
void InitHeadphone(int mAH, string Name);
Headphone operator++(int);
Headphone operator++();
void PrintHeadphone();
~Headphone();


};

