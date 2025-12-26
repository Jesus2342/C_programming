#include <stdio.h>
#include <stdlib.h>

static void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

static int time_min(int hours, int min);

int main(void) {
    int desired_time_hr = 13, desired_time_min = 15;
    int static departure_time, arrival_time;


    int desired_time = (desired_time_hr * 60) + desired_time_min;


    find_closest_flight(desired_time, &departure_time, &arrival_time);
    return 0;
}

static int time_min(int hours, int min){
    return hours * 60 + min;
}


static void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){
    


    int first_dep = time_min(8,0), sec_dep = time_min(9,43),
    third_dep = time_min (11,19), fourth_dep = time_min(12,47),
    fifth_dep = time_min(14,0), sixth_dep = time_min(15,45), 
    seven_dep = time_min(19,0), eight_dep = time_min(21,45);


    int departures[] = {first_dep, sec_dep, third_dep, fourth_dep, fifth_dep, sixth_dep, seven_dep, eight_dep};

    int best_departure = departures[0];
    int min_dif = abs(desired_time - departures[0]);


    int dep_size = sizeof(departures) / sizeof(departures[0]);

    for(int i = 0; i < dep_size; i++){
        int min_dif_temp = abs((desired_time - departures[i]));

        if(min_dif_temp < min_dif){
            min_dif = min_dif_temp;
            best_departure = departures[i];
        }
    }

    int best_departure_hr = best_departure / 60;
    best_departure = best_departure - best_departure_hr * 60;

    int best_departure_min = best_departure;

    printf("Best departure: %d:%d \n", best_departure_hr,best_departure_min);

}
