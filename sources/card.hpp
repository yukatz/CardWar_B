#include <string>
#include <iostream>
using namespace std;

namespace ariel{


class Card{

public:
    int cType;
    int cVal;

    Card(int cType, int cVal);
    string TypeToString(int cType);
    string ValToString(int cVal);


    
};
};

