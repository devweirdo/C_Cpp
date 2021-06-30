#include <stdio.h>

int c;
int *p1 = &c;

int add(int a, int b) {
    return c = a + b;
}
void main() {
    add(5,6);
    printf("pointer 1 : %d\n", *p1);
}