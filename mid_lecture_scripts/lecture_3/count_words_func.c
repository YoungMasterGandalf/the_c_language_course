#include <stdio.h>
#include <stdlib.h>

int is_whitespace(char c)
{
    return (c == ' ' || c == '\t' ||  c == '\n');
}

int main(void)
{
    char c;
    int word_count = 0;
    int is_word = 0;

    while (1) {
        c = getchar();
        if (c == EOF)
            break;

        if (is_word && is_whitespace(c)) {
            word_count++;
            is_word = 0;
        } else {
            is_word = 1;
        }
    }

    printf("%d\n", word_count);
}
