#include <stdio.h>

int main(void) {
    int a = 5, aa, aaa;
    aa = a * a;
    aaa = a * a * a;

    printf("aの値は%d\n", a);
    printf("aの2乗は%d\n", aa);
    printf("aの3乗は%d\n", aaa);

    return 0;
}