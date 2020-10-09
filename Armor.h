#include <iostream>
#include "Equipment.h"
using namespace std;

// Copy paste your Armor class here!!!
// START HERE
class Armor : public Equipment {
    private:
    int protection;

    public:
    string pName;
    double pWeight;
    int pProt;

    public:
    Armor();
    Armor(string pName, double pWeight, int pProt);
};
// END HERE
