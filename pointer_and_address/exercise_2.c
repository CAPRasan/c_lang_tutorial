#include <stdio.h>

int main(void)
{
    int scores[] = { 10, 20 ,30 };
    int *p = scores;

    printf("*pの値をインクリメント");
    for(int i = 0; i < 3; i++)
    {
        printf("scores[%d]の値は%d\n", i, *p);
        p++;
    }
}
