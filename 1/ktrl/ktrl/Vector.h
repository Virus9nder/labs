template<class T> // T - �������� ������� 
class Vector
{
public:
	Vector();
	Vector(int n) { data = new T[n]; size = n; }; // ����������� ������ vector 
	~Vector() // ���������� 
	{
		delete[] data;
	}

	T *data; // ������ ����������� ������� 
	int size; // ����������� �������
	
	int &operator +=(int s)//�������-����
	{
		
		size++;
		return size;
	}
	
	friend Vector operator + (Vector &R, int s)//�������������
	{				R.size++;		return R;	}

};
