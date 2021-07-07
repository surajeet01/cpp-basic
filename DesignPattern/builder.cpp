#include <iostream>

using namespace std;

class House {
public:
    string basement;
    string walls;
    string roof;
};

class HouseBuilder {
protected:
    House* house;
public:
    House* get_house() {
        return house;
    }
    
    virtual void build_basement() = 0;
    virtual void build_wall() = 0;
    virtual void build_roof() = 0;
    
    virtual ~HouseBuilder() {};
};

class IglooBuilder : public HouseBuilder {
public:
    IglooBuilder() {
        this->house = new House();
    }
    void build_basement() {
        cout << "Building basement with Ice-sheet" << endl;
        house->basement = "DONE";
    }
    void build_wall() {
        cout << "Building walls with Ice-blocks" << endl;
        house->walls = "DONE";
    }
    void build_roof() {
        cout << "Building roof with Ice-dome" << endl;
        house->roof = "DONE";
    }
};

/* Abstracting the process of building a house */
class Engineer {
public:
    House* build_house(HouseBuilder* housePlan) {
        housePlan->build_basement();
        housePlan->build_wall();
        housePlan->build_roof();
        
        return housePlan->get_house();
    }
};

int main()
{
    HouseBuilder *plan = new IglooBuilder();
    Engineer* eng = new Engineer();
    House* igloo = eng->build_house(plan);
    
    delete(igloo);
    delete(eng);
    delete(plan);
	return 0;
}
