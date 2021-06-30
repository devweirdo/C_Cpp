#include <stdio.h>

void check(int a, int b) {
    if (!(a == 5) && (b == 6))
    {
        printf("true\n");
        printf("%d %d\n",a,b);

    }
    else {
        printf("false\n");
        printf("%d %d\n",a,b);
    }
}
void main() {
    check(5,5);
}