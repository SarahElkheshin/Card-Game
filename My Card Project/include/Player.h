#ifndef PLAYER_H
#define PLAYER_H
#include"Card.h"
#include"Deck.h"

class Player
{
private:
        int score;

protected:
        Card benefit;
public:
        Player();
        Card Draw(Deck &d);
        void addPoints();
        int getScore();
        virtual void setBenefit(int x)=0;
        virtual void showScore()=0;
        bool isBenefit(const Card& c);



};
class HumanPlayer: public Player
{
private:
      std::string name;

public:
    HumanPlayer(){};
    HumanPlayer(std::string n);
    void setBenefit(int x);
     void showScore();
     std::string getName(){return name;}

};
class MachinePlayer: public Player
{
public:
    MachinePlayer(){};
    void setBenefit( int x);
     void showScore();

};


#endif // PLAYER_H
