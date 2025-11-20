#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int val;
    struct Node *next;
};

void add_node(int node_val, struct Node **node_list);
//void show_nodes(struct Node *node_list);
struct Node *find_last(struct Node *node_list, int node_to_find);

int main(){

    struct Node *first = NULL;
    struct Node *node_in_list;
    
    add_node(25, &first);
    add_node(45, &first);
    add_node(74, &first);
    add_node(82, &first);
    add_node(39, &first);

    node_in_list = find_last(first, 82);

    if(node_in_list != NULL){
        printf("Node was found. Node: %d", node_in_list->val);
    }

    else{
        printf("Node was not found in list - NULL\n");
    }

  //  show_nodes(first);
    return 0;
}

void add_node(int node_val, struct Node **node_list){
    struct Node *temp;
    temp = malloc(sizeof(struct Node));

    temp->val = node_val;
    temp->next = *node_list;

    *node_list = temp;

}

struct Node *find_last(struct Node *node_list, int node_to_find){
    
    struct Node *p;
    p = malloc(sizeof(struct Node));

    for(p = node_list; p != NULL; p = p->next){
        if(p->val == node_to_find){
            return p;
        }
    }
    return p;
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
