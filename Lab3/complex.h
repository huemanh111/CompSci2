#include <cmath>

class Complex {
	public:
	Complex(double r=0.0, double i=0.0)
	{
		this->r=r;
		this->i=i;
	}
	Complex add(Complex other)
	{
		return Complex(r+other.r,i+other.i);
	}
	Complex subtract(Complex other)
	{
		return Complex(r-other.r, i-other.i);
	}
	Complex multiply (Complex other)
	{
		return Complex(r*other.r, i*other.i);
	}

	void setComplexNumber(double r, double i)
	{
		new Complex(r,i);
	}
	void stringPrint()
	{
		cout << "(" << r << "," << i << "i) " << endl;
	}
	private:
	double r, i;
};
