//
//  CardGame.hpp
//  BlackJack
//
//  Created by Namn Namn on 2017-11-26.
//  Copyright © 2017 Nabil Babik. All rights reserved.
//

#ifndef CardGame_hpp
#define CardGame_hpp

#include <string>
#include <stdio.h>
#include "iostream"
using namespace std;

class CardGame
{
private:
    int CardNumber; //kort nummer, i verje kort lek finns det 13 olika korttyper
    string suit; //hjärter, spader, klöver eller ruter
public:
    CardGame(const int& number =0, const string& face="");
    ~CardGame();
    int GetCardValue() const;
    string GetSuit() const;
    
    string toString ()const;//kanske inte behöver 
    
};


#endif /* CardGame_hpp */
