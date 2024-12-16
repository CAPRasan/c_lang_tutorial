#include <stdio.h>

int uruu(int yaer)
{
    if ((yaer % 4 == 0 && yaer % 100 != 0) || yaer % 400 == 0)
        return 1;
    return 0;
}

int main(void)
{
    int i;
    for (i = 2000; i <= 2200; i++) {
        if (uruu(i)) printf("%d ", i);
    }
    printf("\n");
    return 0;
}