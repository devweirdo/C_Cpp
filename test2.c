#include<stdio.h>

void swap_num(int *num1, int *num2) {
        int p;
        p = *num1;
        *num1 = *num2;
        *num2 = p;

}

int main(){
    int a = 3;
    int b = 6;
    swap_num(&a, &b);
	printf("%d %d\n", a, b);
}
