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

    //search_cmd(cmd_input_user, file_cmd);

    Command my_command;

    my_command.cmd_name = "new";

    //printf("Command entered by user ---> %s\n", my_command.cmd_name);

    //printf("%s\n", file_cmd[1].cmd_name);
    
    
    for(int i = 0; i < 3; i++){
        if(my_command.cmd_name == file_cmd[i].cmd_name){
            new_cmd();
        }
    }

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
    int second_command = 1;
    printf("Executed command was -- %s", cmds[second_command]);

}