#include <iostream>
#include "card.hpp"
#include <string>

namespace ariel{
   
    Card::Card(int cType, int cVal){
        cType=cType;
        cVal=cVal;
    }
    
    int Card::getType(){
        return cType;
    }
    int Card::getVal(){
        return cVal;
    }

    string Card::TypeToString(int cTtype){
    switch(cType)
    {
        case 20 : return "Clubs";
        case 30 : return "Hearts";
        case 40 : return "Diamonds";
        case 50 : return "Pikes";
        default: 
           throw std :: out_of_range("Not valid card type");
    }
    }

    string Card::ValToString(int cVal){
    switch(cType)
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
         default: 
           throw std :: out_of_range("Not valid card value");

    }
    }
}

    
