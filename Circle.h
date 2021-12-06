#pragma once
#include "Figure.h"
#include <iostream>
class Circle: public Figure
{
	friend std::istream& operator>>(std::istream& is, Circle c);
	friend std::ostream& operator<<(std::ostream& os, const Circle c);
public://radius=args[0]
	Circle() { args = new double[1]; args[0] = 0; };
	Circle(double r) { args = new double[1]; args[0] = r; };
	~Circle() {};
	double getSquare() const override;
	double getPerimeter() const override;
	void read(std::istream& is) override;
	void print(std::ostream& os) const override;
};

