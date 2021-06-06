#ifndef TRAIN_H
#define TRAIN_H

#include <iostream>
#include "vehicle.h"

using namespace std;

class train : public vehicle {
    friend ostream& operator<<(ostream& os, train& t);
public:
    int seats;
public:
    /* Constructor of base class getting called */
    train(int _seats = 0, int _weight = 0) : vehicle(_weight),seats(_seats) {
        cout << "Constructor for Train" << endl;
    }
    ~train() {
        cout << "Destructor for Train" << endl;
    }
    
    train(const train&);
    train& operator=(const train& t);
    
    void add_compartment(int i);  // Method Override
};

#endif // TRAIN_H
