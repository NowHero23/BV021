/*
------------------------------------------------------



for(start; stop; step)
{
	group-of-statements;
}



------------------------------------------------------
*/
#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	/*while (true)
	{
		cout << "Hello World";
	}*/

	/*for (;;)
	{
		cout << "Hello World";
	}*/
	//cout << UINT_MAX << endl;
	int n;	//	���������� ��������
	double factorial = 1;
	cout << "������� ���������� ��������: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		factorial *= i;
		cout << factorial << ";\n";
	}
	cout << endl;
}