#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int val;
    struct Node *next;
};

void add_node(int node_val, struct Node **node_list);
struct Node *insert_into_ordered_list(struct Node *list, struct Node *node_to_add);
void show_nodes(struct Node *node_list);



int main(){

    struct Node *first = NULL;
    struct Node *head_node; //this is the node that insert into ordered list will return 
    
    //Adding nodes to the list 
    add_node(25, &first);
    add_node(45, &first);


    struct Node *new_node;
    
    new_node = malloc(sizeof(struct Node));
    new_node->val = 32;
    new_node->next = NULL;

    //Calling the function to the head node 
    head_node = insert_into_ordered_list(first, new_node);

    
    show_nodes(head_node);
    return 0;
}

void add_node(int node_val, struct Node **node_list){
    struct Node *temp;
    temp = malloc(sizeof(struct Node));

    temp->val = node_val;
    temp->next = *node_list;

    *node_list = temp;

}



struct Node *insert_into_ordered_list(struct Node *list, struct Node *node_to_add){
  
  struct Node *head = list;
  struct Node *prev = NULL;

  struct Node *new_node = node_to_add;

  new_node->next = head; //toma de la mano a head
  head = new_node; // new node es ahora el nuevo head.

  
  struct Node *temp_head = malloc(sizeof(struct Node));
  struct Node *temp_node = malloc(sizeof(struct Node));
  temp_head->val = head->val; //32
  temp_node->val = head->val; //32

  struct Node *p;

  for(p = head; p != NULL; p = p->next){
    if(temp_head->val < p->val){
        temp_head->val = p->val; // set p val to temp becase p is greater than temp
        p->val = temp_node->val;
        temp_head->next = p; 
        
    }
  }

  head = temp_head;
  return head;
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
