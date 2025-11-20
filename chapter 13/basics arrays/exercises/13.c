#include <stdio.h>
#include <string.h>
void build_index_url(const char *domain, char *index_url);

int main(){

    char s_url[] = "knking.com";
    char s_end_url[50] = "";

    build_index_url(s_url,s_end_url);

    printf("%s", s_end_url);

    return 0;
}


void build_index_url(const char *domain, char *index_url){

    char s1[50];

    strcpy(s1, "https//www.");
    strcat(s1, domain);
    strcpy(index_url, s1);
    

}