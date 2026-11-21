#include <stdio.h>
#include "card.h"
#include "players.h"


void createPlayers(Player players[], Card deck[DECK_SIZE]) {
    for (int i = 0; i < NUM_PLAYERS; i++) {
        for (int j = 0; j < 4; j++) {
            players[i].hand[j] = deck[j]; // Initialize each card in the hand
                // for(int k = 0; k < 4; k++){
                //     printf("Card rank :%d and suit: %c\n", players[0].hand[k].rank, players[0].hand[k].suit);
                // }
        }
        
        
        players[i].team = (i < 2) ? 1 : 2; // Assign players to teams
        
    }
    
    for(int i = 0; i < NUM_PLAYERS; i++){
        printf("Player %d is on team %d\n", i + 1, players[i].team);
        for(int j = 0; j < 4; j++){
            printf("Card rank :%d and suit: %c\n", players[i].hand[j].rank, players[i].hand[j].suit);
        }

    }
    

}