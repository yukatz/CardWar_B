#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "card.hpp"

using namespace std;
namespace ariel{
class Player{
  private:   
    string name_;
    int score;
 
    //Constructor:
  public:
    vector<Card> arema;
    Player(string n);
    string getName();

    void takeCard(Card card);
    Card dropCard();
    //Functions:
    void setStackSize(int n);
    int stacksize();//prints the amount of cards left. should be 21 but can be less if a draw was played
    int cardesTaken();// prints the amount of cards this player has won.
    
};
};