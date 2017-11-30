//
//  Cards.hpp
//  BlackJack
//
//  Created by Nabil on 2017-11-26.
//  Copyright © 2017 Nabil Babik. All rights reserved.
//

#ifndef Cards_hpp
#define Cards_hpp
#include "CardGame.hpp"
#include <stdio.h>
#include <cstdlib>
#include "iostream"
using namespace std;

class Cards
{
private:
    
    CardGame card[52]; //varje kortlek har 52 kort
    int cardRemover;//minskar på cardGame arrayen (håller koll på dem korten som har blivit använda
    int count;//håller koll på antal kort som är kvar
    
    
    
    
public:
    Cards();
    ~Cards();
    void CreatDeck();//skapar en kort lek med olika faces
    void CardsShuffeling();//blandar alla kort med varandra 100 gånger om
    int cardLeft() const;//
    string ShowTheWholeDeck()const;
    CardGame RemoveCard();//minska på arrayen
    
};


#endif /* Cards_hpp */
