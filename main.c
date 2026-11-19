#include <stdio.h>
#include "card.h"
#include <stdlib.h>
#include <time.h>

int main(void){
    Card deck[DECK_SIZE]; // Create an array of Card structs to hold the deck
    char cardText[DECK_SIZE][20]; // Array to hold the text representation of each card
    srand(time(NULL)); // Seed the random number generator with the current time
    createDeck(deck);
    shuffleDeck(deck);
    // cardsToText(deck[0], cardText[0]);
    

    return 0;
}
