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


void search_cmd (char *user_input, Command cmd_list[]);

int main(){

    Command my_command;

    my_command.cmd_name = "open";

    search_cmd(my_command.cmd_name, file_cmd);
   
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

void search_cmd (char *user_input, Command cmd_list[]){

    for(int i = 0; i < 3; i++){
        if(cmd_list[i].cmd_name == user_input){
             printf("Executed command --> <%s>\n", cmd_list[1].cmd_name);
             return;
        }
    }

    printf("Command was not found in the list");

}