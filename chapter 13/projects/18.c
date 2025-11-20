#include <stdio.h>

int main(){

    char *months[] = {"January", "February", "March", "April", "May", "Jun", "July", "Aug", "Sep", 
                      "Oct", "Nov", "Dec"};

    char user_date[] = "12/17/2011";
    
    int month, day, year;

    sscanf(user_date, "%d/%d/%d", &month, &day, &year);
    month--;

    printf("%s %d, %d", months[month], day, year);

    

    


    return 0;
}