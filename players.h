#ifndef PLAYERS_H
#define PLAYERS_H

#include "card.h"
#define NUM_PLAYERS 4

typedef struct {
    Card hand[8]; // Each player has a hand of 8 cards
    int team;    // Player's team (1 or 2)
} Player;

void createPlayers(Player players[], Card deck[DECK_SIZE]);

#endif