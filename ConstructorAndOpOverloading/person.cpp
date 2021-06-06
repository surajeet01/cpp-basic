#include "person.h"

person::person(const person& p) {
    name = p.name;
    age = p.age;
    count++;
    cout << "Copy Constructor for " << name << endl; 
}
person::person(person&& p) {
    name = p.name;
    age = p.age;
    p.name = "None";
    p.age = 0;
    count++;
    cout << "Move Constructor for " << name << endl; 
}
    
/* assignment operator overload : */
person& person::operator=(const person &rhs) {
    cout << "Copy " << rhs.name << " to " << name << endl;
    name = rhs.name;
    age = rhs.age;
    return *this;
}
person& person::operator=(person &&rhs) {
    cout << "Move " << rhs.name << " to " << name << endl;
    name = rhs.name;
    age = rhs.age;
    rhs.name = "None";
    rhs.age = 0;
    return *this;
}

/* operator overload */
person person::operator-(const person& rhs) {
    person p(name, age - rhs.age);
    return p;
}
person person::operator++() {
    person p(name, ++age);
    return p;
}

/* Global operator overload */
person operator+(const person& lhs, const person& rhs) {
    person p(lhs.name+rhs.name, lhs.age+rhs.age);
    return p;
}
ostream& operator<<(ostream& os, const person& p) {
    os << p.name << " : " << p.age << endl;
    return os;
}

