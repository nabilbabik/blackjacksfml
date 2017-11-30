//
//  Dealer.hpp
//  BlackJack
//
//  Created by Namn Namn on 2017-11-29.
//  Copyright © 2017 Nabil Babik. All rights reserved.
//

#ifndef Dealer_hpp
#define Dealer_hpp

#include <stdio.h>
#include "Player.hpp"

class Dealer
{
public:
    Dealer();
    ~Dealer(); 
private:
    virtual void PrintHand();
    
};

#endif /* Dealer_hpp */
