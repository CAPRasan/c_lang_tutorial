#include<stdio.h>

int absolute_value(int value);

int main(void)
{
    int value;
    printf("整数を入力してください: "); scanf("%d", &value) ;
    printf("この整数の絶対値は%dです。\n", absolute_value(value));

    return 0;
}

int absolute_value(int value)
{
    if (value < 0) {
        value -= value * 2;
    }

    return value;
}