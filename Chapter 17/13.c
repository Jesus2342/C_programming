#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int val;
    struct Node *next;
};

void add_node(int node_val, struct Node **node_list);
void show_nodes(struct Node *node_list);
//struct Node *insert_into_ordered_list(struct Node *list, struct Node *new_node);


int main(){

    struct Node *first = NULL;
    //void add_node(int node_val, struct Node **node_list);
    struct Node *first_node_modified_list; 
    
    add_node(25, &first);
    add_node(45, &first);

    struct Node *new_node;
    new_node = malloc(sizeof(struct Node));
    
    new_node->val = 14;
    
    new_node->next = first;

    first = new_node;


    

    //first_node_modified_list = insert_into_ordered_list(first, new_node);
    
    show_nodes(first);
    return 0;
}

void add_node(int node_val, struct Node **node_list){
    struct Node *temp;
    temp = malloc(sizeof(struct Node));

    temp->val = node_val;
    temp->next = *node_list;

    *node_list = temp;

}


/*
struct Node *insert_into_ordered_list(struct Node *list, struct Node *new_node){
    struct Node *temp;
    temp = malloc(sizeof(struct Node));

    temp->val = node_val;
    temp->next = *node_list;

    *node_list = temp;

}
*/




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
