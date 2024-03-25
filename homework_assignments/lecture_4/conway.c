#include <stdio.h>
#include <unistd.h>

#define CHAR_NUMBER 120

int main(void) {
    int rules[8][3] = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1},
        {1, 0, 0},
        {0, 1, 1},
        {0, 1, 0},
        {0, 0, 1},
        {0, 0, 0}
    };
    int results[8] = {0, 0, 0, 1, 1, 1, 1, 0};
    int comparison[3];

    int values[CHAR_NUMBER] = {0};
    values[60] = 1;

    int new_values[CHAR_NUMBER] = {0};

    while (1) {
        for (int i = 0; i < CHAR_NUMBER - 2; i++) {
            comparison[0] = values[i];
            comparison[1] = values[i + 1];
            comparison[2] = values[i + 2];
            // comparison = {values[i], values[i + 1], values[i + 2]};
            for (int j = 0; j < sizeof(rules) / sizeof(rules[0]); j++) {
                int match = 1;

                for (int k = 0; k < sizeof(comparison) / sizeof(comparison[0]); k++) {
                    if (rules[j][k] != comparison[k]) {
                        match = 0;
                        break;
                    }
                }

                if (match) {
                    new_values[i + 1] = results[j];
                    if (results[j]) {
                        printf("@");
                    } else {
                        printf(" ");
                    }

                    break;
                }
            }
        }

        for (int i = 0; i < CHAR_NUMBER; i++) {
            values[i] = new_values[i];
        }

        printf("\n");
        fflush(stdout);
        sleep(1);
    }
}
