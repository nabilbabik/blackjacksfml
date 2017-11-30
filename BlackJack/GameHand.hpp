//
//  GameHand.hpp
//  BlackJack
//
//  Created by Namn Namn on 2017-11-27.
//  Copyright © 2017 Nabil Babik. All rights reserved.
//

#ifndef GameHand_hpp
#define GameHand_hpp

#include <stdio.h>
#include "CardGame.hpp"

class GameHand
{
private:
    CardGame *CaRdS; //varje "hand" består av x antal korte, antalet kort bestäms av spelaren/delern
    int NumberOfCards; // hur många kort det finns i hand just nu
    int capacity; //storleken på hand arrayen
public:
    GameHand();
    ~GameHand(); //rensa handen
    
    
    void PrintallCardsValue(); //tar även hand om kungen, prinsen, drottningen och ess 
    void addCard(CardGame A); //lägger till ett kort på handen samt expandera arrayen ifall det behövs
    
    
    
    int Getvalue() const;
    int GetHandValue() const;
     
    int GetNumberOfCards() const;
    
    
    
    
};

#endif /* GameHand_hpp */
