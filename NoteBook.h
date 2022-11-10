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
public:	VideoAdapter a;
public:Notebook() = default;
public:Notebook(string name);
public:  ~Notebook();
public:void	  SwipeNotebook(int mAh, string name);
public:	pair<int, string> EnterNotebook();
public:	  void PrintNotebook();
public: pair<int, string> correctNotebook(int mAh, string name);
};




