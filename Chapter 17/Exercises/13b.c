#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int val;
    struct Node *next;
};

void add_node(int node_val, struct Node **node_list);
void show_nodes(struct Node *node_list);



int main(){

    struct Node *first = NULL;
    struct Node *head_node; //this is the node that insert into ordered list will return 
    
    //Adding nodes to the list 
    add_node(25, &first);
    add_node(45, &first);

    show_nodes(first);
    return 0;
}

void add_node(int val, struct Node **head){

    /*Imagine a chain of people holding hands:
    Their right hand = the next pointer.
    The head pointer = who you’re currently calling “first person.”

    When you add a new person at the front:

    You tell the new person: “Hold the hand of whoever was first.”
    
    new_node->next = *head;

    Then you declare: “This new person is now the first.” → *head = new_node;


    */

    
    struct Node *new_node;
    
    new_node = malloc(sizeof(struct Node));
    
    //Create a new item and set its value
    new_node->val = val;

    //Link the new item to point to the head of the list
    new_node->next = *head;

    //Set the head of the list to be our new item
    *head = new_node;

}



void show_nodes(struct Node *node_list){
    struct Node *p;

    p = malloc(sizeof(struct Node));


    for(p = node_list; p!= NULL; p = p->next){
        printf("%d\n", p->val);
    }

    if(p == NULL){
        printf("NULL\n");
    }


}
