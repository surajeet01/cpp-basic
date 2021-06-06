#ifndef UNIQUE_PTR_H
#define UNIQUE_PTR_H

#include <iostream>
#include <memory>
#include <vector>
#include "dummy.h"

class uniqueptr {
public:
    static void experiment() {
        /* unique pointer has one to one mapping to heap memory segment. 
         * More than one unique_ptr cannot "own" i.e. point to same memory. So, copy 
         * constructor and assignment operator overload are not available. */
        unique_ptr<int> a(new int(10));
        unique_ptr<int> arr(new int[100]);
        //unique_ptr<int> b(a);  // Not allowed
        unique_ptr<int> c; 
        //c = a;                 // not allowed
        
        cout << a.get() << " " << *a << endl;
        //a++;   // Not allowed
        
        c.reset(new int(20));     // old object free'd, new object created
        cout << c.get() << " " << *c << endl;
        
        a.reset();  
        if(a.get() == NULL) 
            cout << "Pointer reset and memory freed" << endl; 
        
        int* d = arr.release(); // get raw pointer but why ?
        if(arr.get() == NULL) 
            cout << "Pointer reset and but memory not freed" << endl << endl; 
        delete d;
        
        {
            // make_shared template can be used, takes arguments of the class constructor 
            shared_ptr<dummy> obj = make_shared<dummy>(1); 
            vector<shared_ptr<dummy>> vec; 
            vec.push_back(obj);        // allowed unlike unq_ptr
            vec.push_back(shared_ptr<dummy> (new dummy(2)));
            vec.push_back(make_shared<dummy>(3));
            
            for(auto& p : vec)
                cout << *p;
                
            // Object of dummies will be freed here
        }
        
        cout << endl << "Outside Scope" << endl;
    }
};


#endif // UNIQUE_PTR_H
