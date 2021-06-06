#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<string>

using namespace std;

class person
{
private:
    friend person operator+(const person&, const person&);
    friend ostream& operator<<(ostream&, const person&);

    string name;
    int age = 0;
    
    /* non-const static cannot be initialized here. 
     * Need to do so outside the scope of class */
    static int count;
public:
    /* Constructor : Compiler generate default no argument constructor and copy
     * constructor unless we overload atleast one constructor. 
     * If we overload atleast one, we have to define all types of contructors
     * that we are going to use (except move-constructor, in case of which 
     * copy-constructor (defined/ generated whichever is available ) is used in case 
     * move-constructor is not available). 
     * 
     * Default move-constructor is generated only when no other copy-constructor/
     * any assignment operator overload/destructor has been explicitly defined */
    person(string _name = "Empty", int _age = 100) : name(_name), age(_age) {
        cout << "Constructor for : " << name << endl;
        count++;
    }
    person(const person&);
    person(person&&); /* avaliable copy constructor will be used if not defined/generated */
    
    
    /* 
     * assignment operator overload 
     */
    /* default copy assignment is generated if not user-defined */
    person& operator=(const person&); 
    /* Default move-assignment operator is generated only when no copy-constructor/
     * any assignment operator overload/destructor have been defined.
     * available copy-assignment-overload is used when no
     * move-assignment overload is done */ 
    person& operator=(person&&);
    
    /* operator overload */
    person operator-(const person&);
    person operator++();
    
    /* destructor */
    ~person() {
        count--;
        cout << "Destructor for : " << name << endl;
    }
    
    /* static function : class property, can be called without instantiation 
     * This function can only access static variable */
    static int numberOfPerson() {
        return count;
    }
};

#endif // PERSON_H
