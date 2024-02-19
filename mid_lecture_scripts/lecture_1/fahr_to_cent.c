#include <stdio.h>

int main ()
{
    int fahr = 0;
    while (fahr <= 280) {
        float celsius = (fahr - 32) * 5./9.;
        printf("%d\t%5.2f\n", fahr, celsius);
        fahr += 20;
    }
}
