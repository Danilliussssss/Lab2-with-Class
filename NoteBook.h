#pragma once
using namespace std;
#include"VideoAdapter.h"
#include <string>
#include <iostream>
#include <stdio.h>


static  int NoteCounter;
class Notebook
{
	string name;
	int mAh;
public:
	VideoAdapter a;
Notebook() ;
void InitNotebook(string Name, int mAH);
  ~Notebook();
	pair<int, string> EnterNotebook();
	  void PrintNotebook();
	  friend void FileForNotebook(Notebook A);
	  
};




