#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void main() {
    int ans = factorial(4);
    printf("result: %d\n", ans);
}