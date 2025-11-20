#include <stdio.h>
#define PIECES 8




int main(){

    
    char player1[PIECES] = {'A', 'B', 'K', 'D', 'E', 'k', 'G', 'H'};
    int total = 0;

    int n = 6;
    char *p = &player1[0];
    
    for (int i = 0; i < n; i++){
  
        if((*(p + i) == 'K') || (*(p + i) == 'k')){
            total += 10;
        }
    }

    printf("%d", total);



    return 0;
}

