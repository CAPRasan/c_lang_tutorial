#include <stdio.h>

int main(void) 
{
    int n, dt[3] = {10, 20, 30};

    n = 0;  //通常のインクリメント
    printf("%d\n", dt[n]); //10
    ++n;
    printf("%d\n", dt[n]); //20
    ++n;
    printf("%d\n", dt[n]); //30

    n = 0;  //後置型の場合
    printf("%d\n", dt[n++]); //10
    printf("%d\n", dt[++n]); //30
    printf("%d\n", dt[n++]); //30

    return 0;
}