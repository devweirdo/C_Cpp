// include stuffs
#include <stdio.h>
#include <stdlib.h>

// struct Linked list
typedef struct node {
    struct node* next;
	int data;
} node;

// and functions

void insert_node();
void print_node();
void delete_node();
