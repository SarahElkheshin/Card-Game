#include "Player.h"
#include"Deck.h"

Player::Player()
{
   score=0;

}
Card Player::Draw(Deck &d)
{
    return d.draw();

}
void Player::addPoints()
{
    score++;

}

int Player::getScore()
{
    return score;
}
bool Player::isBenefit(const Card& c)
{
    return c==benefit;


}
// HUMAN PLAYER CLASS METHODS
HumanPlayer::HumanPlayer(std::string n)
{
    name=n;
}
void HumanPlayer::showScore()
{
    std::cout<<name<<" scored "<<getScore()<<"  ";
}
void HumanPlayer::setBenefit(int x)
{
    if (x<1 || x>52)
        x=(rand()%52)+1;
    Deck d1;
    benefit=d1.Cardat(x);
}
// MACHINE PLAYER CLASS METHODS
void MachinePlayer::showScore()
{
     std::cout<<"Computer scored "<<getScore()<<"  ";
}
 void MachinePlayer::setBenefit(int x)
{
    x=(rand()%52)+1;
    Deck d1;
    benefit= d1.Cardat(x);
}



