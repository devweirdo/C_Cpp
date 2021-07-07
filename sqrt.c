#include <stdio.h>

float squareroot(float num){
    float result = 0;
    while (result*result <= num){
        result++;
    }
    if (result*result == num){
        return result;
    }
    else{
        result--;
        float fractional = 0.1;
        for (int i = 0; i < 6; i++){
            while (result*result <= num){
                result += fractional;
            }
            result = result - fractional;
            fractional = fractional / 10;
        }
        return result;
    }
    
}

void main(){
    float num = 56.42;
    float ans = squareroot(num);
    printf("%f\n",ans);
}