#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} node;

void insert_data(node* n, int data){
    node* temp;
    temp = (node*)malloc(sizeof(node));
    temp -> next = NULL;
    temp -> data = data;
    if (n == NULL)
    {
        n = temp;
    }
    else
    {
        n -> next = temp; 
        n = temp;
    }
}

void del_node(node* n, int data){
    node* temp;
    if (n->data == data){
        temp = n;
        n = n->next;
        free(temp);
    }
}

void print_node(node* n){
    node* p = n;
    while (p != NULL)
    {
        printf("%d ", p -> data);
        p = p -> next;
    }
}
 
void main(){
    node *root;
    root = (node*)malloc(sizeof(node));
    insert_data(root,1);
    insert_data(root,3);
    print_node(root);
    del_node(root,1);
    print_node(root);
}