//
//  Player.cpp
//  BlackJack
//
//  Created by Namn Namn on 2017-11-28.
//  Copyright © 2017 Nabil Babik. All rights reserved.
//

#include "Player.hpp"

Player:: Player()
{
    TotalCard=PlayingHand.GetNumberOfCards();
}
Player:: ~Player()
{
    
}
GameHand Player:: GetHand()
{
    return PlayingHand;
}
bool Player:: Over21()const
{
    bool k= true;
    if(PlayingHand.GetHandValue()>21)
    {
        k= false;
    }
    return k; 
}
bool Player:: BlackJack()const
{
    bool k=false;
    if(PlayingHand.GetHandValue()==21&&PlayingHand.GetNumberOfCards()==2)
    {
        k= true;
    }
    return k; 
}
void Player:: PrintHand()
{
    cout<<"\nTotal card is "<< this->TotalCard<<endl;
    PlayingHand.PrintallCardsValue();
    
} void Player:: CardAdding(CardGame card)
{
    PlayingHand.addCard(card);
    TotalCard++; 
}
int Player:: getNumberOfCard() const
{
    return this->TotalCard; 
}
int Player:: getScore() const
{
    return PlayingHand.GetHandValue();
    
}

