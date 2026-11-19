#ifndef CARD_H
#define CARD_H

#define DECK_SIZE  32
#define HANDS 8

//how the structor of a card looks like
typedef struct  {
    int rank; // cz easy to compare
    char suit;
}Card;


void createDeck(Card deck[]);
void shuffleDeck(Card deck[]);
void cardsToText(Card c,char cardtext[]);

#endif