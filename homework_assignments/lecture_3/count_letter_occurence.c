#include <stdio.h>
#include "functions.h"

int main(void) {
    int c;
    int char_count[128] = {0};

    while (1) {
        c = getchar();

        if (c == EOF)
            break;

        char_count[c]++;
    }

    print_character_occurences(char_count);
}
