#include <stdio.h>
#include <string.h>

void storage_ext(char const *s, char *s_ext_fn);

int main(){

    char filename[] = "memo.txt";
    char extension[] = "";

    storage_ext(filename, extension);

    printf("Filenmae has the extension: %s", extension);
    return 0;
}

void storage_ext(char const *s, char *s_ext_fn){
    
    const char *p = strchr(s, '.'); //find the dot 
    p++;
    strcpy(s_ext_fn, p);

    

    
}