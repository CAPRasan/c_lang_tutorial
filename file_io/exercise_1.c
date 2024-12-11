#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char line[128];

    fp = fopen("/Users/shoyaaoyagi/pgm/c_lang_tutorial/file_io/sample_data.txt", "r");
    //正常に終了しなかったパターン
    if (fp == NULL) {
        printf("ファイルを開けませんでした\n");
        return 1;
    }

    //文字がNUL（\0）になるまで毎行取得
    while (fgets(line, 128, fp) != NULL) {
        printf(">>> %s", line);
    }
    printf("\n");

    fclose(fp);
    return 0;

}