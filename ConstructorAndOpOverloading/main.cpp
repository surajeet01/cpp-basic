#include <iostream>
#include "person.h"

using namespace std;

int person::count = 0; /* initialize static variable */

int main()
{
    person p1("John", 10); /* Constructor */
    person p2;             /* Empty Constructor */
    person p3(p1);         /* Copy Constructor */ 
    person p4(move(p3));   /* Move constructor, p3 = "None"*/
    person p5(p1+p1);      /* Move constructor. may not get called because of "Copy Elision",
                            * Use -fno-elide-constructors with g++ to stop copy elision or
                            * use std::move() */ 
                            
    cout << "Person count : " << person::numberOfPerson() << endl;
    cout << endl;
    
    p1 = p3;               /* copy assignment p1 = "None" */
    p1 = p4+p4+p4;         /* operator+ overload and move assignment */
    
    cout << "Person count : " << person::numberOfPerson() << endl;
    cout << endl;
    
    ++p1;                  /* preincrement overloading */
    cout << p1 << p2 << p3 << p4 << p5;  /* outstream operator overload */
    
    cout << endl;
    swap(p1, p2);          /* temp = move(p1); p1 = move(p2); p2 = move(temp); */
    
    cout << endl;
    cout << "Person count : " << person::numberOfPerson() << endl;
    cout << endl;
    
    return 0;
    /* Destructors will be called now */
}
