#include <stdio.h>
#include <string.h>

#define MSG_LEN 60 //length of message
#define MAX_REMINDERS 50 

void read_line(char str[], int n);

int main()
{
    char day_str[3]; //2 numbers like 15 or 24 plus the null character
    char msg_str[MSG_LEN + 1]; //Contendra el contenido de los reminders s decir el "string" 
    char reminders[MAX_REMINDERS][MSG_LEN + 3]; //Almancena 50 strings con una longitud maxima 
                                                //60 del mensaje + 2 de la fecha + null character.
    
    int i;
    int j;
    int num_reminder = 0;
    
    int day;
    for(;;){
        
        printf("Enter a reminder: ");
        scanf("%2d", &day);

        if(day == 0){
            break;
        }
        
        //sprintf(buffer_output, format, input variable)
        sprintf(day_str, "%2d", day); //creating the day_str based on day.
        
        read_line(msg_str, MSG_LEN);
        
        
        //At the begging no i = 0 and num_reminder = 0 
        //therefore for is false
        //----
        
        
        // first iteration 
        // num_reminder = 0
        // reminders[0] = "31 attend to class"
        
        // second iteration 
        // num_reminder now is 1
        
        //we input 14 go to class
        // day_str: 14 
        
        //day_str 14 < reminders[0] or day_str 14 < 31 attend to class so if this is true then break;
        
        for(i = 0; i < num_reminder; i++){ 
            if(strcmp(day_str, reminders[i]) < 0){ //Compara el dia y el contenido del reminder 
                break; //si el dia va antes que el contendio del mensaje entonces para
            }
        }
        
        //num_reminder = 0
        // i = 0
        
        // j  num_reminder = 0
        
        //so for the first input this is false
        
        //for the second iteration
        //we know that day_str is less than reminders[0] or 14 < 31 attend to class 
        
        
        // now j = 1 becuase num_reminder is 1 
        // cuenta desde 1 hasta  hasta que j sea mayor que i
        //aqui i es igual a 2 
        for(j = num_reminder; j > i; j--){
            strcpy(reminders[j], reminders[j-1]);
        }
       
       
       //i = 0;  
       strcpy(reminders[i], day_str); // copia el dia en el vector reminders
       strcat(reminders[i], msg_str); // concatena el contenido del reminder en el vector reminders
       
       
       num_reminder++;
       
       //25 go to the library -  
       //14 attend to class
       
    }
    
    printf("\n Dat reminders\n");
    for(i = 0; i < num_reminder; i++){
        printf(" %s\n", reminders[i]);
    }

    
   
    return 0;
}

void read_line(char str[], int n){ //entra el contenido del reminder y la longitud maxima 60 characters + 1
    
    int ch, i=0;
    
    //Comienza a llenar el string 
    while ( (ch = getchar()) != '\n'){
        
        if(i < n){ 
            str[i++] = ch;
            }
    }
    
    //Una vez que termines de llenar el string agrega el null charter
    str[i] = '\0';    
            
}

