#include "Figure.h"
#include <iostream>
std::istream& operator>>(std::istream& is, Figure& f) {
	f.read(is);
	return is;
}
std::ostream& operator<<(std::ostream& os, const Figure& f) {
	f.print(os);
	return os;
}