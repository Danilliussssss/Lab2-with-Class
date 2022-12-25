#pragma once
using namespace std;
#include <string>
#include <malloc.h>
#include <iostream>
#include <stdio.h>
#include"Processor.h"
#include"Gadget.h"

class Smartphone  :public Gadget
{
protected :
	int Hz;
	string TypeScreen;
public:
	Smartphone() = default;
Processor pr;
pair<string, int> EnterSmartphone();
void PrintSmartphone();
void InitSmartphone(Smartphone& S);
};
