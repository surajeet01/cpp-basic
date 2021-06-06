#include<iostream>
#include<vector>
#include "shape.h"
#include "animal.h"
#include "printable.h"

using namespace std;

void talk(animal& a) {
    a.sayhello();
    a.whoareyou();
}

int main()
{
    /* virtual classes */
    vector<shape*> vec;  /* vector of pointer */
    
    vec.push_back(new shape());
    vec.push_back(new circle());
    vec.push_back(new line());
    vec.push_back(new horizontal());
    vec.push_back(new vertical());
    
    for(shape*& s : vec) {
        s->common_fn();
        s->draw();
        delete(s);
    }
    
    cout << endl << endl;
    
    /* abstract class */
    //animal a();  // Not allowed
    dog d;
    cat c;
    talk(d);
    talk(c);
    
    cout << endl << endl;
    
    /* abstract class as interface */
    printable* p = new potato();
    printable* t = new tomato();
    cout << "I am a " << *p << endl;
    cout << "I am a " << *t << endl; 
    delete(p);
    delete(t);
    
    return 0;
}
