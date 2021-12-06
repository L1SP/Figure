#include "Rectangle.h"
#include <iostream>
double Rect::getSquare() const {
	return args[0] * args[1];
}
double Rect::getPerimeter() const {
	return args[0] * 2 + args[1] * 2;
}
void Rect::read(std::istream& is) {
	is >> args[0] >> args[1];
}
void Rect::print(std::ostream& os) const {
	os << "������: " << args[0] << "\n������: " << args[1] << "\n�������: " << getSquare() << "\n��������: " << getPerimeter() << '\n';
}
std::istream& operator>>(std::istream& is, Rect r) {
	r.read(is);
	return is;
}
std::ostream& operator<<(std::ostream& os, const Rect& r) {
	r.print(os);
	return os;
}