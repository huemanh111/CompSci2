#include <iostream>
#include <iomanip>
//#include "account.h"
#include "accountManager.h"
#include "complex.h"
#include "quadratic.h"

using namespace std;

int main() {
	cout << "================= Account Test ============ " << endl;
	Account a {"John Doe", 2000, 5000};
	a.setCreditLimit(1000);
	a.queryAccount();

	a.purchase(500);
	a.queryAccount();

	a.payBill();
	a.queryAccount();

	a.setInterestRate(0.1);
	a.addAnnualInterest(0);
	a.queryAccount();

	a.addAnnualInterest(1);
	a.queryAccount();

	cout << "================= Complex Numbers Test =============== " << endl;
	Complex C1(1,7);
	Complex C2(9,2);
	C1.stringPrint();
	C2.stringPrint();
	cout << "Addition of C1 and C2 given by " << endl;
	Complex C3 = C1.add(C2);
	C3.stringPrint();
	cout << "Subtraction off C2 and C1 given by " << endl;
	Complex C4 = C1.subtract(C2);
	C4.stringPrint();
	cout << "Multiplication of C1 and C2 given by " << endl;
	Complex C5 = C1.multiply(C2);
	C5.stringPrint();
	cout << endl << endl << endl;
	cout << "           Reset            " << endl;
	C1.setComplexNumber(10,1); //reset real
	C2.setComplexNumber(11, 5); //reset imaginary
	C1.stringPrint();
	C2.stringPrint();
	cout << "Addition of C1 and C2 given by " << endl;
	C3 = C1.add(C2);
	C3.stringPrint();
	cout << "Subtraction of C2 and C1 given by " << endl;
	C4 = C1.subtract(C2);
	C4.stringPrint();
	cout << "Multiplication of C1 and C2 given by " << endl;
	C5 = C1.multiply(C2);
	C5.stringPrint();

	cout<< endl << endl;

	cout << "================= Quadratic Solver Test ================" << endl;
	Quadratic q;
	cout << "x^2 + 2x + 4 = 0" << endl;
	q.setCoef(1,2,4);
	q.solve();

	cout << endl << "x^2 + 4x + 2 = 0" << endl;
	q.setCoef(1,4,2);
	q.solve();

	cout << endl << endl;

	cout << "================== Account Manager Test ====================" << endl;
	AccountManager m;
	m.createAccount("John Doe", 2000, 5000);
	m.createAccount("John Doe2", 2000, 5000); //duplicate error

	Account *acc = m.getAccount(4000); //not exist error
	acc = m.getAccount(5000);

	acc->setCreditLimit(1000);
	acc->queryAccount();

	acc->purchase(500);
	acc->queryAccount();

	acc->payBill();
	acc->queryAccount();

	acc->setInterestRate(0.1);
	acc->addAnnualInterest(0);
	acc->queryAccount();

	acc = m.getAccount(5000);
	acc->queryAccount();

	return 0;
}
