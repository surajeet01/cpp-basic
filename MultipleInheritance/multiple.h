#ifndef MULTIPLE_H
#define MULTIPLE_H

#include <iostream>

using namespace std;

class Base1
{
public:
    void greet() {
        cout << "Good Morning!" << endl;
    }
};

class Base2
{
public:
    void greet() {
        cout << "Good Night!" << endl;
    }
};

/* Inheritating multiple classes. 
 * Function greet() has two different implementation in two
 * different base classes. We have to explicitly specify which one 
 * to use */
class Derived : public Base1, public Base2 {
public:
    void greet() {
        Base1::greet();
    }
};
#endif // MULTIPLE_H
