#include <stdio.h>
#include <stdlib.h>


void new_cmd(void);
void open_cmd(void);
void close_cmd(void);

typedef struct {
    char *cmd_name;
    void (*cmd_pointer)(void);
} Command;


Command file_cmd[] = 
{{"new", new_cmd},
  {"open", open_cmd}, 
  {"close", close_cmd}
};


void search_cmd (char *user_input, Command cmds[]);

int main(){

    char *cmd_input_user = "new";

    search_cmd(cmd_input_user, file_cmd);



    return 0;
}

void new_cmd(void){
    printf("------RESPONSE-----New cmd created");
}

void open_cmd(void){
    printf("------RESPONSE-----Open CMD");
}
void close_cmd(void){
    printf("------RESPONSE----- CLOSE CMD");
}

void search_cmd (char *user_input, Command cmds[]){
    
}