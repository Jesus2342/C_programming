#include <stdio.h>
#include <math.h>

void split_date(int day_of_year, int year, int *month, int *day);



int main(){

    int day_of_year = 48, day = 0, month = 0, year = 2005;

    
    split_date(day_of_year, year, &month, &day);


    return 0;
}
void split_date(int day_of_year, int year, int *month, int *day){
    
   double month_temp = 0.0;
   month_temp = ceil((double)day_of_year / 30);

   
   *month = (int)month_temp;
   *day = day_of_year - ((day_of_year / 30)*30);

    printf("Month %d Day: %d \n", *month, *day);
    
    


}
