#include "Equipment.h"
// Copy paste from your .cpp file constructors here!
// Equipment.h is included by the TIM system
// PASTE CONSTRUCTORS HERE
Equipment :: Equipment() {
    name = "";
    weight = 0;


}

Equipment::Equipment(string pName,double pWeight) {
    name = pName;
    weight = pWeight;
}
string Equipment::GetName() {
    return name;
};
// END HERE
