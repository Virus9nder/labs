#include "StdAfx.h"
#include "susha.h"
#include <iostream>
using namespace std;
susha::susha(void)
{
	cout << "���������� ����������� ����" << endl;
}
void susha::setsize(int size)
{
	this->size = size;
}
void susha::getsize()
{
	cout << " ������ " << this->size << endl;
}
susha::~susha(void)
{
	cout << "���������� ���������� ����" << endl;
}