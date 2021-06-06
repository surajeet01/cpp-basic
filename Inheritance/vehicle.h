#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>

using namespace std;

class vehicle
{
    friend ostream& operator<<(ostream& os, const vehicle& t);
protected:
    int weight;
public:
    vehicle(int _weight) : weight{_weight} {
        cout << "Constructor for Vehicle" << endl;
    }
    ~vehicle() {
        cout << "Destructor for Vehicle" << endl;
    }
    
    vehicle(const vehicle&);
    vehicle& operator=(const vehicle &rhs);
    
    void add_compartment(int i);
};

#endif // VEHICLE_H
