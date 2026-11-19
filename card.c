#include <stdio.h>
#include "card.h"
#include <stdlib.h>


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

//using the Fisher-Yates shuffle algorithm to shuffle the deck of cards
void shuffleDeck(Card deck[]){
    //take one card from the deck and swap it with another card in the deck randomly
    for (int i = DECK_SIZE - 1; i > 0; i--) {      
    int j = rand() % (i + 1);       
    Card temp = deck[i];            
    deck[i] = deck[j];
    deck[j] = temp;
}
    for(int i = 0; i < DECK_SIZE; i++){
        printf("Card %d: Rank %d, Suit %c\n", i + 1, deck[i].rank, deck[i].suit);
    }

}


//Representing the cards in words

void cardsToText(){}





