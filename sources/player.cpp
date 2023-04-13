#include "player.hpp"

namespace ariel
{

    // Constructor:

    Player::Player(string n)
    {
        this->name_ = n;
        vector<Card> arema;//player cards
        this->score = 0;//how much cards player took
    }
    string Player::getName()
    {
        return name_;
    }
    void Player::takeCard(Card card)//using by dividing cards function
    {
        arema.push_back(card);
    }
    Card Player::droppedCard()//to use the dropped card information
    {
        Card card = arema.back();
        return card;
    }
    void Player::dropCard()//delete card from user hand
    {
        arema.pop_back();
    }

    void Player::setScoreSize(int n)
    {
        score = score + n;
    }

    int Player::stacksize()
    {
        return arema.size();
    }; // prints the amount of cards left.
    double Player::cardesTaken()
    {
        return score;
    }; // prints the amount of cards this player has won.

};