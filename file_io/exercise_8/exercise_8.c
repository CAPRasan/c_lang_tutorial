#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("文字列の個数 %d\n", argc);

    for (int i = argc; i > 1; i--) {
        printf("%2d番目の文字列: %s\n", i-1, argv[i-1]);
    }

    return 0;
}