#include <stdio.h>

int main(void)
{
    FILE *fp_in;
    FILE *fp_out;
    char line[128];

    //読み込み用のファイルを開く
    fp_in = fopen("/Users/shoyaaoyagi/pgm/c_lang_tutorial/file_io/exercise_5/sample_data.txt","r");
    if (fp_in == NULL) {
        printf("読み込み用のファイルを開けませんでした");
        return 1;
    }

    fp_out = fopen("/Users/shoyaaoyagi/pgm/c_lang_tutorial/file_io/exercise_5/output.txt", "w");
    if (fp_out == NULL) {
        printf("書き出し用のファイルを開けませんでした");
        return 1;
    }
    
    int i = 1;
    while (fgets(line, 128, fp_in) != NULL) {
        fprintf(fp_out, "%d: %s", i, line);
        i++;
    }
    
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}