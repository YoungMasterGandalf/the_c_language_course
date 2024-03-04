#include <stdio.h>

int main(void)
{
    char array[] = {'H', 'e', 'l', 'l', 'o'};
    int i = 0;

    // Try while (1) --> leads to seg-fault
    while (i < sizeof (array) / sizeof (array[0])) {
        printf("%c\n", array[i++]);
    }
}
