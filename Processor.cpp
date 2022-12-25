#include "Processor.h"
#pragma warning(disable : 4996)
Processor::Processor()
{
	mHz = 0;
	name = "";
}
void Processor::InitProcessor(float mHZ, string Name,int K)
{
	mHz = mHZ;
	name = Name;
	k = K;
}
int Processor::operator++(int)
{
	int c = k;
	k++;
	return c;
}
int Processor::operator++()
{
	k++;
	return k;
}
float* Processor::CreateCore(int k)
{
	return new float[k];
}
float& Processor::InitCore(float pointer)
{
	pointer = mHz;
	return pointer;
}
void Processor::PrintProcessor()
{
	printf("\n������� ����������:           %f*%d",mHz,k);
	cout <<"\n���������:                    " << name;
	
}
pair<float, string> Processor::EnterProcessor()
{
	printf("\n������� ������� ����������:");
	scanf("\n%f", &mHz);
	cin.ignore(32767, '\n');
	printf("������� �������� ����������:");
	getline(cin, name);
	return make_pair(mHz, name);
}
int Processor::EnterCore()
{
	printf("������� ���-�� ���� ����������:");
	scanf("%d", &k);
	return k;
}