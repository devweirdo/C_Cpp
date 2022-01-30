#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

typedef enum { PUSH, HOLD_PUSH, RELEASE, IDLE } push_button_state_t;

bool key;
bool key_prev;

bool read_key(void) {
    return key;
}

int main(void) {
    push_button_state_t button_state = IDLE;
    bool button;

    while (1) {
        key = read_key();
        if (key && !key_prev) button_state = PUSH;
        else if (key && key_prev) button_state = HOLD_PUSH;
        else if (!key && !key_prev) button_state = IDLE;
        else button_state = RELEASE;
        key_prev = key;
    }

    return 0;
}

if (state != in_water) {
    up_attack();
}