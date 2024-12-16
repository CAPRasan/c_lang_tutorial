#include <stdio.h>

int get_number(int dt)
{
    int number = 1;

    while (dt * number <= 10000) {
        number ++;
    }
    return dt * (number - 1);

}

int main(void)
{
    int dt;
    printf("数値を入力してください: "); scanf("%d", &dt);

    printf("10000を超えない最大の倍数は%dです。\n", get_number(dt));
}