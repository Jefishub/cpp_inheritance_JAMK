#include "Weamor.h"
// Copy paste from your .cpp file constructors here!
// The other code is included by the TIM system
// PASTE CONSTRUCTORS HERE
Weamor::Weamor():
        Weapon(),
        Armor() {

}

Weamor::Weamor(string pName, double pWeight, int pDam, int pProt):
        Weapon(pName,pWeight,pDam),
        Armor(pName,pWeight, pProt) {            
}
// END HERE
