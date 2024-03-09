#include <stdio.h>

int main(void)
{
    int c;
    int digit_occurences[10] = {0};

    while (1) {
        c = getchar();

        if (c == EOF)
            break;

        if (c >= '0' && c <= '9')
            digit_occurences[c - '0']++;
    }

    printf("Digit occurences:\n");

    for (int i = 0; i < 10; i++) {
        printf("%4d\t%4d\n", i, digit_occurences[i]);
    }
}
