#include <stdio.h>

int main(void) {
    printf("Dec\tOct\tChar\n");
    for (int c = 'a'; c <= 'z'; c++)
        printf("%3d\t%3o\t%c\n", c, c, c);
}
