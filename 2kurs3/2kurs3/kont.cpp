#include "StdAfx.h"
#include "kont.h"
#include <iostream>
using namespace std;
kont::kont(void)
{
	cout << "���������� ����������� ����������" << endl;
}
void kont::setname(char *name)
{
	this->name = name;
}
void kont::getname()
{
	cout << "�������� ����������: " << this->name << endl;
}

kont::~kont(void)
{
	cout << "���������� ���������� ����������" << endl;
}