#include <iostream>
#include "card.hpp"
#include <string>

namespace ariel{
   
    Card::Card(int cVal, string cType){
        this->cVal=cVal;
        this->cType=cType;
    }
    
    std::string Card::getType(){
        return cType;
    }
    int Card::getVal(){
        return cVal;
    }

   string Card::cardToString() {
    std::string ValToStr;
    switch (cVal) {
         case 2:
            ValToStr = "Two";
            break;
        case 3:
            ValToStr = "Three";
            break;
        case 4:
            ValToStr = "Four";
            break;
        case 5:
            ValToStr = "Five";
            break;
        case 6:
            ValToStr = "Six";
            break;
        case 7:
            ValToStr = "Seven";
            break;
        case 8:
            ValToStr = "Eight";
            break;
        case 9:
            ValToStr = "Ningh";
            break;
        case 10:
            ValToStr = "Ten";
            break;
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
            //ValToStr = std::to_string(cVal);
            break;
    }
    return ValToStr + " of " + cType;
}
}

    
