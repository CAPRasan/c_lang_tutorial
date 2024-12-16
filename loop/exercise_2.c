#include <stdio.h>

int main(void)
{
    int i;
    
    for (i = 32; i <= 126; i++) {
        if (i % 8 == 0) printf("\n");
        printf("%c %X   ", i, i);
    }
    printf("\n");
    return 0;
}