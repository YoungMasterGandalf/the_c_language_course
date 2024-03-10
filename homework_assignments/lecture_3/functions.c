#include <stdio.h>
#include <ctype.h>

#include "functions.h"

int is_number (int c) {
    return (c >= '0' && c <= '9');
}

int is_whitespace_char (int c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

void print_n_stars_in_row (int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

void print_character_occurences (int occurences[ASCII_LEN]) {
    for (int i = 0; i < ASCII_LEN; i++) {
        if (isprint(i)) {
            printf("%c\t", i);
        } else {
            printf("NP\t");
        }
        int char_count = occurences[i];
        print_n_stars_in_row(char_count);
    }
}
