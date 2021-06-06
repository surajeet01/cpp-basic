#ifndef WEAKPTR_H
#define WEAKPTR_H

#include <iostream>
#include <vector>
#include <memory.h>
#include "dummy.h"

using namespace std;

class weakptr {
public:
    static void experiment() {
        /* A shared pointer own the correspondig memory i.e. it restricts
         * the heap object to be free-d when the pointer itself is still
         * alive.
         * 
         * weak pointer does not own a memory object and they dont contibute 
         * to use_count i.e. they provide non-'own'ing reference to an object 
         * that is owned by a shared_ptr. They don't contribute into 
         * lifecycle of the object 
         */
        weak_ptr<int> w;
        {
            shared_ptr<int> i(new int(10)); 
            shared_ptr<int> j(i);
            cout << *i << " " << j.use_count() << endl;
            //weak_ptr<int> k(new int(10));  // Not allowed
            w = i;
            
            // returns use count of corresponding obj
            cout << w.use_count() << " " << j.use_count() << endl;
            
            weak_ptr<int> l = w;
            shared_ptr<int> k = l.lock(); // Creates a new shared pointer
            cout << w.use_count() << " " << j.use_count() << endl;
        }
        /* the object died along with all shared pointer, so
         * corresponding weak pointer points to nothing */ 
        if(!w.lock() && w.expired())
            cout << "Obj expired" << endl;
            
        cout << endl;
         
        shared_ptr<goodA> a = make_shared<goodA> ();
        shared_ptr<goodB> b = make_shared<goodB> ();
        a->setB(b);
        b->setA(a);
        
        /* destructor will be called as one of the object 
         * contains weak pointer, not shared */
    }
};

#endif // WEAKPTR_H
