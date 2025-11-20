#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(){
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};

    int num_cards, rank, suit;
    
    const char *rank_code[] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight",
                                "Nine","Ten", "Jack", "Queen", "King", "Ace"};


    const char *suit_code[] = {"Clubs", "Diamonds", "Hearts", "Spades"};

    srand((unsigned) time(NULL));

    num_cards = 5;
    
    printf("Your hand:\n");
    while (num_cards > 0)
    {
        suit = rand() % NUM_SUITS; /*Pick a random suit*/
        rank = rand() % NUM_RANKS; /*Pick a random rank*/

        if(!in_hand[suit][rank]){
            in_hand[suit][rank] = true;
            num_cards--;
            printf("%s of %s", rank_code[rank], suit_code[suit]);
        }
        printf("\n");
    }

   
    

    return 0;
}