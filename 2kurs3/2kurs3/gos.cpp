#include "StdAfx.h"
#include "gos.h"
#include <iostream>
using namespace std;
gos::gos(void)
{
	cout << "���������� ����������� �����������" << endl;
}

void gos::setnas(int nas)
{
	this->nas = nas;
}

void gos::getnas()
{
	cout << "���������� �����: " << this->nas <<" ����� �������"<< endl;
}

gos::~gos(void)
{
	cout << "���������� ���������� �����������" << endl;
}