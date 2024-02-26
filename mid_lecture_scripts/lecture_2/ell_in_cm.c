#include <stdio.h>

int main(void) {
    printf("Ell\tInches\tCentimeters\n");
    
    int i = 1;
    int inch;
    float cm;

    while (i < 31) {
        if (i%11 == 0) {
            int j = 0;
            while (j<20) {
                printf("-");
            j++;
            }
            printf("\n");
        }
        inch = i * 45;
        cm = inch * 2.54;
        printf("%d\t%d\t%5.2f\n", i, inch, cm);
        i++;
    }
}
