#include<iostream>

using namespace std;

enum car_type {
    TWO_WHEELER,
    FOUR_WHEELER,
};

class vehicle {
public:
    virtual void run() = 0;
    virtual ~vehicle() {};
};
class two_wheeler : public vehicle {
    void run() {
        cout << "Running Two Wheeler" << endl;
    }
};
class four_wheeler : public vehicle {
    void run() {
        cout << "Running Four Wheeler" << endl;
    }
};

class factory {
public:
    vehicle* get_instance(car_type type) {
        if(type == TWO_WHEELER)
            return new two_wheeler();
        else if(type == FOUR_WHEELER)
            return new four_wheeler();
        else
            return NULL;
    }
};

int main() 
{
    factory *f = new factory();
    vehicle* two = f->get_instance(TWO_WHEELER);
    vehicle* four = f->get_instance(FOUR_WHEELER);
    
    two->run();
    four->run();
    
    delete(two);
    delete(four);
    delete(f);
    
	return 0;
}
