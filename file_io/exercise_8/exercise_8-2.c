#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int sum = 0;
    printf("入力値は以下のとおり\n");
    for (int i = 0; i < argc; i++) {
        printf("[%d]", atoi(argv[i]));
        sum += atoi(argv[i]);
    }

    printf("\n合計は%d\n", sum);
    return 0;
}