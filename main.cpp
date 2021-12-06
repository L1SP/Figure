#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Trapezium.h"
#include "Figure.h"
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	Figure* c = new Circle;
	Figure* r = new Rect;
	Figure* t = new Trapezium;
	cout << "������� ������ ����������:\n";
	cin >> *c;
	cout << "������� ������ � ������ ��������������:\n";
	cin >> *r;
	cout << "������� ��� ��������� � ��� ������� ��������:\n";
	cin >> *t;
	int s=-1;
	while (s) {
		cout << "�������� ����� ����:\n";
		cout << "1. ������� �������� ����������.\n";
		cout << "2. ������� ������� ����������.\n";
		cout << "3. ������� �������� �������������.\n";
		cout << "4. ������� ������� ��������������.\n";
		cout << "5. ������� �������� ��������.\n";
		cout << "6. ������� ������� ��������.\n";
		cout << "7. ������� ���������� �� ����������.\n";
		cout << "8. ������� ���������� � ��������������.\n";
		cout << "9. ������� ���������� � ��������.\n";
		cout << "0. ��������� ������ ���������.\n";
		cin >> s;
		switch (s) {
		case 1:
			cout << "�������� ����������: " << c->getPerimeter() << '\n'; break;	
		case 2:
			cout << "������� ����������: " << c->getSquare()<<'\n'; break;
		case 3:
			cout << "�������� ��������������: " << r->getPerimeter() << '\n'; break;
		case 4:
			cout << "������� ��������������: " << r->getSquare() << '\n'; break;
		case 5:
			cout << "�������� ��������: " << t->getPerimeter() << '\n'; break;
		case 6:
			cout << "������� ��������: " << t->getSquare() << '\n'; break;
		case 7:
			cout << *c; break;
		case 8:
			cout << *r; break;
		case 9:
			cout << *t; break;
		default:
			break;
		}
	}
	delete c;
	delete r;
	delete t;
	return 0;
}