#include <string>
#include <iostream>
using namespace std;

namespace ariel{
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
class Card{

public:
    cardType cType;
    cardVal cVal;

    Card(int cType, int cVal);
    string TypeToString(cardType cType);
    string ValToString(cardVal cVal);


    
};
};

