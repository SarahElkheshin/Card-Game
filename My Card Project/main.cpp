#include <iostream>
#include<Deck.h>
#include<Player.h>
#include<Card.h>
#include<Storage.h>

using namespace std;

int main()
{
    Deck d;
    d.Shuffle();
    Storage s;
    HumanPlayer p1("Sara");
    p1.setBenefit(13); // You may change this value. choose a  number between 1 and 52
    HumanPlayer p2("Jack");
  //  MachinePlayer p2;  //Uncomment this to test the single player mode and comment the line above
    p2.setBenefit(23);
    while(!d.isEmpty())
    {
        Card c1=p1.Draw(d);
        Card c2=p2.Draw(d);
        cout<<c1<<endl<<c2<<endl;
      if(p1.isBenefit(c1))
       {
           p1.addPoints();
           cout<<"PLAYER 1 BENEFIT CARD"<<'\n';

       }
    else if(p2.isBenefit(c1))
        {
            cout<<"Player 2 BENEFIT CARD"<<'\n';
              p2.addPoints();
        }
    else if (c1 == c2)
     {
           p1.addPoints();
           p2.addPoints();
           cout << "Players tie" << endl;
      }
      else if (c1 > c2)
       {
            p1.addPoints();
            cout << "Player 1 wins round" << endl;
       }
       else
        {
               p2.addPoints();
             cout << "PLayer 2 wins round" << endl;
        }
    }
    s.addPlayerScore(p1);
    s.addPlayerScore(p2); //comment this for single player mode test
    p1.showScore();
    p2.showScore();
    cout<<"The score has been added to the results file\n";

    // s.ReadFile(); // Uncomment to read the history of scores

}
