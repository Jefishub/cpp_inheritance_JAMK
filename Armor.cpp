#include "Armor.h"
// Copy paste from your .cpp file constructors here!
// The other code is included by the TIM system
// PASTE CONSTRUCTORS HERE
Armor::Armor():Equipment() {
    protection = 0;
}

Armor::Armor(string pName, double pWeight, int pProt):Equipment(pName,pWeight) {
    pProt = pProt;
    pName = pName;
    pWeight = pWeight;
}
// END HERE