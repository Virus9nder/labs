/*����� - ���� Stack. ������������� ����������� ���������
��������: + - �������� ������� � ����; -- - ������� ������� ��
�����; bool() - ��������, ������ �� ����; > - �����������
������ ����� � ������.*/

#include <iostream>
#include "windows.h"
#include "Stack.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Stack<int> St;
	Stack<int> St1;
	//St1.push(5);
	St.push(1);
	St + 4;
	if (!St.operator bool())cout << "\n���� �� ������\n";;
	St.push(5);
	St.push(4);
	St.push(10);
	St.push(7);
	St.push(10);
	St.push(7);
	St + 7;
	St> St1;
	int da = St.prosto(St);
	
	for (int i = 0; i < da;i++)St--;
	cout << '\n';

	cout << "�������� ����� St1: ";
	St1.print();
	St1--;
	
	
	return 0;
}