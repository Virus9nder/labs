#include <iostream> 
#include "windows.h"
#include "Vector.h" // ������ ������ "������" 
using namespace std;
int main(void)
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Vector<int> X(5); //������� ������ ������ "������������� ������" 
	X += 4; //����������� �����������

	
	cout <<"����������� �����: "<< X.size<<endl;
	X += 4;
	X + 4;
	cout << "����������� �����: " << X.size << endl;
	system("pause");
	return 0;
}
