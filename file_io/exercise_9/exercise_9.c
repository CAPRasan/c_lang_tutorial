#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fin;
    char line[256];
    int line_no = 0;

    if (argc != 2) {
        printf("用法: linect filename\n");
        return 1;
    }

    if((fin = fopen(argv[1], "r")) == NULL) {
        printf("ファイル%sを開けませんでした\n", argv[1]);
    }

    while (fgets(line, 256, fin) != NULL) {
        ++line_no;
        printf("%3d: %s", line_no, line);
    }
    printf("\n");
    fclose(fin);
    return 0;
}