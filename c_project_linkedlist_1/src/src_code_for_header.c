#include <header.h>

// insert a new data to the list
void insert_node(node** n, int data){
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

void delete_node(node** n,int data){
	node* current = *n;
	node* previous = NULL;
	if (current == NULL){
		return; //or return NULL; (function return void type)
	}
	while (current->data != data){
		previous = current;
		current = current->next;
		if (current == NULL){
			return;
		}
	}
	if (previous == NULL){
		*n = current->next;
	}
	else{
		previous->next = current->next;
	}
	free(current);
}