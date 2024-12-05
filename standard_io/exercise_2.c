#include <stdio.h>

int main(void)
{
    int hours, minutes, seconds;

    printf("秒数 = "); scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = seconds % 3600 / 60;
    seconds = seconds % 60;

    printf("%d時間 %d分 %d秒\n", hours, minutes, seconds);

    return 0;
}