#include <iostream>

using namespace std;

class strategy {
public:
    virtual void run_algo(int val) = 0;
    virtual ~strategy() {};
};

class strategyA : public strategy {
public:
    void run_algo(int val) {
        cout << "Processing value " << val << " with strategy A" << endl;
    }
};

class strategyB : public strategy {
public:
    void run_algo(int val) {
        cout << "Processing value " << val << " with strategy B" << endl;
    }
};

class processor {
private:
    strategy* s;
public:
    void set_strategy(strategy* st) {
        s = st;
    }
    void process(int val) {
        s->run_algo(val);
    }
};

int main()
{
    strategy *sA = new strategyA();
    strategy *sB = new strategyB();
    
    processor *p = new processor();
    
    p->set_strategy(sA);
    p->process(5);
    
    p->set_strategy(sB);
    p->process(10);
    
    delete(p);
    delete(sA);
    delete(sB);
    
    return 0;
}
