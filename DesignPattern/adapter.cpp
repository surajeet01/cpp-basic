#include <iostream>

using namespace std;

class old_lib {
public:
    virtual void run() {
        cout << "I am old library" << endl;
    }
    virtual ~old_lib() {};
};

class new_lib {
public:
    void new_run() {
        cout << "I am new library" << endl;
    }
    ~new_lib() {};
};

class adapter : public old_lib {
private:
    new_lib *mylib;
public:
    adapter(new_lib* lb) : mylib(lb) {};
    void run() {
        mylib->new_run();
    }
};

class runner {
private:
    old_lib *my_lib;
public:
    void set_lib(old_lib* lb) {
        my_lib = lb;
    }
    void run_lib() {
        my_lib->run();
    }
};

int main()
{
    old_lib *lib1 = new old_lib();
    new_lib *lib2 = new new_lib();
    
    runner r;
    r.set_lib(lib1);
    r.run_lib();
    
    adapter *a = new adapter(lib2);
    r.set_lib(a);
    r.run_lib();
    
    delete(lib1);
    delete(lib2);
    delete(a);
    
	return 0;
}
