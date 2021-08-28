#include "Deck.h"
#include <algorithm>

Deck::Deck()
{
top = 0;
 for (int i = 1; i <= 13; ++i)
 {
 Card c1(diamond, i);
 Card c2(spade, i);
 Card c3(heart, i);
 Card c4(club, i);
 cards[top++] = c1;
 cards[top++] = c2;
 cards[top++] = c3;
 cards[top++] = c4;
 }

}
void Deck::Shuffle()
{
 std::random_shuffle(cards, cards+52);
}
bool Deck::isEmpty()
{
    if (top<=0)
        return true;
    else
        return false;
}
Card Deck::draw()
{
 if (isEmpty())
     throw "Empty Deck";
 return cards[--top];
}
Card Deck::Cardat(int x)
{
    return cards[x];
}


