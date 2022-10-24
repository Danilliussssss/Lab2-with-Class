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
	cout <<"\nЧастота процессора:           " << GHz;
	cout <<"\nПроцессор:                    " <<  name;
}
void Processor::EnterProcessor(float GHz, string name)
{
	printf("\nВведите частоту процессора:");
	scanf("\n%f", &GHz);
	cin.ignore(32767, '\n');
	printf("Введите название процессора:");
	getline(cin, name);
	this->GHz = GHz;
	this->name = name;
}