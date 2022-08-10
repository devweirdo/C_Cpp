#include <header.h>

// insert a new data to the list
void insert_data(node** n, int data){
	node* temp = (node*) malloc(sizeof(node));
	temp->data = data;
	temp->next = *n;
	*n = temp;
}

// print every node->data of list
void print_node(node** n){
	node* temp = *n;
	// node* temp = n;
	// temp = temp->next;
	while (temp != NULL) {
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}