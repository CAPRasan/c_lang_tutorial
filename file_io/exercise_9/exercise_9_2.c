#include <stdio.h>
#include <stdlib.h>

int main(int atgc, char *argv[])
{
    FILE *fin;
    char line[256];
    int ct = 0, size;

    if (atgc != 3) {
        printf("用法: headtype filename 行数\n");
        return 1;
    }

    if ((fin = fopen(argv[1], "r")) == NULL) {
        printf("ファイル%sを開けませんでした\n", argv[1]);
        return 1;
    }

    size = atoi(argv[2]); //表示させる行数
    while (fgets(line, 256, fin) != NULL) {
        ++ct;
        if (ct > size) break;
        printf("%3d %s", ct, line);
    }

    fclose(fin);
    return 0;
}