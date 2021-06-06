#ifndef SHAPE_H
#define SHAPE_H

#include<iostream>

using namespace std;

class shape {
public:
    /* common function will be statically bound */
    void common_fn() {
        cout << "Common funtion" << endl;
    }
    /* atleast one Virtual function makes the class virtual */ 
    virtual void draw() {
        cout << "Drawing shape" << endl;
    }
    
    virtual ~shape() {}; /* Destructers must be virtual so that delete-ing a
                          * polymorphic base-class pointer can dynamically bind 
                          * to proper destructor */ 
};

/* use "final" keyboard to restrict further inheritance of a class */
class circle final : public shape {
public:
    /* let compiler know that you are overiding by the optional keyword "override" */
    void draw() override {
        cout << "Drawing circle" << endl;
    }
    ~circle() {}; /* virtual destructor */
};

class line : public shape {
public:
    /* the keyword "virtual" is while overiding virtual function */ 
    virtual void draw() override {
        cout << "Drawing line" << endl;
    }
    /* virtual keyword is optional here too, only base class destructor 
     * need to have the keyword */
    virtual ~line() {};
};

class vertical : public line {
public:
    /* use "final" keyward with function to stop further overide of a function */
    void draw() override {
        cout << "Drawing vertical line" << endl;
    }
    ~vertical() {};
};

class horizontal : public line {
public:
    virtual void draw() final override {
        cout << "Drawing horizontal line" << endl;
    }
    virtual ~horizontal() {};
};

#endif // SHAPE_H
