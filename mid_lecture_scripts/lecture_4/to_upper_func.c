#include <stdio.h>

char convert_to_upper(char c) {
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 'A');

    return c;
}

int main(void)
{
    char c;

    while ((c = getchar()) != EOF) {
        printf("%c", convert_to_upper(c));
    }
}
