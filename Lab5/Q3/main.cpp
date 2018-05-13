#include <stack>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

#include "PowerStack.h"

using namespace std;


int main() {
    Stack<Data*> s; //stack

    obj * p = new myInt();
    s.push(p); //pushing data into stack

    p = new myDouble();
    s.push(p);

    p = s.top();
    p->print();
}
