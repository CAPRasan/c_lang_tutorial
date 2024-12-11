#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char line[128];

    fp = fopen("/Users/shoyaaoyagi/pgm/c_lang_tutorial/file_io/score_data.txt", "r");
    if (fp == NULL) {
        printf("ファイルを開けませんでした\n");
        return 1;
    }

    int total = 0;
    int i;
    while (fscanf(fp, "%d", &i) != EOF) {
        printf("%dを読み込みました\n", i);
        total += i;
    }
    
    printf("合計は%d\n", total);
}

/* score_data.txt
12
56
90
74
100
31
*/
