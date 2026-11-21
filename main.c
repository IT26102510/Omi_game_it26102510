#include <stdio.h>
#include "game.h"
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL)); // Seed the random number generator with the current time
    int choice;
    while(1){
        printf("\n===== OMI =====\n1. Play\n2. Rules\n3. Exit\n");
        if (scanf(" %d", &choice) != 1) { //check if the input is a valid integer
            while (getchar() != '\n');   // throw away the bad input
            printf("Please enter a number.\n");
            continue;
        }

        switch (choice) {
            case 1: startGame(); break;
            case 2: showRules(); break;
            case 3: printf("Goodbye!\n"); return 0;
            default: printf("Invalid choice. Please try again.\n"); break;
        }
    }

    // cardsToText(deck[0], cardText);
}
