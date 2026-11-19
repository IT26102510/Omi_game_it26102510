#define DECK_SIZE  32
#define HANDS 8

//how the structor of a card looks like

typedef struct  {
    int rank; // cz easy to compare
    char suit;
}Card;


void createDeck(Card deck[]);
