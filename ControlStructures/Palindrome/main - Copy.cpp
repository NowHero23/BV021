#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;	//�����, �������� � ����������
	int reverse = 0;	//��������� �����, ���������� �������� (����� �������).
	cout << "������� �����: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
}