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
        /* weak pointer are similar to shared pointer 
         * but they dont contibute to use_count i.e. they
         * provide non-'own'ing reference. They don't contribute
         * into lifecycle of obj because they don't increase
         * use_count */
        shared_ptr<goodA> a = make_shared<goodA> ();
        shared_ptr<goodB> b = make_shared<goodB> ();
        a->setB(b);
        b->setA(a);
        
        /* destructor will be called as one of the object 
         * contains weak pointer, not shared */
    }
};

#endif // WEAKPTR_H
