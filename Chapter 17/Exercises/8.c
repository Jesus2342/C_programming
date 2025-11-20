#include <stdio.h>
#include <stdlib.h>
#define MAX_NODES 10

struct Node
{
    int val;
    struct Node *next;
};


void push_list(int node_val, struct Node **node_list);
void pop_from_list(struct Node **node_list);
void show_nodes(struct Node **node_list);

int nodes_in_list = 0;

int main(){

    struct Node *first = NULL;
    push_list(10, &first);
    push_list(80, &first);
    pop_from_list(&first);
    pop_from_list(&first);
    pop_from_list(&first);
    show_nodes(&first);

    return 0;
}

void push_list(int node_val, struct Node **node_list){
    struct Node *temp;
    
    if(nodes_in_list > MAX_NODES){
        printf("---Memory full---\n\n");
        return;
    }

    temp = malloc(sizeof(struct Node));
    temp->val = node_val;
    temp->next = *node_list;
    *node_list = temp;
    nodes_in_list += 1;

}

void pop_from_list(struct Node **node_list){

    struct Node *node_to_delete = *node_list;

    if(nodes_in_list <= 0){
        printf("List is empty\n\n");
        return;
    }

    *node_list = (*node_list)->next;
    free(node_to_delete);
    nodes_in_list -=1;


}

void show_nodes(struct Node **node_list){
    struct Node *p;

    int node_position = nodes_in_list;

    printf("------------------------------\n\n");
    printf("Valid nodes within the list: %d\n\n", nodes_in_list);

    for(p = *node_list; p != NULL; p = p->next){
        printf("Node #%d: %d\n", node_position--, p->val);
    }

    if(p == NULL){
        printf("NULL\n\n", nodes_in_list);
    }
    
    printf("------------------------------");
}
