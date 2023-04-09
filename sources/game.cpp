
#include "game.hpp"
#include "card.hpp"


namespace ariel{
    Game::Game(Player p1, Player p2):
    p1_(p1),p2_(p2),cardSet_(vector<Card>{}){}
    
    void Game::cardSet(){
      int Types[]={20,30,40,50};
      int Values[]={2,3,4,5,6,7,8,9,10,11,12,13,14};
      int index = 0;
      for(int i = 0; i < 4; i++){
        for(int j = 0; i < 13; i++){
          Card card(Types[i],Values[j]);
          cardSet_.push_back(card);
        }
      }
      shuffle(cardSet_.begin(),cardSet_.end(),52);
      
    };



    void Game::devCards(){

    };
    



    void Game::playTurn(){};


    void Game::printLastTurn(){};//print the last turn stats. For example:
                                                    // Alice played Queen of Hearts Bob played 5 of Spades. Alice wins.
                                                    // Alice played 6 of Hearts Bob played 6 of Spades. Draw. Alice played 10 of Clubs Bob played 10 of Diamonds. draw. Alice played Jack of Clubs Bob played King of Diamonds. Bob wins.
    void Game::playAll(){}; //playes the game untill the end
    void Game::printWiner(){}; // prints the name of the winning player
    void Game::printLog(){}; // prints all the turns played one line per turn (same format as game.printLastTurn())
    void Game::printStats(){};// for each player prints basic statistics: win rate, cards won, <other stats you want to print>. Also print the draw rate and amount of draws that happand. (draw within a draw counts as 2 draws. )



};