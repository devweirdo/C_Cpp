#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define DEFINE_A    8
#define ANOTHER_ONE 1

union {
    uint8_t raw;
    struct {
        uint8_t a : 3;
        uint8_t b : 5;
    };
} my_data;

int main(void) {
    my_data.a = 0x00;
    my_data.b = 0x02;
    printf("0x%02x\n", my_data.raw);
}