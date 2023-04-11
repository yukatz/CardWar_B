#pragma once
#include <string>
#include <iostream>

using namespace std;

namespace ariel{
class Card{

private:
    int cVal = 0;
    std::string cType;

public:
    Card(int cVal, string cType);
    std::string getType();
    int getVal();
    string cardToString();


    
};
};

