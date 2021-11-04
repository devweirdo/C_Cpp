#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node* next;
	int data;
} node;



void insert_data(node** n, int data){
	node* temp = (node*) malloc(sizeof(node));
	temp->data = data;
	temp->next = *n;
	*n = temp;
}

void print_node(node* n){
	node* temp = n;
	while (temp != NULL) {
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}

int main() {
	node* root = NULL;
	insert_data(&root, 1);
	insert_data(&root, 2);
	insert_data(&root, 3);
	print_node(root);

	return 0;
}