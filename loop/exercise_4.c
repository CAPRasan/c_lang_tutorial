#include <stdio.h>

int main(void)
{
    int i, j;
    printf("    1  2  3  4  5  6  7  8  9\n");
    printf("    -------------------------\n");

    for (i = 1; i < 10; i++) {
        printf("%2d|", i);
        for (j = 1; j < 10; j++) {
            printf("%2d ", i * j);
        }
        printf("\n");
    }
}