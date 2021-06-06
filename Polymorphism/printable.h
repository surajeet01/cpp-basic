#ifndef PRINTABLE_H
#define PRINTABLE_H

/* Interface : all methods are pure virtual */
class printable
{
    friend ostream& operator<<(ostream& os, printable& p);
public:
    virtual string print() const = 0;
    virtual ~printable() {}
};

class potato : public printable {
public:
    string print() const {
        return "Potato";
    }
    ~potato() {}
};

class tomato : public printable {
public:
    string print() const {
        return "Tomato";
    }
    ~tomato() {}
};

ostream& operator<<(ostream& os, printable& p) {
    os << p.print();
    return os;
}

#endif // PRINTABLE_H
