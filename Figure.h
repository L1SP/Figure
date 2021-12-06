#pragma once
#include <iostream>
class Figure
{
    friend std::istream& operator>>(std::istream& is, Figure& f);
    friend std::ostream& operator<<(std::ostream& os, const Figure& r);
protected:
    double* args=0;
public:
    virtual double getSquare() const = 0 ;
    virtual double getPerimeter() const = 0;
    virtual void print(std::ostream& os) const = 0;
    virtual void read(std::istream& is) = 0;
};

