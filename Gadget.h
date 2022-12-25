#pragma once
#include <string>
#include <malloc.h>
#include <iostream>
#include <stdio.h>
using namespace std;
static int counter=0;
class Gadget
{
public:
		int mAh;
		 string name;
public:
	 Gadget();
	pair<string,int> Enter();
	void InitGadget(int mAhParameter, string nameParameter);
	virtual void Print();
	Gadget operator++(int);
	Gadget operator++();
	friend void FileForGadget(Gadget A);
	friend bool comp(Gadget S1, Gadget S2);
	static void PrintCounter();
	~Gadget();
};
