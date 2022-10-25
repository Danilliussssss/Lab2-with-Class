#pragma once
using namespace std;
#include <string>
#include <iostream>
static  int headcounter;
class Headphone
{
public:string name;
	int mAh;
    public:	Headphone();
public:	Headphone(int mAh, string name);
public:void EnterHeadphone(int mAh, string name);
public:void PrintHeadphone(int mAh, string name);
public:void correctHeadphone(int mAh, string name);
public:~Headphone();
};
