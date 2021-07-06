#include <iostream>
#include <list>

using namespace std;

class observer {
    static int count;
    int number;
public:
    observer() {
        number = ++count;
    }
    void send_message(string m) {
        cout << "Observer " << number << " got message : " << m << endl;
    }
};

class publisher {
    list<observer*> client_list;
public:
    void attach(observer* ob) {
        client_list.push_back(ob);
    }
    void detach(observer* ob) {
        client_list.remove(ob);
    }
    void event(string m) {
        list<observer*>::iterator itr = client_list.begin();
        while(itr != client_list.end()) {
            (*itr)->send_message(m);
            itr++;
        }
    }
};

int observer::count = 0;

int main()
{
    observer *one = new observer();
    observer *two = new observer();
    observer *three = new observer();
    
    publisher *p = new publisher();
    
    p->attach(one);
    p->attach(two);
    p->attach(three);
	
    p->event("Good game");
    
    p->detach(two);
    
    p->event("Better game");
    
    delete(p);
    delete(one);
    delete(two);
    delete(three);
    
	return 0;
}
