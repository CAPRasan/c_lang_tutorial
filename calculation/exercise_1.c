#include <stdio.h>

int main(void) {

    int a, b, c;

    a = 8 / 4 / 2;
    printf("a = %d\n", a);

    b = 5 * 4 - 20 / 2 + 3;
    printf("b = %d\n", b);

    c = 5 * 4 - 20 / (2 + 3);
    printf("c = %d\n", c);

    return 0;
}