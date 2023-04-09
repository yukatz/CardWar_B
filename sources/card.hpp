#include <string>
#include <iostream>

using namespace std;

namespace ariel{
class Card{

private:
    int cType;
    int cVal;
    
public:
    Card(int cType, int cVal);
    int getType();
    int getVal();
    string TypeToString(int cType);
    string ValToString(int cVal);


    
};
};

