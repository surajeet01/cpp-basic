#ifndef ZEROEVENODD_H
#define ZEROEVENODD_H

/*
 * Solution of Leetcode Problem #1116  
 */

class ZeroEvenOdd {
private:
    int n;
    int curr;
    
    mutex mx;
    condition_variable cv, cv1;
public:
    ZeroEvenOdd(int n) {
        this->n = n;
        curr = 0;
    }

    // printNumber(x) outputs "x", where x is an integer.
    void zero(function<void(int)> printNumber) {
        while(true) {
            unique_lock<mutex> ul(mx);
            if(curr != 0)
                cv.wait(ul);

            if(curr > n) {
                cv1.notify_all();
                return;
            }
            
            if(curr == 0)
                curr++;

            printNumber(0);

            cv1.notify_all();
        }
    }

    void even(function<void(int)> printNumber) {
        while(true) {
            unique_lock<mutex> ul(mx);
            cv1.wait(ul, [=]{return curr > 0 && curr%2 == 0;});

            if(curr > n)
                return;

            printNumber(curr);
            curr++;

            cv.notify_all();
            
            if(curr > n)
                return;
        }   
    }

    void odd(function<void(int)> printNumber) {
        while(true) {
            unique_lock<mutex> ul(mx);
            cv1.wait(ul, [=]{return curr > 0 && curr%2 == 1;});

            if(curr > n)
                return;

            printNumber(curr);
            curr++;
            
            cv.notify_all();
            
            if(curr > n)
                return;
        }
    }
};

#endif // ZEROEVENODD_H
