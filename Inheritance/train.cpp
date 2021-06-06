#include "train.h"

ostream& operator<<(ostream& os, train& t) {
    cout << "Train of " << t.seats << " seats and " << t.weight << "kg" << endl;
    return os;
}

/* Constructor of base class getting called */
train::train(const train& t) : vehicle(t), seats{t.seats} {
    cout << "Copy constructor of train" << endl;
}

train& train::operator=(const train& t) {
    vehicle::operator=(t);  /* assignment operator of base class */
    seats = t.seats;
    cout << "Copy assignment operator for train" << endl;
    return *this;
}

/* overridden method body */ 
void train::add_compartment(int i) {
    vehicle::add_compartment(i*1000);
    seats += (i*80);
}