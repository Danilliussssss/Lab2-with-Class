#pragma once
using namespace std;
#include <string>
#include <iostream>

class Processor
{
public:float GHz;
	  string name;
public:Processor();
public:void InitProcessor(float GHz, string name);
public:	  void  PrintProcessor();
public:pair<int, string> EnterProcessor();
public: pair<int, string> correctProcessor(int mAh, string name);
};
