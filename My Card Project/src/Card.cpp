#include "Card.h"

// Initialize a card to given values
Card::Card(suits sv, int rv) : rank(rv), suit(sv) {}
// Initialize a card to default values
Card::Card() : rank(1), suit(spade) {}

int Card::getRank() const
{
    return rank;
}
suits Card::getSuit() const
 {
     return suit;
 }
std::ostream& operator<<(std::ostream& out, const Card& aCard)
{
 switch(aCard.rank)
 {
 case 1: out << "Ace"; break;
 case 11: out << "Jack"; break;
 case 12: out << "Queen"; break;
 case 13: out << "King"; break;
 default: out << aCard.rank; break;
 }
 switch(aCard.suit)
 {
 case diamond: out << " of Diamonds"; break;
 case spade: out << " of Spades"; break;
 case heart: out << " of Hearts"; break;
 case club: out << " of Clubs"; break;
 }
 return out;
}

bool operator<(const Card& c1, const Card& c2)
{ return c1.rank < c2.rank; }
bool operator>(const Card& c1, const Card& c2)
{ return c1.rank > c2.rank; }
bool operator==(const Card& c1, const Card& c2)
{ return c1.rank == c2.rank; }

