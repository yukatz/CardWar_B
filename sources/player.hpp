#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "card.hpp"

using namespace std;
namespace ariel{
class Player{
  private:   
    string name_ = "";
    int score;
    vector<Card> arema;

 
    //Constructor:
  public:

    Player(string n);
    std::string getName();

    void takeCard(Card card);
    Card droppedCard();
    void dropCard();
    //Functions:
    void setScoreSize(int n);
    int stacksize();//prints the amount of cards left. should be 21 but can be less if a draw was played
    double cardesTaken();// prints the amount of cards this player has won.
    
};
};