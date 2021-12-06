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
	cout << "Введите радиус окружности:\n";
	cin >> *c;
	cout << "Введите ширину и высоту прямоугольника:\n";
	cin >> *r;
	cout << "Введите два основания и две стороны трапеции:\n";
	cin >> *t;
	int s=-1;
	while (s) {
		cout << "Выберите пункт меню:\n";
		cout << "1. Вывести периметр окружности.\n";
		cout << "2. Вывести площадь окружности.\n";
		cout << "3. Вывести периметр прямоугольник.\n";
		cout << "4. Вывести площадь прямоугольника.\n";
		cout << "5. Вывести периметр трапеции.\n";
		cout << "6. Вывести площадь трапеции.\n";
		cout << "7. Вывести информацию об окружности.\n";
		cout << "8. Вывести информацию о прямоугольнике.\n";
		cout << "9. Вывести информацию о трапеции.\n";
		cout << "0. Завершить работу программы.\n";
		cin >> s;
		switch (s) {
		case 1:
			cout << "Периметр окружности: " << c->getPerimeter() << '\n'; break;	
		case 2:
			cout << "Площадь окружности: " << c->getSquare()<<'\n'; break;
		case 3:
			cout << "Периметр прямоугольника: " << r->getPerimeter() << '\n'; break;
		case 4:
			cout << "Площадь прямоугольника: " << r->getSquare() << '\n'; break;
		case 5:
			cout << "Периметр трапеции: " << t->getPerimeter() << '\n'; break;
		case 6:
			cout << "Площадь трапеции: " << t->getSquare() << '\n'; break;
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