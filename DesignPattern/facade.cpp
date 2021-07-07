#include <iostream>

using namespace std;

class Process {
public:
    virtual void initialize() = 0;
    virtual void run() = 0;
    
    virtual ~Process() {};
};

class ProcessA : public Process {
public:
    void initialize() {
        cout << "Initializing Process A" << endl;
    }
    void run() {
        cout << "Running Process A" << endl;
    }
    
    ~ProcessA() {
        cout << "Destroying Process A" << endl;    
    };
};

class ProcessB : public Process {
public:
    void initialize() {
        cout << "Initializing Process B" << endl;
    }
    void run() {
        cout << "Running Process B" << endl;
    }
    
    ~ProcessB() {
        cout << "Destroying Process B" << endl;    
    };
};

/* Facade gets ownership of other classes and
 * responsibility of running them */
class Facade {
private:
    Process* one;
    Process* two;
public:
    Facade(Process* a = NULL, Process* b = NULL) {
        one = (a == NULL) ? new ProcessA() : a;
        two = (b == NULL) ? new ProcessB() : b;
    }
    void initialize() {
        one->initialize();
        two->initialize();
    }
    void run() {
        one->run();
        two->run();
    }
    ~Facade() {
        delete(one);
        delete(two);
    }
};

int main()
{
	Facade *f = new Facade();
    f->initialize();
    f->run();
    
    delete(f);
	return 0;
}
