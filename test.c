#include <stdio.h>

float div(int a, int b) {
    return ((float) a/b);  //((float) a )/ b
}

void main() {
    printf("hello world\n");
    float result = div(1,3);    
    printf("result is %f\n",result);
}
