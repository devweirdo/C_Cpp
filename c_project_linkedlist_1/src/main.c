#include <header.h>

int main() {
	node* root = NULL;
	insert_data(&root, 1);
	insert_data(&root, 2);
	insert_data(&root, 3);
	print_node(root);

	return 0;
}