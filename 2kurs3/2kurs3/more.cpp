#include "StdAfx.h"
#include "more.h"
#include <iostream>
using namespace std;
more::more(void)
{
	cout << "���������� ����������� ����" << endl;
}
void more::setsize(int size)
{
	this->size = size;
}
void more::getsize()
{
	cout << " ���� ����������  " << this->size <<" % "<< endl;
}
more::~more(void)
{
	cout << "���������� ���������� ����" << endl;
}