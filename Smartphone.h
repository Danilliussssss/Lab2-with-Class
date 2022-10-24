#pragma once
using namespace std;
#include <string>
#include <malloc.h>
#include <iostream>
#include <stdio.h>
static  int counter;
class Smartphone
{
public:string name;
	int mAh;
	
public:Smartphone() ;
	public:Smartphone(int mAh, string name);
void printSmartphone();
void EnterSmartphone(int mAh, string name);
void correct(int mAh, string name);
~Smartphone();
};


