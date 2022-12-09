#pragma once
using namespace std;
#include <string>
#include <iostream>
static  int headcounter=0;
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
friend void FileForHeadphone(Headphone A);
~Headphone();


};

