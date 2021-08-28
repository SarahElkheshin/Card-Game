#ifndef STORAGE_H
#define STORAGE_H
#include <string>
#include<Player.h>


class Storage
{
private:
    std::string myFile="‪‪‪‪scores.txt";
   // int* pData;
   HumanPlayer *pData;
    int n;
public:
    Storage();
    bool addPlayerScore(const HumanPlayer& x);
    void ReadFile();


};

#endif // STORAGE_H
