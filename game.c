#include <stdio.h>
#include "card.h"
#include "game.h"
#include "players.h"


void showRules() {
    printf("Welcome to the game!\n");
    printf("The game is played with a deck of 32 cards, consisting of ranks 7 to Ace in four suits: Hearts (H), Diamonds (D), Clubs (C), and Spades (S).\n");
    printf("Each player is dealt 8 cards, and the objective is to win tricks by playing the highest card of the leading suit or by playing a trump card.\n");
    printf("The game is played in teams, with two players on each team. The team that wins the most tricks wins the game.\n");
    printf("Good luck and have fun!\n");
}


void startGame() {
    Card deck[DECK_SIZE]; // Create an array of Card structs to hold the deck
    Player players[NUM_PLAYERS]; // Create an array of Player structs to hold the players
    // char cardText[DECK_SIZE]; // Array to hold the text representation of each card
    
    createDeck(deck);
    shuffleDeck(deck);
    createPlayers(players, deck);

}
