//
//  Cards.cpp
//  BlackJack
//
//  Created by Namn Namn on 2017-11-26.
//  Copyright © 2017 Nabil Babik. All rights reserved.
//

#include "Cards.hpp"
Cards:: Cards()
{
    
    this->count=0;
    this->cardRemover=0;
    
}
Cards:: ~Cards()
{
    
}
void Cards:: CreatDeck()
//varje suit ska har 13 olika kort
{
    
    string Suit[4]={"hjärter", "klöver", "ruter","spader"};
    CardGame c;
    for (int i=0; i<4; i++)
    {
        for (int g=0; g<13; g++)
        {
             c = CardGame(g+1,Suit[i]);//g+1 då vi inte vill ha 0 som värde 
            card[count++]=c;
        }
    }
    
}

 int Cards:: cardLeft() const
{
   return  (52-this->cardRemover);
}
void Cards:: CardsShuffeling()
{
    srand(time(0));
    CardGame temp;
    for (int i=0; i<52; i++)
    {
        int g = rand()%52;
        temp = card[g];
        card[g] = card[i];
        card[i]=temp;
    }
    
    
    
}
string Cards :: ShowTheWholeDeck()const
{
    string a;
 
    for (int i=0; i<52; i++)
    {
//        a+="\nThe number of card is "+ to_string( card[i].GetCardValue())+" and the face is " + card[i].GetSuit()+"\n" ;
        
       a+= card[i].toString();
    }
    return a;
}


CardGame Cards::RemoveCard()
{
    cardRemover++;
    
    return card[52-cardRemover];
    
}
