#include <stdio.h>

void float_to_string(char *buffer, float number) {
    while (*buffer != '\0')
    {
        if (*buffer == 'e')
        {
            *buffer = 'a';

        }
        buffer++;
    }
}

void main() {
    char *buffer;
    float_to_string(buffer, float number)
    
    printf("%s\n", buffer);
}