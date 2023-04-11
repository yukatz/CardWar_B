#include <iostream>
#include "card.hpp"
#include <string>

namespace ariel{
   
    Card::Card(int cVal, string cType){
        cVal=cVal;
        cType=cType;
    }
    
    string Card::getType(){
        return cType;
    }
    int Card::getVal(){
        return cVal;
    }

    string Card::toString() {
    string ValToStr;
    switch (cVal) {
        case 11:
            ValToStr = "Jack";
            break;
        case 12:
            ValToStr = "Queen";
            break;
        case 13:
            ValToStr = "King";
            break;
        case 14:
            ValToStr = "Ace";
            break;
        default:
            ValToStr = std::to_string(cVal);
            break;
    }
    return ValToStr + " of " + cType;
}
}

    
