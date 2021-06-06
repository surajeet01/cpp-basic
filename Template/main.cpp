#include <iostream>
#include "person.h"

using namespace std;

/* template function */
template <typename T> 
T merge(T a, T b) {
    return a+b;
}

/* template can have arguments with default value */
template <class T, int sz = 10> 
void print_array(T a[]) {
    for(int i = 0; i < sz; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    string a = "Hello";
    string b = "World";
    cout << merge<int>(1, 2) << endl;
    cout << merge<string>(a, b) << endl << endl;
    
    int *arr = new int[5]{1,2,3,4,5};
    print_array<int, 5>(arr);
    delete[] arr;
    
    cout << endl;
    
    person<20, string> p1("John", 'M');
    person<30, string> p2("Rachel", 'F');
    
    p1.whoareyou();
    p2.whoareyou();
    
    return 0;
}
