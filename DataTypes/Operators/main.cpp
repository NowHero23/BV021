#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

//#define TERNARY_OPERATOR
//#define ARITHMETICAL_OPERATORS
//#define ASSIGNMENT_OPERATOR	//�������� ������������
//#define INCREMENT_DECREMENT
//#define COMPAUND_ASSIGNMENTS
#define TYPE_CONVERSIONS

void main()
{
	setlocale(LC_ALL, "");
	//5;
	//int a = 2;
	//a;	//������� ���������, ������� �� �������� ��������.
	//;;;	//������ ���������
	//a + 5;	//������� ���������, ��� ������� �� ����� ��������:  '+'.
	//int b = 5 - a;	//������� ���������, ������� �� ���� ��������: =, -
	//int c = a + b * 3;	//��������� ����������
	//a + b + c;	//��������������� ���������� ���������� ����� ��������� ������� 
	//			//�� ���������� � ���������� �����������.
	//			//��������������� ������ "����� �� �����" � "������ ������".
	//cout << "Hello" << endl;
	////////////////////////////////////////
	//��������� ������:
	//������� - ��������� �������� ��� ����� ���������
	//�������� - ����� �������� ������ � ����� ����������
	//��������� - �������� ������ � ����� ����������
	/*
	------------------------------
	3;
	-3;	//������� '-'
	5-3;//�������� '-';
	5*3;
	*3;
	------------------------------
	*/
#ifdef TERNARY_OPERATOR
	int t;
	cout << "������� ����������� �������: "; cin >> t;
	if (t > 0)
	{
		cout << "�� ����� �����!";
	}
	else
	{
		cout << "�� ����� �����!";
	}
	if (t > 0)cout << "�� ����� �����!"; else cout << "�� ����� �����!";
	(t > 0) ? cout << "�� ����� �����!" : cout << "�� ����� �����!";
	cout << (t > 0 ? "�����" : "�����") << endl;
#endif // TERNARY_OPERATOR

#if defined ARITHMETICAL_OPERATORS
	//Unary: +, -;
	//Binary:+, -, *, /, %;
	//% - ������� �� �������.
	cout << 23 / 5 << endl;
	cout << 23 % 5 << endl;
	cout << 5 / 23 << endl;
	cout << 5 % 23 << endl;
#endif

#if defined ASSIGNMENT_OPERATOR//	= - ���������
	/*int a = 2;
	int b = 5 - a;*/

	int a, b, c;
	a = b = c = 0;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
#endif

#ifdef INCREMENT_DECREMENT
	//(++)  
	//int i = 0;
	//++i;	//Prefix increment
	//i++;	//Postfix increment
	//--i;	//Prefix decrement
	//i--;	//Suffix decrement
	////++++++++++++++++++++++++++++++++++++++++++++i;
	//int j = ++i;
	//cout << i << endl;
	//cout << j << endl;

	/*int i = 3;
	i = ++i + i++;
	cout << (bool)i << endl;*/
	int i = 3;

	i = ++i *= 2;
	i += i++ + 1 + i;
	cout << i << endl;
#endif // INCREMENT_DECREMENT

#if defined COMPAUND_ASSIGNMENTS
	int a = 2;
	int b = 3;
	a = a + b;	//
	a += b;
	//-----------------
	a = a - b;
	a -= b;
	//-----------------
	a *= b;
	a /= b;
	a %= b;
#endif

	//int a = 43;
	//cout << a << endl;
	//cout << (char)a << endl;	//����� �������������� ���������� 'a' � ��� ������ char
	////cout << a << endl;
	//cout << typeid(a).name() << endl;
	//cout << int('@') << endl;
	//(type)value;	//C-like notation (C-�������� ����� ������)
	//type(value);	//Functional notation (�������������� ����� ������)

	//			������� �������������� �����:
	int a = 2;	//no conversions
	int b = 3.5;//�������������� �� �������� � �������� � ������� ������
	cout << b << endl;
	int c = 5.;	//�������������� �� �������� � �������� ��� ������ ������
	double e = 7;//�������������� �� �������� � ��������.

	cout << double(7 / 2) << endl;
}