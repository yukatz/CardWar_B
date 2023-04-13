# CPP course - Exercise 2 Cards War Game
![image](https://user-images.githubusercontent.com/92925727/227800434-5aa567b8-2f11-42c1-a7e2-3a29d3651ec0.png)


### Introduction
This is my second project in the CPP course - implementatio of cards War game.
This assignment is divided into 2:
- [1] Create classes for proper compilation of the demo.cpp and at least 20 test to functions given in demo.cpp.
- [2] The implementation of the functions.

### The 2'st part mission
Implement the war game. Two different players enter the game, get 26 cards and start playing. In each turn, both players throw a card on the table, whoever threw a higher card takes both cards to him. If two equal cards come out, a draw is declared, the two players throw one closed card and another open card and decide according to the value. If there is a draw and the cards run out, each player takes the cards he threw. The game ends when there are no cards left for the players in their hand, a maximum of 26 turns (less than 26 when the rest was a draw).
 
### Main Classes
- [x] **Player** 
  >Arguments:
  - Name (string)
  - Score (int) - how much cards he won during the game.
  - Arema (vector) - cards he get at the beggining.
  >Functions:
  - getName
  - takeCard - using vector "push_back"
  - droppedCard - using vector "back" to use droped card info.
  - dropCard - using  vector "pop_back"
  - setScoreSize - to grow player score
  - stacksize - prints the amount of cards left
  - cardesTaken - prints the amount of cards this player has won
- [x] **Game**
  >Arguments:
  - &p1_ - player 1
  - &p2_ - player 2
  - lastTurn - string that presents the last turn stats
  - string log - string that presents all turns stats
  - double numOfTurns - count the number of turns played
  - double drawFlag - flag for draw, helps me to do things with draw cases
  - double numOfDraws - count the number of draws
  - cardSet_ - full cars deck
  >Functions:
  - playTurn();
  - printLastTurn() - print the last turn stats
  - playAll() - playes the game untill the end
  - printWiner() - prints the name of the winning player
  - printLog() - prints all the turns played one line per turn (same format as game.printLastTurn())
  - printStats() - for each player prints basic statistics.  
- [x] **Card** 
  >Arguments:
  - cVal - the value of the card (2,3,...,Jack,..King,As)
  - cType - the type of the card (Clubs, Diamonds, Hearts, Spades)
  >Functions:
  - getType
  - getVal
  - setVal - for the case when two cards are As and Two and I swap them.
  - cardToString - card to string











    







