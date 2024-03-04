#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c;
    int word_count = 0;
    int is_word = 0;

    while (1) {
        c = getchar();
        if (c == EOF)
            break;

        if (is_word && (c == ' ' || c == '\t' || c == '\n')) {
            word_count++;
            is_word = 0;
        } else {
            is_word = 1;
        }
    }

    printf("%d\n", word_count);
}
