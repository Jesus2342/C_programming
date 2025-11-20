#include <stdio.h>
#define PIECES 8


int evaluate_position(char board[PIECES], int n);

int main(){

    /*King, Queen, Rook, Knight, Bishop, and Pawn */
    char player1[PIECES] = {'P', 'P', 'Q', 'K', 'Q', 'Q', 'P', 'P'};
    char player2[PIECES] = {'P', 'P', 'P', 'P', 'Q', 'B', 'K', 'P'};

    int score_p1, score_p2 = 0;
    int num_pieces = PIECES;

    score_p1 = evaluate_position(player1, num_pieces);
    printf("\nTotal score for p1 is %d", score_p1);

    score_p2 = evaluate_position(player2, num_pieces);
    printf("\nTotal score for p2 is %d", score_p2);

    if ((score_p2 - score_p1) > 0)
        printf("\n Player 2 won this match ");
    else
        printf("\nPlayer 1 won this match");



    return 0;
}

int evaluate_position(char board[PIECES], int n){
    char *p = &board[0];
    int total = 0;

    for (int i = 0; i < n; i++){
  
        if((*(p + i) == 'K') || (*(p + i) == 'k')){
            total += 10;
        }

        else if ((*(p + i) == 'Q') || (*(p + i) == 'q'))
        {
            total += 9;
        }

        else if ((*(p + i) == 'R') || (*(p + i) == 'r'))
        {
            total += 5;
        }

        else if ((*(p + i) == 'B') || (*(p + i) == 'b'))
        {
            total += 3;
        }

        else if ((*(p + i) == 'N') || (*(p + i) == 'n'))
        {
            total += 3;
        }

        else if ((*(p + i) == 'P') || (*(p + i) == 'p'))
        {
            total += 1;
        }
        
    }

   return total;

}






