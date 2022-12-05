#pragma once
using namespace std;
#include <string>
#include <iostream>

class Processor
{
    float mHz;
	  string name;
	  int Core;
	  int k;
public:Processor();
void InitProcessor(float mHZ, string name,int K);
	  float* CreateCore(int k);
	  int operator++(int);
	  int operator++();
	  float& InitCore(float pointer );
  void  PrintProcessor();
pair<float, string> EnterProcessor();
int EnterCore();
};
