#include "game.hpp"
#include <random>
#include "card.hpp"
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
namespace ariel {

    Game::Game(Player &p1, Player &p2) : p1_(p1), p2_(p2) {
        vector<Card>cardSet_;
       this->lastTurn = "";
       this->log = " ";
        this->numOfTurns = 0;
        this->drawFlag = 0;
        this->numOfDraws = 0;


        //Creating the cards, using Card constructor and pushing them to temporaray vector.
        for (int i = 2; i < 15; i++) {
            Card card1(i, 1);
            Card card2(i, 2);
            Card card3(i, 3);
            Card card4(i, 4);
            cardSet_.push_back(card1);
            cardSet_.push_back(card2);
            cardSet_.push_back(card3);
            cardSet_.push_back(card4);
        }
        //Random shuffle cards deck of cards
        std::random_device shVal;
        std::mt19937 gen(shVal());
        shuffle(cardSet_.begin(), cardSet_.end(), gen);

        //Dividing the cards between two players
        for (int i = 1; i < 53; i = i + 2) {
            Card card1 = cardSet_[static_cast<vector<Card>::size_type>(i)];
            Card card2 = cardSet_[static_cast<vector<Card>::size_type>(i + 1)];
            p1_.takeCard(card1);
            p2_.takeCard(card2);
        }
    }

    void Game::playTurn() {
      if (p1_.stacksize() != 0 && p2_.stacksize() != 0) {
        if (&p1_ != &p2_) {
                Card card1 = p1_.droppedCard();
                Card card2 = p2_.droppedCard();
                p1_.dropCard();
                p2_.dropCard();
                numOfTurns++;
        lastTurn = lastTurn+p1_.getName() + " played "+card1.cardToString() +
                   p2_.getName() + " played "+card2.cardToString() + ".";
                if ((card1.getVal() == 14 && card2.getVal() == 2) ||
                    (card1.getVal() == 2 && card2.getVal() == 14)) {//As smaller then two
                    int temp = card1.getVal();
                    card1.setVal(card2.getVal());
                    card2.setVal(temp);
                }
                if (card1.getVal() > card2.getVal()) {
                    if (drawFlag == 1) {
                        p1_.setScoreSize(6);
                    } else { p1_.setScoreSize(2); }
                    drawFlag = 0;
        lastTurn = lastTurn + p1_.getName() + " wins.\n";

                }
                if (card1.getVal() < card2.getVal()) {
                    if (drawFlag == 1) {
                        p2_.setScoreSize(6);
                    } else { p2_.setScoreSize(2); }
                    drawFlag = 0;
        lastTurn = lastTurn +p2_.getName() + " wins.\n";
                }
                if (card1.getVal() == card2.getVal()) {
        lastTurn = lastTurn + "Draw.\n";
                    if (p1_.stacksize() == 1 && p2_.stacksize() == 1) {
                        p1_.setScoreSize(1);
                        p2_.setScoreSize(1);
                        numOfDraws++;
                    } else {
                        p1_.dropCard();
                        p2_.dropCard();
                        numOfTurns++;
                        drawFlag = 1;
                        numOfDraws++;
                    }

                }
      log = log + lastTurn;
            } else throw std::out_of_range("Game over");//Blocks another turn after the game is over.
        } else throw std::out_of_range("Must enter 2 different players");//Only becouse the test case.


    };

    void Game::printLastTurn() {//print the last turn stats.
      cout<<lastTurn<<endl;
    };

    // Alice played Queen of Hearts Bob played 5 of Spades. Alice wins.
    // Alice played 6 of Hearts Bob played 6 of Spades. Draw. Alice played 10 of Clubs Bob played 10 of Diamonds. draw. Alice played Jack of Clubs Bob played King of Diamonds. Bob wins.
    void Game::playAll() {//playes the game untill the end
       while (p1_.stacksize() != 0 && p2_.stacksize() != 0) {
            playTurn();
        }
    };

    void Game::printWiner() {// prints the name of the winning player
        if (p1_.cardesTaken() > p2_.cardesTaken()) {
            string name = p1_.getName();
            cout << name << endl;
        }
        if (p1_.cardesTaken() < p2_.cardesTaken()) {
            string name = p2_.getName();
            cout << name << endl;
        }
        if (p1_.cardesTaken() == p2_.cardesTaken()) {
            std::string str = "Draw";
            cout << str << endl;
        }
    };


    void Game::printLog() {//prints all the turns played one line per turn (same format as game.printLastTurn())
      cout<<log<<endl;
      log = "";
    };


    void Game::printStats() {
        cout << p1_.getName() << " and " << p2_.getName() << " played " << numOfTurns << " turns." << endl;
        cout << p1_.getName() << " wins " << p1_.cardesTaken() / 2 << " times." << endl;
        int rate1 = static_cast<int>(((p1_.cardesTaken() / 2) / 26) * 100);
        cout << p1_.getName() << " win rate is " << rate1 << "%" << endl;
        cout << p1_.getName() << " took " << p1_.cardesTaken() << " cards." << endl;
        cout << p2_.getName() << " wins " << p2_.cardesTaken() / 2 << " times." << endl;
        int rate2 = static_cast<int>(((p2_.cardesTaken() / 2) / 26) * 100);
        cout << p2_.getName() << " win rate is: " << rate2 << "%" << endl;
        cout << p2_.getName() << " took " << p2_.cardesTaken() << " cards." << endl;
        cout << "In this game were " << numOfDraws << " darws" << endl;
        int draw = static_cast<int>((numOfDraws / 26) * 100);
        cout << "Draw's rate:  " << draw << "%" << endl;
        // For each player prints basic statistics:

    };
    // win rate, cards won, <other stats you want to print>.
    // Also print the draw rate and amount of draws that happand.
    // (draw within a draw counts as 2 draws. )



};