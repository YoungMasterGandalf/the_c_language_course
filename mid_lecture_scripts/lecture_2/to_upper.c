#include <stdio.h>

int main(void)
{
    char c;

    while (1) {
        c = getchar();

        if (c == EOF)
            break;

        if (c > 96) {
            printf("%c", c - 32);
        } else {
            printf("%c", c);
        }
    }
}
