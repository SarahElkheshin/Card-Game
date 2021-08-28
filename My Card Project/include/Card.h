#ifndef CARD_H
#define CARD_H
#include <iostream>
enum suits {diamond, club, heart, spade};
class Card
{
    friend std::ostream& operator<<(std::ostream& out, const Card& aCard);
    public:
 // Constructors
 Card(); // initialize a card with default values
 Card(suits, int); // initialize a card with given values
 int getRank() const;
 suits getSuit() const;
protected:
 // Member variables (attributes)
 int rank;
 suits suit;
// Output a card to an output stream

// Define ordering relationships on cards
friend bool operator<(const Card&, const Card&);
friend bool operator>(const Card&, const Card&);
friend bool operator==(const Card&, const Card&);
};
std::ostream& operator<<(std::ostream& out, const Card& aCard);
#endif // CARD_H
