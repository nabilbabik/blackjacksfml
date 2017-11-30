//
//  Player.hpp
//  BlackJack
//
//  Created by Namn Namn on 2017-11-28.
//  Copyright © 2017 Nabil Babik. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "GameHand.hpp"

class Player
{
private:
    GameHand PlayingHand;
    int TotalCard;
    
public:
    Player();
    virtual ~Player();
    bool Over21()const;
    bool BlackJack()const;
   // virtual bool WantNewCard();
    
    int getNumberOfCard() const;
    int getScore() const;
    
    virtual void PrintHand();//visar en viss hand
    void CardAdding(CardGame card); //läggtill ett kort
    GameHand GetHand(); //hämtar hnaden 
    
    
    
    

};

#endif /* Player_hpp */
