#include <stdio.h>

int main(void)
{
    int i;

    printf("文字 16進 10進\n");
    for (i = 32; i <= 126; i++) {
        printf(" %c    %X  %d\n", i, i, i);
    }

    return 0;
}