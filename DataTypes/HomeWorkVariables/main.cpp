#include<iostream>
using namespace std;

//#define TASK_1
//define - ����������
//definition - �����������

int function1;//���������� ����������
int function2();//���������� �������.
int sum(int a, int b)
{
	int res = a + b;
	return res;
}

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined TASK_1
	//���� ���������� TASK_1, �� ������������� ��� ����� "�����" �����������.
	double money;
	cout << "������� �����: "; cin >> money;
	cout << money << endl;
	int grn = money;
	int cop = (money - grn) * 100;
	cout << grn << " ���.\t" << cop << " ���." << endl;;
#endif

	//cout << sum(2, 3) << endl;;

	cout << typeid('+').name() << endl;	//���������� ���������
	cout << "+" << endl;	//��������� ���������
}