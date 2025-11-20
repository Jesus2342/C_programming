#include <stdio.h>
#include <string.h>

void revert_string(char *s);


int main(){

    char my_string[] = "test rev?"; //this is sting literl. You can only read. No operaions like strcpy or strcmp are NOT allowed. 

    revert_string(my_string);

    printf("%s", my_string);
    return 0;
}

void revert_string(char *s){

    char *p = s;
    char reverse[60];
    int count = 0, end = 0;

    while (*p != '\0')
    {
        p++;
        count += 1;
    }

    reverse[count] = '\0';
    count--;

    end = count;
    count = 0;

    while (count <= end)
    {
        reverse[count] = *(p-1);
        count++;
        p--;
    }
    
    char *p2 = reverse;

    strcpy(s, p2);

}