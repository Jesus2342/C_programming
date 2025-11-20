#include <stdio.h>
#include <string.h>
void remove_filename(char *url);

int main(){

    char my_url[] = "http://www.knking.com/index.html";
    remove_filename(my_url);
    printf("%s", my_url);
    return 0;
}

void remove_filename(char *url){
  
    char *p = url;
    
    while(*p != '\0'){
        p++;
    }
    while(*p != '/'){
        p--;
    }
    *p = '\0';
}

   


 
