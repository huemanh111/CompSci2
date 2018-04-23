#include<cmath>


class Quadratic
{

	public:
	friend class Complex;
	float setCoef(float a, float b, float c)
	{
		this->a1 = a;
		this->b2 = b;
		this->c3 = c;
	}
	void solve()
	{
		float d = b2 * b2 - 4 * a1 * c3;
		float r1, r2;
		if (d>0) {
			r1 = ((-b2) + sqrt(d) ) / ( 2*a1 );
			r2 = ((-b2) - sqrt(d) ) / ( 2*a1 );
			cout << "Roots are ( " << r1 << " , " << r2 << " ) " << endl;
		}
		else if (d == 0 ) {
			r1 = ( ( -b2) + sqrt(d) ) / ( 2*a1 );
			r2 = r1;
			cout << " Roots are ( " << r1 << " , " << r2 << " ) " << endl;
		}
		else if (d < 0)
		{
			r1 = ( ( -b2) ) / ( 2*a1 );
			r2 = ( ( -b2) - sqrt(-d)) / ( 2*a1 );
			getRoots(r1, r2);
		}
	}
	void getRoots(float &r1, float &r2)
	{
		Complex D(r1, r2);
		D.stringPrint();
		cout << "verify r1: " << a1*r1*r1* + b2*r1 + c3<< endl;
		cout<< "verify r2: " << a1*r2*r2 + b2*r2 + c3 << endl;
	}
	private:
    float  a1,b2,c3;
};
