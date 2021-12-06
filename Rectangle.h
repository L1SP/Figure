#pragma once
#include <iostream>
#include "Figure.h"
class Rect: public Figure
{
	friend std::istream& operator>>(std::istream& is, Rect r);
	friend std::ostream& operator<<(std::ostream& os, const Rect& r);
public://width=args[0], height=args[1];
	Rect() { args = new double[2]; args[0] = 0; args[1] = 0; };
	Rect(double w, double h) { args = new double[2]; args[0] = w; args[1] = h; };
	~Rect() {};
	double getSquare() const override;
	double getPerimeter() const override;
	void read(std::istream& is) override;
	void print(std::ostream& os) const override;
};

