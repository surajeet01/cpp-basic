#ifndef SHAREDPTR_H
#define SHAREDPTR_H

#include <iostream>
#include <vector>
#include <memory.h>
#include "dummy.h"

using namespace std;

class sharedptr {
public:
    static void experiment() {
        /* shared pointer has many to one mapping to heap memory segment. 
         * More than one unique_ptr can "own" i.e. point to same memory. So, copy 
         * constructor and assignment operator overload are available. */
        shared_ptr<int> a(new int(10));
        shared_ptr<int> arr(new int[100]);
        shared_ptr<int> b(a);  
        shared_ptr<int> c; 
        c = a;                 
        
        /* a,b,c all points to same object */
        cout << a.get() << " " << *a << endl;
        cout << b.get() << " " << *b << endl;
        cout << c.get() << " " << *c << endl;
        
        /* A use_count is maintained corresponding to the object allocated 
         * indicating how many shared pointer 'own'ing it */
        cout << a.use_count() << " " << b.use_count() << " " << c.use_count() << endl;
        a.reset();  
        cout << a.use_count() << " " << b.use_count() << " " << c.use_count() << endl;
        
        cout << endl;
        
        {
            // make_unique template can be used, takes arguments of the class constructor 
            unique_ptr<dummy> obj = make_unique<dummy>(1); 
            vector<unique_ptr<dummy>> vec; 
            //vec.push_back(obj);      // Not allowed as unq_ptr being copied into vector
            vec.push_back(move(obj));  // allowed
            vec.push_back(unique_ptr<dummy> (new dummy(2)));
            vec.push_back(make_unique<dummy>(3));
            vec.push_back(make_unique<dummy_child>(4));  // polymorphism
            
            for(auto& p : vec)
                cout << *p;
                
            // Object of dummies will be freed here
        }
        
        cout << endl; 
        
        {
            shared_ptr<badA> a = make_shared<badA> ();
            shared_ptr<badB> b = make_shared<badB> ();
            a->setB(b);
            b->setA(a);
            
            /* destructor of badA and badB objects will not be called
             * as each of these objects has use_count 1 i.e. they own each
             * other resulting to circular ownership. This will cause 
             * memory leak. Circle should be break using weak pointer */
        }
        
        cout << endl << "Outside Scope" << endl;
    }
};

#endif // SHAREDPTR_H
