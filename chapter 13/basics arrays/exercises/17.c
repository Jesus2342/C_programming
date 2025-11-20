#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


bool test_extension(const char *file_name, const char *extension);

int main(){
    
    char my_filename[] = "memo.txt";
    
    if (test_extension(my_filename, "TXT"))
        printf("Correct file extension");
    
    else{
        printf("file name does not have this extension");
    }

    return 0;
}

bool test_extension(const char *file_name, const char *extension){


    char *dot = strchr(file_name, '.');
    char buff[64];

    strncpy(buff, (dot + 1),sizeof(buff) - 1);
    buff[sizeof(buff) - 1] = '\0';

    for (char *p = buff; *p; p++){
        *p = toupper((unsigned char) * p);
    }
    
    return strcmp(buff, extension) == 0;

}