#include <iostream>
#include <cmath>
#include <sstream> //needed for ostringstream
#include "Complex.h"

using namespace std;

Complex :: Complex(double realNum, double imagNum)
	:real(realNum), imag(imagNum){ }

Complex Complex :: operator +(const Complex &temp) const {
    	return Complex(real + temp.real, imag + temp.imag);
}

Complex Complex :: operator -(const Complex &temp) const {
    	return Complex(real - temp.real, imag - temp.imag);
}

Complex Complex :: operator *(const Complex &temp) const {
    	return Complex(real * temp.real - imag * temp.imag,
			real * temp.imag + imag * temp.real);
}
/*
ostream& Complex :: operator <<(ostream& os, const Complex& n) {
	os << n.toString();
	return os;
}*/

string Complex::toString() const {
	ostringstream output;
	output << "(" << real << ", " << imag << ")";
	return output.str();
}

void Complex::setComplexNum(double realP, double imagP) {
	real = realP;
	imag = imagP;
}
/*
ostream& operator <<(ostream& os, const Complex& n) {
	os << n.toString();
	return os;
}*/
