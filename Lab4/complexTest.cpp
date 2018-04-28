#include <iostream>
#include "Complex.h"

using namespace std;

int main ()
{
cout << endl << "================= Complex Test =================" << endl;
 Complex aa{1, 7};
 Complex bb{9, 2};


Complex cc = aa + bb; // invoke add function and assign to object c
cout << aa.toString() << " + " << bb.toString() << " = " << cc.toString() << '\n';
//cout << aa << " + " << bb << " = " << cc << '\n';

aa.setComplexNum(10, 1); // reset realPart and
bb.setComplexNum(11, 5); // and imaginaryPart

cc = aa - bb; // invoke subtract function and assign to object c
cout << aa.toString() << " - " << bb.toString() << " = " << cc.toString() << '\n';
//cout << aa << " - " << bb << " = " << cc << '\n';

// Commented out since you didn't ask for us to print this in Lab 3
cc = aa * bb; // invoke multiply function and assign to object c
cout << aa.toString() << " * " << bb.toString() << " = " << cc.toString() << '\n';
//cout << aa << " * " << bb << " = " << cc << '\n';

}
