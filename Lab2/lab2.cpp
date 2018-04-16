#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>

//#include "account.h"
//#include "accountManager.h"

using namespace std;

float quadratic(float, float, float, float&, float&);
void hanoi(int, char, char, char);
void duplicate();


int main()
{
	cout << "========= Quadratic Solver Test ==========" << endl;
	float a, b, c, r1, r2;
	a = 3; b = 2; c = 1;
	if (quadratic(a, b, c, r1, r2) == 0) {
//		cout << endl << "Roots are : " << r1 << ", " << r2 << endl;
		// verify roots:
//		cout << "Verify r1: " << a*r1*r1 + b* r1 + c << endl;
//		cout << "Verify r2: " << a*r2*r2 + b* r2 + c << endl;
	}
	a = 2; b = 4; c = 1;
	if (quadratic(a, b, c, r1, r2) == 0) {
		cout << endl << "Roots are : " << r2 << ", " << r1 << endl;
		// verify roots:
		cout << "Verify r1: " << a*r1*r1 + b* r1 + c << endl;
		cout << "Verify r2: " << a*r2*r2 + b* r2 + c << endl;
	}
    cout << endl << "========= Tower of Hanoi ========" << endl;
	hanoi(3, 'A', 'B', 'C');

	cout << endl << "======== Duplicates Test =========" << endl;
	duplicate();

/*
	cout <<endl << "======== Account Manager Test ========" << endl;
	AccountManager m;
	m.createAccount("John Doe", 2000, 5000);
	m.createAccount("John Doe2", 2000, 5000); // duplicate error
	Account *acc = m.getAccount(4000); // not exist error
	acc = m.getAccount(5000);
	acc.setCreditLimit(1000);
	acc.queryAccount();
	acc.purchase(500);
	acc.queryAccount();
	acc.payBill();
	a.queryAccount();
	acc.setInterestRate(0.1);
	acc.addAnnualInterest(0);
	acc.queryAccount();
	acc = m.getAccount(5000); // retrieve again
	acc ->queryAccount(); // all activities should be up to date
*/
	return 0;
}


float quadratic(float a, float b, float c, float &r1, float &r2) {
	float d = ((b * b) - 4 * a * c); //discriminant

	if(d >= 0) {
		r1 = ((-b) - sqrt(d)) / (2 * a);
		r2 = ((-b) + sqrt(d)) / (2 * a);
		return 0;
//		cout << "Root 1 = " << r1 << endl;
//		cout << "Root 2 = " << r2 << endl;
	}
	else {
		cout << "No real roots" << endl;
	}
}

void hanoi(int n, char sPeg, char tPeg, char aPeg) { //sourcePeg, targetPeg, auxPeg
	if(n == 1) {
		cout << "Move disc " << n << " from " << sPeg << " to " << aPeg << endl;
	}
	else {
		hanoi(n - 1, sPeg, aPeg, tPeg);
		cout << "Move disc " << n << " from " << sPeg << " to " << aPeg << endl;
		hanoi(n - 1, tPeg, sPeg, aPeg);
	}
}

void duplicate() {
	const int s = 20;
	vector<int> num; //num is name of vector
	int n = 0; //count of non duplicate numbers
	int v = -1; //value
//	int i = 0; //index when checking for repeats
	bool dup = false;

	cout << endl << "Enter 20 numbers between 10 and 100" << endl;

    do {
        cin >> v; //changes val of v
        if(v >= 10 && v <= 100) { //checks if num entered is within range of 10-100
            dup = false;
            for(int i = 0; i < n; i++) {
                if(v == num.at(i)) {
                    cout << "Duplicate." << endl;
                    dup = true;
                    break;
                }
            }
            if(!dup) {
                num.push_back(v);
                n++; //index increases when you add a value to vector
            }
        }
        else {
            cout << "Invalid entry. Try again." << endl;
        }

    }while(n < s); //count of unique # less than 20

	cout << endl << "Non-duplicate Values: ";
	for(int h = 0; h < s; h++) {
		cout << num.at(h) << "   ";
	}
	cout << endl;

}



