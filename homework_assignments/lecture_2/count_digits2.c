#include <stdio.h>
#include "functions.h"

int main (void) {
    int c;
    int occurences[12] = {0}; //0 - 9: digits, 10: whitespace chars, 11: rest

    while (1) {
        c = getchar();

        if (c == EOF)
            break;

        if (is_number(c)) {
            occurences[c - '0']++;
        } else if (is_whitespace_char(c)) {
            occurences[10]++;
        } else {
            occurences[11]++;
        }
    }

    printf("Character occurences:\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d:\t%2d\n", i, occurences[i]);
    }
    printf("ws chars:\t%2d\n", occurences[10]);
    printf("rest:\t%2d\n", occurences[11]);
}
