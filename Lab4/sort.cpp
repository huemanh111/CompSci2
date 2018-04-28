#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//prototypes
void sort(double *num1, double *num2, double *num3); //pointer
void sort2(double &num1, double &num2, double &num3); //address
void swap(double *x, double *y);
void swap2(double &x, double &y);

int main()
{
	double a, b, c;
	a = 2, b = 4, c = 1;

	cout << a << ", " << b << " , " << c << endl << endl;

	sort2(a, b, c); // test for (a)
	cout << a << ", " << b << " , " << c << endl << endl;

	a = 2, b = 4, c = 1;
	cout << a << ", " << b << " , " << c << endl << endl;

	sort(&a, &b, &c); // test for (b)
	cout << a << ", " << b << " , " << c << endl;


	return 0;
}


void sort(double *num1, double *num2, double *num3)
{
	if (*num1 < *num2) {
        	swap(num1, num2);
	}
    	if (*num1 < *num3) {
        	swap(num1, num3);
    	}
    	if (*num2 < *num3) {
        	swap(num2, num3);
    }
}

void sort2(double &num1, double &num2, double &num3)
{
    if (num1 < num2) {
        swap2(num1, num2);
    }
    if (num1 < num3) {
        swap2(num1, num3);
    }
    if (num2 < num3) {
        swap2(num2, num3);
    }
}

void swap(double *x, double *y)
{
    double temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

void swap2(double &x, double &y)
{
    double temp;

    temp = x;
    x = y;
    y = temp;
}
