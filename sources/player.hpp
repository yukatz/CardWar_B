#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <card.hpp>

using namespace std;
namespace ariel{
class Player{
  private:   
    string name_;
    vector<Card> arema;
 
    //Constructor:
  public:
    Player(string n);
    
    //Functions:
    int stacksize();//prints the amount of cards left. should be 21 but can be less if a draw was played
    int cardesTaken();// prints the amount of cards this player has won.
    
};
};