#include <stdio.h>
#include "card.h"
#include <stdlib.h>
#include <time.h>

int main(void){
    Card deck[DECK_SIZE]; // Create an array of Card structs to hold the deck
    srand(time(NULL)); // Seed the random number generator with the current time
    createDeck(deck);
    shuffleDeck(deck);


    return 0;
}
