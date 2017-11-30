//
//  GameHand.cpp
//  BlackJack
//
//  Created by Namn Namn on 2017-11-27.
//  Copyright © 2017 Nabil Babik. All rights reserved.
//

#include "GameHand.hpp"

GameHand:: GameHand()
{
    this->capacity=2 ;//man kan alltid få två kort utan att det ska överstiga 21
    this->NumberOfCards=0;
    
    CaRdS= new CardGame[capacity];
  
}
GameHand:: ~GameHand()
{
    delete [] CaRdS; //rensar handen 
}

 void GameHand:: PrintallCardsValue()
{
    for (int i=0; i<NumberOfCards; i++)
    {
        if (CaRdS[i].GetCardValue()==13)
        {
            cout<<"\nThe card is King "<<CaRdS[i].GetSuit()<<endl;
           
        }
        if (CaRdS[i].GetCardValue()==12)
        {
            cout<<"\nThe card is Queen "<<CaRdS[i].GetSuit()<<endl;
            
        }
        if (CaRdS[i].GetCardValue()==11)
        {
            cout<<"\nThe card is Jack "<<CaRdS[i].GetSuit()<<endl;
            
        }
        if (CaRdS[i].GetCardValue()==1)
        {
            cout<<"\nThe card is Ace "<<CaRdS[i].GetSuit()<<endl;
            
        }
        if (CaRdS[i].GetCardValue()<=10 && CaRdS[i].GetCardValue()>1)
        {
            cout<<"\nThe card "<< CaRdS[i].GetCardValue()<<" "<<CaRdS[i].GetSuit()<<endl;
            
        }
    }
    
   
}

int GameHand:: GetHandValue() const
{
    int sum=0;
    int a=-1;
    for (int i=0; i<NumberOfCards; i++) //
    {
        if (CaRdS[i].GetCardValue()>10 && CaRdS[i].GetCardValue()<=13)
        {
            sum +=10;
        }
        if (CaRdS[i].GetCardValue()==1 && sum>11)
        {
            sum +=1;
            a=sum;
        }
        if (CaRdS[i].GetCardValue()==1 && sum<11 && a==-1)
        {
            sum +=11;
        }
        if ((CaRdS[i].GetCardValue()>1) && (CaRdS[i].GetCardValue()<=10))
        {
            sum+= CaRdS[i].GetCardValue();
        }
        
        
    }
    return sum;
}
void GameHand:: addCard(CardGame A)
{
    if(capacity==NumberOfCards)
    {
        capacity+=NumberOfCards;
        CardGame *temp = new CardGame[capacity];
        for (int i=0; i<NumberOfCards; i++)
        {
            temp[i]= CaRdS[i];
        }
        delete [] CaRdS;
        CaRdS=temp;
    }
    CaRdS[NumberOfCards]=A;
    NumberOfCards++; 
    
}
 int GameHand:: GetNumberOfCards() const
{
    return  this->NumberOfCards; 
}

