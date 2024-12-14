#include <stdio.h>
#include "sampledata.h"

int main(void)
{
    for (int i = 0; i < DATA_NUM; i++) {
        if (data[i] == target) {
            printf("値 %d は data[%d] に見つかりました\n", target, i);
            return 0;
        }
    }

    printf("%dは見つかりませんでした\n", target);
}