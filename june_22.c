#include <stdio.h>
// fizz buzz
void main(){
    for (int i = 1 ; i <= 100 ; i++){
        printf("i = %d %s%s\n", i, i%3? "":"fizz",i%5? "":"buzz");
    }
}