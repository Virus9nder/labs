#include "StdAfx.h"
#include "clas.h"
#include <iostream>
using namespace std;
int gos::counter = 0;

	void more::setsize(int size)
	{
		this->size = size;
	}
	void more::getsize()
	{
		cout << " ���� ����������  " << this->size << " % " << endl;
	}
	more::~more(void)
	{
		//cout << "���������� ���������� ����" << endl;
	}


	kont::kont(void)
	{
		//cout << "���������� ����������� ����������" << endl;
		
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
		//cout << "���������� ���������� ����������" << endl;
		
	}
	kont::F1::F1()
	{
		
	}
	int kont::F1::setChislo(int C)
	{
		this->Chislo = C;
		return C;
	}
	
	bool kont::Check()
	{
		if (S.getChislo() > 10){
			cout << "����� ������ 10\n";
			return 1;
		}
		else
			cout << "����� ������ 10\n";
		return 0;
	}
	
	void kont::F1::Vizov(kont &obj)
	{

		obj.VivodStr();
	}






	susha::susha(void)
	{
		//cout << "���������� ����������� ����" << endl;
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
	//	cout << "���������� ���������� ����" << endl;
	}



	gos::gos(void)
	{
	//	cout << "���������� ����������� �����������" << endl;
		counter++;
	}
	void gos::setnas(int nas)
	{
		this->nas = nas;
	}
	void gos::getnas()
	{
		cout << "���������� �����: " << this->nas << " ����� �������" << endl;
	}
	gos::~gos(void)
	{
	//	cout << "���������� ���������� �����������" << endl;
		counter--;
	}




	ostr::ostr(void)
	{
		//cout << "���������� ����������� �������" << endl;
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
		//cout << "���������� ���������� �������" << endl;
	}


















