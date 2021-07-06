#include <iostream>

using namespace std;

class singleton {
protected:
    static singleton* obj;
    int data;
    singleton(int val) : data(val) {}
public:
    singleton(singleton& s) = delete;
    void operator=(singleton& rhs) = delete;
    
    static singleton* get_instance(int val) {
        if(obj == NULL)
            obj = new singleton(val);
        return obj;
    }
    
    void show_val() {
        cout << "Value = " << data << endl;
    }
};

singleton* singleton::obj = NULL;

int main()
{	
    singleton* s1 = singleton::get_instance(5);
    s1->show_val();
    singleton* s2 = singleton::get_instance(10);
    s2->show_val();
    
    delete(s1);
    delete(s2);
    
    return 0;
}
