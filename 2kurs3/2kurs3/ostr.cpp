#include "StdAfx.h"
#include "ostr.h"
#include <iostream>
using namespace std;
ostr::ostr(void)
{
	cout << "���������� ����������� �������" << endl;
}
void ostr::setname(char *name)
{
	this->name = name;
}
void ostr::getname()
{
	cout << " �������� �������: " << this->name << endl;
}
ostr::~ostr(void)
{
	cout << "���������� ���������� �������" << endl;
}