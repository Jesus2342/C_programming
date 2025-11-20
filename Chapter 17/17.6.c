#include <stdio.h>
#include <stdlib.h>

#define NODE_LIMIT 2

struct Node {
    int data;
    struct Node *next;
};

int num_node = 0;
void push_to_list(int node_val, struct Node **node_list);

void show_nodes(struct Node **node_list);

int main(){

    struct Node *first = NULL;

    
    push_to_list(25, &first);
    push_to_list(45, &first);
    push_to_list(95, &first);
    push_to_list(15, &first);
    push_to_list(65, &first);

    show_nodes(&first);
    return 0;
}


void push_to_list(int node_val, struct Node **node_list){
    
    struct Node *temp;

    temp = malloc(sizeof(struct Node));

    if(num_node >= NODE_LIMIT){
        printf("Full memory - Node not added \n");
        return;
    }
    temp->data = node_val;
    temp->next = *node_list;
    *node_list = temp;
    num_node += 1;
}

void show_nodes(struct Node **node_list){
    struct Node *p;

    for(p = *node_list; p != NULL; p = p->next){
        printf("%d\n", p->data);
    }
}