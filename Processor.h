#pragma once
using namespace std;
#include <string>
#include <iostream>

class Processor
{
public:float GHz;
	string name;
public:Processor() ;
public:	 Processor(float GHz,string name);
public:	  void  PrintProcessor(float GHz, string name);
public:void EnterProcessor(float GHz, string name);
};

