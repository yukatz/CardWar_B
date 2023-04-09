#include "player.hpp"

namespace ariel{
    
    //Constructor:
    Player::Player(string n){
        this->name_=n;
        vector<Card>arema;
        int score = 0;
    }

    void Player::takeCard(Card card){
        arema.push_back(card);
    }
    Card Player::dropCard(){
        Card card = arema.back();
        arema.pop_back();
        return card;
    }

    int Player::stacksize(){
        return 0;
        };//prints the amount of cards left. should be 21 but can be less if a draw was played
    int Player::cardesTaken(){
        return 0;
        };// prints the amount of cards this player has won.
    
};