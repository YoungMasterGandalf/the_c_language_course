#include <stdio.h>
#include <string.h>

#define NEEDLE "bash" // The substring to search for in the stdin string
#define MAX_LINE_WIDTH 1024

int main(void) {
    int c;

    char input[MAX_LINE_WIDTH];
    int buffer = 0;

    size_t input_len;
    size_t needle_len = strlen(NEEDLE);

    while ((c = getchar()) != EOF) {
        // Return 1 (error) when a line overflows line width limit
        if (buffer == MAX_LINE_WIDTH)
            return 1;

        if (c == '\n') {
            // We have the whole line (a haystack) so we can try to find our word (a needle) in it

            input[buffer] = '\0';  // Null-terminate the input

            input_len = strlen(input);

            // If the input line is shorter than the searched substring --> reset buffer and continue to the next line
            if (input_len < needle_len) {
                buffer = 0;
                continue;
            }

            // Iterate over all characters in input and for each try to find the matching char sequence. If the sequence matches: print the line.
            for (int i = 0; i < buffer; i++) {
                int j = 0;
                while (j < needle_len && input[i + j] == NEEDLE[j]) {
                    j++;
                }

                if (j == needle_len) {
                    printf("%s\n", input);
                    break;
                }
            }

            buffer = 0;
        } else {
            input[buffer] = c;
            buffer++;
        }
    }
}
