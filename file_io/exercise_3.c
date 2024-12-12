#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = fopen("/Users/shoyaaoyagi/pgm/c_lang_tutorial/file_io/output.txt", "w");

    if (fp == NULL) {
        printf("ファイルが開けませんでした");
    }

    for (int i = 0; i < 10; i++) {
        fprintf(fp, "[%d]\n", i);
        printf("output.txtに%dを書き込みました\n", i);
    }
    printf("処理が終了しました\n");
    fclose(fp);
    return 0;
}