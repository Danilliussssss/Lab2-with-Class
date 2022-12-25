#pragma once
#include "Gadget.h"

#include <string>
#include <iostream>
using namespace std;
class Headphone:public Gadget
{
protected:
	int Radius;
	string Color;
public:
	Headphone()=default;
	pair<string, int> EnterHeadphone();
	void InitHeadphone(Headphone &H);
	void Print() override;
	
};

