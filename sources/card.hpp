#pragma once
#include <string>
#include <iostream>

using namespace std;

namespace ariel{
class Card{

private:
    int cVal;
    string cType;

public:
    Card(int cVal, string cType);
    string getType();
    int getVal();
    string toString();


    
};
};

