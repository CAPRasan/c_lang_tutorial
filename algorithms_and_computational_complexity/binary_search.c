#include <stdio.h>
#include "sampledata.h"

int main(void)
{
    int left_index = 0;
    int right_index = DATA_NUM - 1;
    int middle_index = 0;

    while (left_index <= right_index) {
        middle_index = (left_index + right_index) / 2;
        printf("left: %d, middle: %d, right: %d\n", left_index, middle_index,right_index);

        //中央値を確認。targetと等しければ探索終了
        if (data[middle_index] == target ) {
            printf("値 %d は、data[%d]に見つかりました。\n", target, middle_index);
            return 0;
        // 中央値がtargetより小さければ、中央値より右で探索継続
        } else if (data[middle_index] < target) {
            left_index = middle_index +1;
        //中央値がtargetより大きければ、中央値より左で探索継続
        } else {
            right_index = middle_index -1;
        }
    }

    printf("値 %d は見つかりませんでした。\n", target);
}
