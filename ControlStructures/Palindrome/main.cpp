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
		reverse *= 10;	//120
		reverse += buffer % 10;
		buffer /= 10;	//123
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "��� ������ � ����� ��� :-(" << endl;
	}
}