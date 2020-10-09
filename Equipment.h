#include <iostream>
using namespace std;
// Copy paste your Equipment class here!!!
// START HERE
class Equipment {
    private:
    string name;
    double weight;


    public:
    string pName;
    double pWeight;


    //constructors
    public:
    Equipment();
    Equipment(string pName, double pWeight);
    string GetName(); 

};
// END HERE