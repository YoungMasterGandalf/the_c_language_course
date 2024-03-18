#include <stdio.h>

int main (void) {
    int arr[10] = {0};

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
        printf("%d\n", arr[i]);

    int arr[10];

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
        printf("%d\n", arr[i]);
}
