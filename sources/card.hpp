#pragma once
#include <string>
#include <iostream>

using namespace std;

namespace ariel
{
    class Card
    {

    private:
        int cVal;
        int cType;

    public:
        Card();
        Card(int cVal, int cType);
        int getType();
        int getVal();
        void setVal(int n);

        string cardToString();
    };
};
