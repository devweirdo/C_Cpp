#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} node;

void insert_data(node* n,int data){
    node* temp;
    temp = (node*)malloc(sizeof(node));
    while (n)
    {
        n = n->next;
    }
    n->next = temp;
    temp->data = data;
    temp->next = NULL;
}

void print_node(node* n){
    while (n){
    printf("%d\n", n -> data);
    n = n->next;
    }
}
 
void main(){
    node *root;
    root = (node*)malloc(sizeof(node));
    insert_data(root,1);
    print_node(root);
}