#pragma once
using namespace std;
#include <string>
#include <malloc.h>
#include <iostream>
#include <stdio.h>
#include"Processor.h"
static  int counter;
class Smartphone
{
	string name;
	int mAh;
public: Processor pr;
public:Smartphone();
public:Smartphone(int mAh, string name);
	  void printSmartphone();
	  pair<int, string>  EnterSmartphone();
	  pair<int, string> correct(int mAh, string name);
	  ~Smartphone();
};
