#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 10

struct Part{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
};


void part_details(struct Part **mypart);
void print_part(struct Part **mypart);

int main(){

    struct Part *p1;

    part_details(&p1);

    print_part(&p1);
    
    return 0;
}

void part_details(struct Part **mypart){
   
    strcpy((*mypart)->name, "martillo");
    (*mypart)->number = 44541;
    (*mypart)->on_hand = 14;
}

void print_part(struct Part **mypart){
    printf("Part number: %d\n", (*mypart)->number);
    printf("Part name: %s\n", (*mypart)->name);
    printf("Quatity on hand: %d\n", (*mypart)->on_hand);

}