#include "player.hpp"

namespace ariel{
    
    //Constructor:
    Player::Player(string n){
        this->name_=n;
        vector<Card>arema;
        int score = 0;
    }
    string Player::getName(){
        return name_;
    }
    void Player::takeCard(Card card){
        arema.push_back(card);
    }
    Card Player::dropCard(){
        Card card = arema.back();
        arema.pop_back();
        return card;
    }
    void Player::setStackSize(int n){
        score== score+n;
    }
    int Player::stacksize(){
        return arema.size();
        };//prints the amount of cards left.
    int Player::cardesTaken(){
        return score;
        };// prints the amount of cards this player has won.
    
};