#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int val;
    struct Node *next;
};

void add_node(int node_val, struct Node **node_list);
//void show_nodes(struct Node *node_list);
int count_ocurrences(struct Node *list, int node_val);

int main(){

    struct Node *first = NULL;
    int times_node_observed = 0;
    int n = 0;
    
    add_node(25, &first);
    add_node(45, &first);
    add_node(25, &first);
    add_node(25, &first);
    add_node(39, &first);

    times_node_observed = count_ocurrences(first, 125);

    if(times_node_observed != 0){
        printf("Node Ocurrences: %d", times_node_observed);
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

int count_ocurrences(struct Node *list, int node_val){
    
    struct Node *p;
    int ocurrences = 0;
    p = malloc(sizeof(struct Node));

    for(p = list; p != NULL; p = p->next){
        if(p->val == node_val){
            ocurrences += 1;
        }
    }
    return ocurrences;
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
