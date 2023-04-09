#include <iostream>
#include "card.hpp"
#include <string>
using namespace std;

namespace ariel{
   
    Card::Card(int cType, int cVal){
        this->cType=static_cast<cardType>(cType);
        this->cVal=static_cast<cardVal>(cType);
    }


    string Card::TypeToString(cardType cVal){
    switch(cType)
    {
        case Clubs : return "Clubs";
        case Hearts : return "Hearts";
        case Diamonds : return "Diamonds";
        case Pikes : return "Pikes";
    }
    }

    string Card::ValToString(cardVal cVal){
    switch(cType)
    {
        case Two : return "Two";
        case Three : return "Three";
        case Four : return "Four";
        case Five : return "Five";
        case Six : return "Six";
        case Seven : return "Seven";
        case Eigth : return "Eigth";
        case Ten : return "Ten";
        case Valet : return "Valet";
        case Dame : return "Dame";
        case King : return "King";
        case As : return "As";

    }
    }
}

    
