#include <iostream>
#include "card.hpp"
#include <string>

namespace ariel{
   
    Card::Card(int cVal, int cType){
        cVal=cVal;
        cType=cType;
    }
    
    string Card::getType(){
        return cType;
    }
    int Card::getVal(){
        return cVal;
    }

    string Card::ValToString(int cVal){
    switch(cVal)
    {
        case 2 : return "Two";
        case 3 : return "Three";
        case 4 : return "Four";
        case 5 : return "Five";
        case 6 : return "Six";
        case 7 : return "Seven";
        case 8 : return "Eigth";
        case 9 : return "Ten";
        case 10 : return "Valet";
        case 11 : return "Dame";
        case 12 : return "King";
        case 13 : return "As";
        default :  return "Not valid card type";

    }
    }

    string cardToString(){
        string res = ;

    }
}

    
