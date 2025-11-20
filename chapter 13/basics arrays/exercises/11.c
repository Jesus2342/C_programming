#include <stdio.h>

int my_strcmp(char *s1, char *s2);

int main(){

    char my_string[] = "fooz";
    char my_s2[] = "foox";
    int response = my_strcmp(my_string, my_s2);
    
    
    printf("%d", response);
    return 0; 
}

int my_strcmp(char *s1, char *s2){
 
    char *p1 = s1;
    char *p2 = s2;

    int state;

    while(*p1 != '\0'){
        
        if(*p1 == *p2){
            state = 0;
            p1++, p2++;
        }
        else if(*p1 < * p2){
            state = -1;
            break;
        }
        else
        {
            state = 1;
            break;
        }
    }
    return state;
}