#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c;

    while (1) {
        c = getchar();
        if (c == EOF)
            return 0;

        printf("%c", c);
    }
}
