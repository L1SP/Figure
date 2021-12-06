#include "Circle.h"
#include <iostream>
double Circle::getSquare() const {
	return args[0] * args[0] * 3.14;
}
double Circle::getPerimeter() const {
	return 2 * 3.14 * args[0];
}
void Circle::read(std::istream& is) {
	std::cin >> args[0];
}
void Circle::print(std::ostream& os) const {
	std::cout << "Радиус: " << args[0] << "\nПлощадь: " << getSquare() << "\nПериметр: " << getPerimeter() << '\n';
}
std::istream& operator>>(std::istream& is, Circle c) {
	c.read(is);
	return is;
}
std::ostream& operator<<(std::ostream& os, const Circle c) {
	c.print(os);
	return os;
}
