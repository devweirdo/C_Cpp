#include <header.h>

int main() {
    node* root = NULL;
    insert_node(&root, 1);
    insert_node(&root, 2);
    insert_node(&root, 3);
    insert_node(&root, 4);

    delete_node(&root,3);
    
    print_node(&root);
    return 0;
}