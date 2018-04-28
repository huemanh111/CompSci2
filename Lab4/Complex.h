#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>
#include <sstream>

class Complex {
public:
   Complex(double = 0.0, double = 0.0); // default constructor
   Complex operator + (const Complex&) const;
   Complex operator - (const Complex&) const;
   Complex operator * (const Complex&) const;
//   ostream& operator << (ostream&, const Complex&) const;
   std::string toString() const;  // return string representation
   void setComplexNum(double, double); // set complex number 
private:
   double real;
   double imag;
}; 

//ostream& operator << (ostream&, const Complex&) const;

#endif

