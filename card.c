#include <stdio.h>
#include "card.h"



void createDeck(Card deck[]){
     char suits[] = {'H', 'D', 'C', 'S'}; // Hearts, Diamonds, Clubs, Spades

    int i = 0;

//populating the deck with cards (all the possible combinations of rank and suit)
    for(int s = 0 ; s < 4; s++){
        for(int r = 7 ; r <= 14; r++){
            deck[i].rank = r;
            deck[i].suit = suits[s];
            i++;
        }
    }






}