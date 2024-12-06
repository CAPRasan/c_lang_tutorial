#include <stdio.h>

int main(void)
{
    int c;
    printf("文字 = ");
    c = getchar();

    if (('0' <= c && c <= '9') || ('A' <= c && c <= 'F') || ('a' <= c && c <= 'f')) {
        printf("16進数文字列です。\n");
    }
    else {
        printf("16新数文字列ではありません。\n");
    }

    return 0;
}