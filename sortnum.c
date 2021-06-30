#include <stdio.h>
#include <stdbool.h>

void swap_num(int *num1, int *num2) {
        int p;
        p = *num1;
        *num1 = *num2;
        *num2 = p;
}

void sort(int num[], bool ascend_descend, int length) {
    for (int i = 0; i < length-1; i++)
        for (int j = i + 1; j < length; j++)
            if (ascend_descend == true){
                if (num[i] > num[j]){
                    swap_num(&num[i] ,&num[j]);
                }
            }
            else {
                if (num[i] < num[j]){
                    swap_num(&num[i] ,&num[j]);
                } 
            } 
        
    
    for (int i = 0; i < length; i++) {
        printf("%d\n", num[i]);
    }
}

void main(){
    int numbers[] = {4,1,3,9};
    int size = sizeof (numbers) / sizeof (*numbers);
    sort(numbers, true, size);
}