#include <stdio.h>

int main(void)
{
    FILE *fp;
    char line[256];

    fp = fopen("smp1.txt", "r");
    
    if ((fp = fopen("smp1.txt", "r")) == NULL) {
        printf("ファイルを読み込めませんでした\n");
        return 1;
    }

    while (fgets(line, 256, fp) != NULL) {
        printf("%s", line);
    }
    printf("\n");

    fclose(fp);
    return 0;
}