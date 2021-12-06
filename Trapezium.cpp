#include "Trapezium.h"
#include <iostream>
Trapezium::Trapezium() {
	args = new double[4];
	args[0] = 0;
	args[1] = 0;
	args[2] = 0;
	args[3] = 0;
}
Trapezium::Trapezium(double b1, double b2, double s1, double s2) {
	args = new double[4];
	args[0] = b1;
	args[1] = b2;
	args[2] = s1;
	args[3] = s2;
};
double Trapezium::getSquare() const {
	double height = sqrt(args[2] * args[2] - ((args[0] - args[1]) * (args[0] - args[1]) + args[2] * args[2] - args[3] * args[3]) / (2 * (args[1] - args[0])) * ((args[1] - args[0]) * (args[0] - args[1]) + args[2] * args[2] - args[3] * args[3]) / (2 * (args[0] - args[1])));
	return (args[0] + args[1]) * height / 2;
}
double Trapezium::getPerimeter() const {
	return args[0] + args[1] + args[2] + args[3];
}
void Trapezium::read(std::istream& is) {
	is >> args[0] >> args[1] >> args[2] >> args[3];
}
void Trapezium::print(std::ostream& os) const {
	os << "������ ���������: " << args[0] << "\n������ ���������: " << args[1] << "\n������ ������� �������: " << args[2] << '\n';
	os << "������ ������� �������: " << args[3]<<"\n�������: "<<getSquare()<<"\n��������: "<<getPerimeter()<<'\n';
}
std::istream& operator>>(std::istream& is, Trapezium c) {
	c.read(is);
	return is;
}
std::ostream& operator<<(std::ostream& os, const Trapezium& c) {
	c.print(os);
	return os;
}