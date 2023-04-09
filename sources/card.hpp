#include <string.h>
#include <iostream>

namespace ariel{

class Card{
    enum cardType{
        Clubs =20,
        Hearts=30,
        Diamonds=40,
        Pikes =50
};
    enum cardVal{
        Two = 2,
        Three,
        Four,
        Five,
        Six,
        Seven,
        Eigth,
        Nine,
        Ten,     
        Valet,
        Dame,
        King,
        As
};
public:
    cardType cType;
    cardVal cVal;

    Card(int cType, int cVal);

    string toString();
    
};
};

