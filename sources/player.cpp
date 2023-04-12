#include "player.hpp"


namespace ariel{
    
    //Constructor:
    Player::Player(string n){
        this->name_=n;
        vector<Card>arema;
        this->score = 0;
    }
    string Player::getName(){
        return name_;
    }
    void Player::takeCard(Card card){
        arema.push_back(card);
    }
    Card Player::droppedCard(){
        Card card = arema.back();
        return card;
    }
    void Player::dropCard(){
        arema.pop_back();
    }

    void Player::setScoreSize(int n){
        score = score+n;
    }


     
    int Player::stacksize(){
        return arema.size();
        };//prints the amount of cards left.
    double Player::cardesTaken(){
        return score;
        };// prints the amount of cards this player has won.
    
};