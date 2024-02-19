#include <stdio.h>

int main ()
{
    int inch = 1;
    float cm;
    printf("Inches\tCentimeters\n");

    while (inch < 10) {
        cm = inch * 2.54;
        printf("%d\t%5.2f\n", inch, cm);
        ++inch;
    }
}
