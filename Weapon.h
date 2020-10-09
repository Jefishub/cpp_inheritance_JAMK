#include <iostream>
#include "Equipment.h"
using namespace std;

// Copy paste your Weapon class here!!!
// START HERE
class Weapon : public Equipment {
    private:
    int damage;

    public:
    string pName;
    double pWeight;
    int pDam;

    public:
    Weapon();
    Weapon(string pName, double pWeight,int pDam);
};
// END HERE