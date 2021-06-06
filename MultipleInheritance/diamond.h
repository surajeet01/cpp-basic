#ifndef DIAMOND_H
#define DIAMOND_H

#include <iostream>

using namespace std;

class grandparent {
public:
    grandparent() {
        cout << "Grandparent default constructor" << endl;
    };
    grandparent(int i) {
        cout << "Grandparent int constructor" << endl;
    };    

    ~grandparent() {
        cout << "Grandparent destructor" << endl;
    };
};

/* Virtual inheritence to ensure only one copy of grandparent
 * class's members go into child */
class parent1 : virtual public grandparent {
public:
    parent1(int i) : grandparent(i) {
        cout << "Parent1 int constructor" << endl;
    }
    
    ~parent1() {
        cout << "Parent1 destructor" << endl;
    }
};

/* Virtual inheritence */
class parent2 : virtual public grandparent {
public:
    parent2(int i) : grandparent(i) {
        cout << "Parent2 int constructor" << endl;
    }
    
    ~parent2() {
        cout << "Parent2 destructor" << endl;
    }
};

/* While building object for "child", constructor and destructor of
 * grandparent will be called twice, if inheritence of parent1 and
 * parent2 are not virtual 
 * 
 * int-constructor of grandparent have to be explicitly called, 
 * otherwise default constructor of grandparent will be invoked as
 * inheritences above are virtual */
class child : public parent1, public parent2 {
public:
    child(int i) : grandparent(i), parent1(i), parent2(i) {
        cout << "Child int constructor" << endl;
    }
    
    ~child() {
        cout << "Child destructor" << endl;
    }
};

#endif // DIAMOND_H
