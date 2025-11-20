#include <stdio.h>
#include <ctype.h>


int evaluate_RPN_expression(const char *expression);

int main(){
    
    char user_expression[] = "1 2 3 + +";

    int result = evaluate_RPN_expression(user_expression);
    printf("Operation result is %d", result);

    return 0;
}

int evaluate_RPN_expression(const char *expression){
    
    char my_stack[6];
    int res = 0;
    int index = 0;
    int index_op1, index_op2 = 0;


    for(int i = 0; i < 6; i++){
        my_stack[i] = '\0';
    }

    for(char const *p = expression; * p!= '\0'; p++){
        if(isdigit(*p)){
            my_stack[index] = *p  - '0';
            index++;
        }

        else{
            if(*p == 43)
            
            res = my_stack[index - 1] + my_stack[index - 2];
            my_stack[index - 2] = res;
            index = index - 1;
            
        }

        p = p + 1;

    }

    return res;

}