
#include "game.hpp"
#include <random>
#include "card.hpp"
#include <vector>

using namespace std;


namespace ariel{

    
    Game::Game(Player &p1, Player &p2):p1_(p1),p2_(p2){
      if(&p1!=&p2){
       vector<Card>cardSet_;
       string lastTurn = "";
       string log = "";
       flag=0;

       for(int i=2; i<15; i++){
        Card card1(i,20);
        Card card2(i,30);
        Card card3(i,40);
        Card card4(i,50);
        cardSet_.push_back(card1);
        cardSet_.push_back(card2);
        cardSet_.push_back(card3);
        cardSet_.push_back(card4);
       }
      std::random_device shVal;
      std::mt19937 gen(shVal());
      shuffle(cardSet_.begin(),cardSet_.end(),gen);

      for(int i=1;i<53;i=i+2){
        Card card1 = cardSet_[static_cast<vector<Card>::size_type>(i)];
        Card card2 = cardSet_[static_cast<vector<Card>::size_type>(i+1)];
        p1_.takeCard(card1);
        p2_.takeCard(card2);
      }
     }else throw std::out_of_range("Must enter 2 different players");
    }

    void Game::playTurn(){
      if(flag==0){
        Card card1 = p1_.droppedCard();
        Card card2 = p2_.droppedCard();
        p1_.dropCard();
        p2_.dropCard();

        lastTurn = p1_.getName() + " played "+card1.TypeToString(card1.getType())+" of "+card1.ValToString(card1.getVal())+
                   p2_.getName() + "played "+card2.TypeToString(card2.getType())+" of "+card2.ValToString(card2.getVal())+".";

      if(card1.getVal()>card2.getVal()){
        p1_.setScoreSize(2);
        lastTurn = lastTurn + " "+p1_.getName() + "wins.";
       
      }
      if(card1.getVal()<card2.getVal()) {
        p2_.setScoreSize(2);
        lastTurn = lastTurn + " "+p1_.getName() + "wins.";
      }
      if(card1.getVal()==card2.getVal()){
        lastTurn = lastTurn + "Draw. ";
        p1_.dropCard();
        p2_.dropCard();
        p1_.setScoreSize(2);
        p2_.setScoreSize(2);
        playTurn();
      }
      log = log + lastTurn;
      } else throw std::out_of_range("Game over");
    };


    void Game::printLastTurn(){//print the last turn stats.
      cout<<lastTurn<<endl;
    }; 
                                                    // Alice played Queen of Hearts Bob played 5 of Spades. Alice wins.
                                                    // Alice played 6 of Hearts Bob played 6 of Spades. Draw. Alice played 10 of Clubs Bob played 10 of Diamonds. draw. Alice played Jack of Clubs Bob played King of Diamonds. Bob wins.
    void Game::playAll(){//playes the game untill the end
      while((p1_.cardesTaken() + p2_.cardesTaken())>52){
        playTurn();
      }
      flag = 1;
    }; 
    void Game::printWiner(){// prints the name of the winning player
       if(p1_.cardesTaken()>p1_.cardesTaken()){
        cout<<p1_.getName()<<endl;
       }
       if(p1_.cardesTaken()<p1_.cardesTaken()){ 
        cout<<p2_.getName()<<endl;
       }
       if(p1_.cardesTaken()==p1_.cardesTaken()){
        cout<<"Draw"<<endl;
       }
    }; 
    void Game::printLog(){//prints all the turns played one line per turn (same format as game.printLastTurn())
      cout<<log<<endl;
    }; 
    void Game::printStats(){// For each player prints basic statistics:
      
    };
    // win rate, cards won, <other stats you want to print>.
    // Also print the draw rate and amount of draws that happand.
    // (draw within a draw counts as 2 draws. )



};