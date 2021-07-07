#include <iostream>
#include <vector>

using namespace std;

template<typename T, typename U>
class Iterator {
private:
    U* cont;
    typename vector<T>::iterator itr;
public:
    Iterator(U* c) {
        cont = c;
    } 
    
    void begin() {
        itr = cont->data.begin();
    }
    
    bool has_next() {
        return itr != cont->data.end();
    }
    
    void next() {
        itr++;
    }
    
    T get_val() {
        return *itr;
    }
};


template<typename T>
class Container {
friend class Iterator<T, Container>;
private:
    vector<T> data;
public:
    void add(T a) {
        data.push_back(a);
    }
    
    Iterator<T, Container<T>>* get_iter() {
        return new Iterator<T, Container<T>> (this);
    }
};

int main()
{
    Container<int> *cont = new Container<int>();
    cont->add(1);
    cont->add(2);
    cont->add(3);
    
    Iterator<int, Container<int>> *itr1 = cont->get_iter();
    Iterator<int, Container<int>> *itr2 = cont->get_iter();
    
    cout << "Iteration 1" << endl;
    for(itr1->begin(); itr1->has_next(); itr1->next()) {
        cout << itr1->get_val() << endl;
    }
    
    cont->add(4);
    cont->add(5);
    
    cout << "Iteration 2" << endl;
    for(itr2->begin(); itr2->has_next(); itr2->next()) {
        cout << itr2->get_val() << endl;
    }
    
    delete(itr1);
    delete(itr2);
    delete(cont);
    
	return 0;
}
