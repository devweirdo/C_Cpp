#include <stdio.h>


void main(){
    int i = 0;
    char str[] = "hello";
    char* buffer = str;
    while (*buffer != '\0'){
        if ((*buffer >='a') && (*buffer <='z'))
            printf("%c\n", str[i++]);
            buffer++;
    }
}

