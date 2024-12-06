#include <stdio.h>

int main(void)
{
    int n;

    printf("n = "); scanf("%d", &n);

    if (n % 2 == 0){
        printf("nは%dで、偶数です。\n", n);
    }
    else {
        printf("nは%dで、奇数です。\n", n);
    }

    return 0;
}