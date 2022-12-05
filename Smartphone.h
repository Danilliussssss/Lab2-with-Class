#pragma once
using namespace std;
#include <string>
#include <malloc.h>
#include <iostream>
#include <stdio.h>
#include"Processor.h"
static  int counter;
static int priceSmartphone;
class Smartphone
{
	string name;
	int mAh;
public: Processor pr;
public:Smartphone();
void InitSmartphone(int mAh, string name);
	  pair<int, string>  EnterSmartphone();
	  void  printSmartphone();
	  static void PrintCounter();
	  friend void Ctr(Smartphone A);
	  ~Smartphone();
	  
};
