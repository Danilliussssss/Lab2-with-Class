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
Notebook() = default;
Notebook(string name);
static void Counter();
  ~Notebook();
void	  SwipeNotebook(int mAh, string name);
	pair<int, string> EnterNotebook();
	  void PrintNotebook();
pair<int, string> correctNotebook(int mAh, string name);
};




