#include "Weapon.h"
// Copy paste from your .cpp file constructors here!
// The other code is included by the TIM system
// PASTE CONSTRUCTORS HERE
Weapon::Weapon() : Equipment() {
    damage = 0;
}

Weapon::Weapon(string pName, double pWeight, int pDam) : Equipment(pName, pWeight){
    pName = pName;
    pWeight= pWeight;
    pDam = pDam;
}
// END HERE
