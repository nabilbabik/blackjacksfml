//
//  CardGame.cpp
//  BlackJack
//
//  Created by Namn Namn on 2017-11-26.
//  Copyright © 2017 Nabil Babik. All rights reserved.
//

#include "CardGame.hpp"

CardGame:: CardGame(const int& number , const string& face)
{
    this->CardNumber= number;
    this->suit= face; 
}
CardGame:: ~CardGame()
{
    
}
int CardGame:: GetCardValue() const
{

    return this->CardNumber; 
}
string CardGame:: GetSuit() const
{
    return suit;
}

 string CardGame:: toString ()const
{
    string a;
    a+= "\The value of card is "+ to_string(GetCardValue())+ " and the face is " + suit+ "\n";
    return a;
}
