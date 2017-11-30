//
//  HumanPlayer.cpp
//  BlackJack
//
//  Created by Namn Namn on 2017-11-29.
//  Copyright © 2017 Nabil Babik. All rights reserved.
//

#include "HumanPlayer.hpp"

HumanPlayer:: HumanPlayer()
{
    
}
HumanPlayer ::~HumanPlayer()
{
    
}
void HumanPlayer:: PrintHand()
{
    cout<<"\nPlayer1"<<endl;
    
    Player::PrintHand();
    
}
void HumanPlayer:: setMony(int bet)
{
    this->PlayingAmount+=bet;
}
