#include "Processor.h"
#pragma warning(disable : 4996)
Processor::Processor()
{
	GHz = 0;
	name = "";
}
Processor::Processor(float GHz,string name)
{   
	 this->GHz=GHz ;
	this->name=name  ;
}
void Processor::PrintProcessor(float GHz,string name)
{ 
	cout <<"\n������� ����������:           " << GHz;
	cout <<"\n���������:                    " <<  name;
}
void Processor::EnterProcessor(float GHz, string name)
{
	printf("\n������� ������� ����������:");
	scanf("\n%f", &GHz);
	cin.ignore(32767, '\n');
	printf("������� �������� ����������:");
	getline(cin, name);
	this->GHz = GHz;
	this->name = name;
}