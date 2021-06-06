#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>

using namespace std;

/* Abstract class : cannot be instantiated */
class animal {
public:
    void sayhello() {
        cout << "Hello, ";
    }

    virtual void whoareyou() = 0; // pure virtual function
    virtual ~animal() {};
};

/* Must overide pure virtual method to become concrete class 
 * i.e. a class that can be instantiated */
class dog : public animal {
public:
    void whoareyou() {
        cout << "I am a dog" << endl;
    }
    ~dog() {};
};

class cat : public animal {
public:
    void whoareyou() {
        cout << "I am a cat" << endl;
    }
    ~cat() {};
};

#endif // ANIMAL_H
