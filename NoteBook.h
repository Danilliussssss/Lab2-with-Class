#pragma once

#include "Processor.h"
#include "VideoAdapter.h"
#include "Gadget.h"
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

class Notebook:public  Gadget
{
protected:
	string ColorKeyboard;
	int Inch;
public:
	VideoAdapter a;
	pair<string,int> EnterNotebook();
	void PrintNotebook();
	void InitGadget(Notebook N);
	friend void FileForGadget(Gadget A);
	  
};




