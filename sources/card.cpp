#include <iostream>
#include "card.hpp"
#include <string>

namespace ariel{
    Card::Card(){
    }
    Card::Card(int cVal, int cType){
        this->cVal=cVal;
        this->cType=cType;
    }
    
    int Card::getType(){
        return cType;
    }
    int Card::getVal(){
        return cVal;
    }
    void Card::setVal(int newVal){
        cVal = newVal;
    }

   string Card::cardToString() {
    string ValToStr = "";
    string TypeToStr = "";
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
            ValToStr = std::to_string(cVal);
            break;
    }
       switch (cType) {
           case 1:
               TypeToStr = "Clubs";
               break;
           case 2:
               TypeToStr = "Diamonds";
               break;
           case 3:
               TypeToStr = "Hearts";
               break;
           case 4:
               TypeToStr = "Spades";
               break;

       }
    return ValToStr + " of " +TypeToStr;
}
}
