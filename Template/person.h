#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

/* can have type arguments, and default values */
template<int a, class T, class U = char>
class person {
private:
    T name;
    U sex;
    int age;
public:
    person(T _name, U _sex) : name(_name), sex(_sex), age(a) {
        cout << "Constructor called" << endl;
    }
    void whoareyou() {
        cout << "I am " << name << "," << sex << "," << age << endl; 
    }
};

#endif // PERSON_H
