#include <iostream>
#include "Weapon.h"
#include "Armor.h"
using namespace std;
// Copy paste your Weamor class here!!!
// START HERE
class Weamor :
    public Weapon,
    public Armor {
            public:
            string pName;
            double pWeight;
            int pDam;
            int pProt;

            public:
            Weamor();
            Weamor(string pName, double pWeight, int pDam, int pProt);
    };
// END HERE