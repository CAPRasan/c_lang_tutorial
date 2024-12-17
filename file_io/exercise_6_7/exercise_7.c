#include <stdio.h>

int main(void)
{
    FILE *fin, *fout;
    char line[256];

    if ((fin = fopen("smp1.txt", "r")) == NULL) {
        printf("入力ファイルを開けませんでした");
        return 1;
    }

    if((fout = fopen("smp2.txt", "w")) == NULL) {
        printf("出力ファイルを開けませんでした");
        return 1;
    }

    while (fgets(line, 256, fin) != NULL) {
        fputs(line, fout);
        //fprintfであれば、変換指定が必要。fprintf(line, "%s", fout);
    }

    return 0;
}