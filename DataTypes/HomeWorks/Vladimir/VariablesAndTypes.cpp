#include<iostream>
using namespace std;

//��� ��� ����� ������� �������:
//#define TASK1
//#define TASK2
//#define TASK3
//#define TASK4

void main()
{
 
	setlocale(LC_ALL, "");
#if defined TASK1
	double money;
	cout << "������� �����:\n"; cin >> money;
	int grn = money;
	int kop = (money - grn) * 100;
	cout << grn << "���.";
	cout << kop << "���.\n";
#endif

#if defined TASK2
	double price_notebook;
	int count_notebook;
	double price_pen;
	int count_pen;
    
	cout << "���������� ��������� �������.\n";
	cout << "������� ������:\n";
	cout << "���� �������:";
	cin>> price_notebook;
	cout << "���������� ��������:";
	cin >> count_notebook;
	cout << "���� ����������:";
	cin>> price_pen;
	cout << "���������� ����������:";
	cin>> count_pen;
	double total_price = price_notebook * count_notebook + price_pen * count_pen;
	cout << "����� ���������:" << total_price<<"���\n";
	
#endif

#if defined TASK3
	double PriceNotebook;
	double PriceCover;
	int count_set;

	cout << "���������� ��������� �������.\n";
	cout << "������� �������� ������:\n";

	cout << "���� �������:";
	cin >> PriceNotebook;
	cout << "���� �������:";
	cin >> PriceCover;
	cout << "���������� ����������:";
	cin >> count_set;
	double TotalPrice = (PriceNotebook + PriceCover)*count_set;
	cout << "����� ���������:" << TotalPrice << "���";
#endif

#if defined TASK4
	int distance;
	double fuel_consumption;
	double Fuel_price;

	cout << "������ ��������� ������� �� ���� � �������.\n";
	cout << "������� ������.\n";
	cout << "����������:"; cin >> distance;

	cout << "���� �������:"; cin >> fuel_consumption;
	cout << "������ �������:"; cin >> Fuel_price;
	double TotalPriceOfDistance = (distance * 2) * (fuel_consumption / 100) * Fuel_price;
	cout << "������� �� ���� � ������� ��������� � " << TotalPriceOfDistance << "���";
#endif
}