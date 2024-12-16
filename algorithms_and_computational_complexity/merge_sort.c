#include <stdio.h>

#define MAX_DATA 10

//ソートされるデータ
int x[] = { 9, 4, 6, 2, 1, 8, 0, 3, 7, 5 };
int temp[MAX_DATA];

void MergeSort(int x[], int left, int right);
void printout();
int main(void);

void printout()
{
    for (int i = 0; i < MAX_DATA; i++) {
        printf("%d", x[i]);
    }
    printf("\n");
}

void MergeSort(int x[], int left, int right)
{
    int mid, i, j, k;

    if (left >= right) {
        return;
    }
    
    mid = (left + right) / 2;
    MergeSort(x, left, mid); //中央より左を再帰呼び出し
    MergeSort(x, mid + 1, right); //中央より右を再帰呼び出し

    //x[left]からx[mid]を作業領域tempにコピー
    for (i = left; i <= mid; i++)
        temp[i] = x[i];
    //x[mid + 1]からx[right]は逆順にコピー
    for (i = mid + 1, j = right; i <= right; i++, j--)
        temp[i] = x[j];

    i = left;
    j = right;

    for (k = left; k <= right; k++) {
        if (temp[i] <= temp[j]) {
            x[k] = temp[i++];
        } else {
            x[k] = temp[j--];
        }
    }

}

int main(void)
{
    int i;

    //ソート前のデータ
    printf("ソート前のデータです。\n");
    printout();

    MergeSort(x, 0, MAX_DATA - 1);

    //ソート後のデータを表示
    printf("ソート後のデータです。\n");
    printout();
}