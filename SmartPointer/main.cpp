#include <iostream>
#include <memory>
#include "uniqueptr.h"
#include "sharedptr.h"
#include "weakptr.h"

using namespace std;

int main() {
    cout << "******** UNIQUE POINTER ********" << endl << endl; 
    uniqueptr::experiment();
    
    cout << endl << endl; 
    cout << "******** SHARED POINTER ********" << endl<< endl; 
    sharedptr::experiment();
    
    cout << endl << endl ;
    cout << "******** WEAK POINTER ********" << endl<< endl; 
    weakptr::experiment();
}
