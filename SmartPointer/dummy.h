#ifndef DUMMY_H
#define DUMMY_H

#include <iostream>

using namespace std;

class dummy {
public:
    int val;
    dummy(int i) : val{i} {
        cout << "Dummy constructor called with value " << val << endl;
    }
    virtual ~dummy() {
        cout << "Dummy destructor called for "<< val << endl;
    }
    virtual string get_val() {
        return "I am dummy with value " + to_string(val);
    }
};

class dummy_child : public dummy {
public:
    dummy_child(int i) : dummy{i} {
        cout << "Dummy Child constructor called with value " << val << endl;
    }
    ~dummy_child() {
        cout << "Dummy Child destructor called for "<< val << endl;
    }
    string get_val() {
        return "I am dummy child with value " + to_string(val);
    }
};

ostream& operator<<(ostream& os, dummy& d) {
    os << d.get_val() << endl;
    return os;
}



/* 
 * Problem with shared_pointer, 
 * Circular reference 
 */
class badB;

class badA {
private:
    shared_ptr<badB> sh_ptr_b;  // Circular reference
public:
    badA() {
        cout << "badA constructor" << endl;
    }
    ~badA() {
        cout << "badA destructor" << endl;
    }
    void setB(shared_ptr<badB> b) {
        sh_ptr_b = b;
    }
};
class badB {
private:
    shared_ptr<badA> sh_ptr_a;   // Circular reference
public:
    badB() {
        cout << "badB constructor" << endl;
    }
    ~badB() {
        cout << "badB destructor" << endl;
    }
    void setA(shared_ptr<badA> a) {
        sh_ptr_a = a;
    }
};



/* 
 * Break Circular reference using weak pointer
 */
class goodB;

class goodA {
private:
    shared_ptr<goodB> sh_ptr_b;  
public:
    goodA() {
        cout << "goodA constructor" << endl;
    }
    ~goodA() {
        cout << "goodA destructor" << endl;
    }
    void setB(shared_ptr<goodB> b) {
        sh_ptr_b = b;
    }
};
class goodB {
private:
    weak_ptr<goodA> wk_ptr_a;   // Only difference
public:
    goodB() {
        cout << "goodB constructor" << endl;
    }
    ~goodB() {
        cout << "goodB destructor" << endl;
    }
    void setA(shared_ptr<goodA> a) {
        wk_ptr_a = a;
    }
};

#endif // DUMMY_H
