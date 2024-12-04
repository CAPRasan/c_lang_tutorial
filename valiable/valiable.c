#include <stdio.h>

//円の面積を求める
int main(void) {
    double pi, r, s;

    pi = 3.14159;
    r = 2.0;
    s = pi * r * r;
    printf("円の面積は%fです。\n", s);

    return 0;
}