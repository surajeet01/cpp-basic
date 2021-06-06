#include <iostream>
#include <string>
#include "train.h"

using namespace std;

int main() {
    train t1(100, 10000); /* Constructor */
    train t2(t1);         /* Copy constructor */
    train t3;             /* default constructor */
    
    t3 = t1;              /* copy assignment */
    
    cout << t1 << t2 << t3 <<  endl;
    
    t3.add_compartment(1);  /* overridden method call */
    
    cout << t3 << endl;
    
    return 0;
}