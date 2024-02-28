#include <stdio.h>
#include <ctype.h>

int main(void)
{
    unsigned char c = 0;

    while (c < 128) {

        if (isprint(c))
            printf("%02x %c\t", c, c);

        if (!isprint(c))
            printf("%02x NP\t", c);

        if ((c + 1) % 8 == 0)
            printf("\n");

        c++;
    }
}
