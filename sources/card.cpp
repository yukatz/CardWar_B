
#include "card.hpp"
#include <string.h>


namespace ariel{
   
    Card::Card(int cType, int cVal):
    cType(static_cast<cardType>(cType)),
    cVal(static_cast<cardVal>(cType)){}




    }
