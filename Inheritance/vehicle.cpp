#include "vehicle.h"

vehicle::vehicle(const vehicle& v) : weight(v.weight) {
    cout << "Copy constructor for Vehicle" << endl;
}

vehicle& vehicle::operator=(const vehicle &rhs) {
    weight = rhs.weight;
    cout << "Copy assignment operator for vehicle" << endl;
    return *this;
}

void vehicle::add_compartment(int i) {
    weight += i;
}
