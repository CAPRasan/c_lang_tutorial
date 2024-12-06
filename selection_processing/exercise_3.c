#include <stdio.h>

int main(void)
{

    int c;
    printf("実行するならYを、実行中止ならNを入力してください。");
    c = getchar();

    switch (c) {
    case 'Y':
        puts("実行します");
        break;
    case 'N':
        puts("中止します");
        break;
    default:
        puts("不正な入力です");
        break;
    }

    return 0;
}