#include <stdio.h>
#include "card.h"

int main(void){
    Card deck[DECK_SIZE]; // Create an array of Card structs to hold the deck
    createDeck(deck);

    return 0;
}
