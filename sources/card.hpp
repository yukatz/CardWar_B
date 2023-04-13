#pragma once
#include <string>
#include <iostream>

using namespace std;

namespace ariel{
class Card{

private:
    int cVal = 0;
    string cType = "";

public:
    Card();
    Card(int cVal, string cType);
    string getType();
    int getVal();
    void setVal(int n);

    string cardToString();


    
};
};

