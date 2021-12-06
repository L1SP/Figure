#pragma once
#include "Figure.h"
#include <iostream>
class Trapezium : public Figure 
{
	friend std::istream& operator>>(std::istream& is, Trapezium c);
	friend std::ostream& operator<<(std::ostream& os, const Trapezium& c);
public://base1=args[0], base2=args[1], side1=args[2], side2=args[3]
	Trapezium();
	Trapezium(double b1, double b2, double s1, double s2);
	~Trapezium() {};
	double getSquare() const override;
	double getPerimeter() const override;
	void read(std::istream& is) override;
	void print(std::ostream& os) const override;
};