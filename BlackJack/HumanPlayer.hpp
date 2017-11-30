//
//  HumanPlayer.hpp
//  BlackJack
//
//  Created by Namn Namn on 2017-11-29.
//  Copyright © 2017 Nabil Babik. All rights reserved.
//

#ifndef HumanPlayer_hpp
#define HumanPlayer_hpp

#include <stdio.h>
#include "Player.hpp"

class HumanPlayer: public Player
{
public:
    HumanPlayer();
    ~HumanPlayer();
    virtual void PrintHand();
    int getTotalMony() const;
    void setMony(int bet); 
    
    
    
private:
    
    int PlayingAmount;
    
};

#endif /* HumanPlayer_hpp */
