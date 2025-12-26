#include <stdio.h>

void slip_time(long total_sec, int *hr, int *min, int *sec);

int main(){

    long total_sec = 30605;
    int hr = 0, min = 0, sec = 0;


    slip_time(total_sec, &hr, &min, &sec);


    return 0;
}
void slip_time(long total_sec, int *hr, int *min, int *sec){

    *hr = total_sec / 3600; //3.3432 --- 3
    *min =  (total_sec % 3600) / 60 ; 
    *sec =  (total_sec % 3600) -(*min * 60) ;

    printf("Hours: %d, Min: %d, Seconds:  %d", *hr, *min, *sec);


}
