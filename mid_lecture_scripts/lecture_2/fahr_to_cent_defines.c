#include <stdio.h>

#define CELSIUS(fahr_value) ((fahr_value - 32) * 5./9.)

int main (void)
{
    int fahr = 0;
    while (fahr <= 280) {
        printf("%3d\t%6.2f\n", fahr, CELSIUS(fahr));
        fahr += 20;
    }
}
