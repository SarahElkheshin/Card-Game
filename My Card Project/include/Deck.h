#ifndef DECK_H
#define DECK_H
#include"Card.h"


class Deck
{

  protected:
    Card cards[52];
    int top;
public:
    Deck();
    bool isEmpty();
    void Shuffle();
    Card draw();
    Card Cardat(int x);

};

#endif // DECK_H
