#pragma once
using namespace std;
#include <string>
#include <iostream>
#include <stdio.h>

static  int NoteCounter;
class Notebook
{
public:
string name;
	  int mAh;
	  class VideoAdapter
	  {
	  public: string names;
		  int mHz;
	  public:VideoAdapter();
	  }Video; 
public:Notebook() = default;
public:Notebook(string name);
public:  ~Notebook();
public:void	  SwipeNotebook(int mAh, string name, string names, int mHz);
public:	  void EnterNotebook(int mAh, string name, string names, int mHz);
public:	  void PrintNotebook(int mAh, string name, string names, int mHz);
public: void correctNotebook(int mAh, string name, string names, int mHz);
};

