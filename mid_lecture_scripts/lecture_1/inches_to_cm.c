#include <stdio.h>

int main ()
{
    int inch = 1;
    int cm;
    printf("Inches\tCentimeters\n");

    while (inch < 10) {
        cm = inch * 2.54;
        printf("%d\t%d\n", inch, cm);
        ++inch;
    }
}
