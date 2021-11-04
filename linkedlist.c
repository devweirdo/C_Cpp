#include <stdio.h>

typedef struct linked_list
{
    int data;
    struct linkedlist* next;
} Node;

void main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* end = NULL;

    head = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    third = (Node*)malloc(sizeof(Node));

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third ->next = NULL;
}
