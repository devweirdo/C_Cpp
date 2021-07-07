#include <stdio.h>

float squareroot_newton(float num){
    float x = num;
    float result;
    while (1)
    {
        result = 0.5 * (x + (num / x));
        if ((x - result) < 0.0000001)
            break;
        x = result;
    }
    return result;
}

void main(){
    float number = 327;
    float answer = squareroot_newton(number);
    printf("%f\n", answer);
}