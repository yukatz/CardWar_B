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
    Card(int cVal, int cType);
    string getType();
    int getVal();
    string ValToString(int cVal);
    string cardToString();


    
};
};

