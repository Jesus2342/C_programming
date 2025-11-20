#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};


void add_node(struct Node **head, int val);
void delete_node(struct Node **head);
void show_nodes(struct Node *head);

int main(){

    struct Node *first = NULL;
    add_node(&first, 10);
    add_node(&first, 32);
    delete_node(&first);
    show_nodes(first);

    return 0;
}

void add_node(struct Node **head, int val){

    struct Node *new_node = malloc(sizeof(struct Node));

    new_node->val = val; //Asigna el valor de val 
    new_node->next = *head; //dale la mano a la nodo que se encuentra en head
    *head = new_node; // ahora convierte el nuevo nodo en head
}

void delete_node(struct Node **head){
    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);

}

void show_nodes(struct Node *head){
    struct Node *p;

    for(p = head; p!= NULL; p = p->next){
        printf("%d \n", p->val);
    }
}

