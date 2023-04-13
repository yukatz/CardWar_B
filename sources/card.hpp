#pragma once
#include <string>
#include <iostream>

using namespace std;

namespace ariel{
class Card{

private:
    int cVal = 0;
    string cType;

public:
    Card(int cVal, std::string cType);
    std::string getType();
    int getVal();
    void setVal(int n);

    string cardToString();


    
};
};

