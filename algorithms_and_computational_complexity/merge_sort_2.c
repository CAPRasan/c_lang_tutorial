#include <stdio.h>
#include <string.h>

#define MAX_DATA 10

int temp[MAX_DATA];
int count;

void printout(int x[]);
void MergeSort(int x[], int left, int right);
int main(void);

void printout(int x[])
{
    for (int i = 0; i < MAX_DATA; i++)
        printf("[%d]", x[i]);
    printf("\n");
}

void MergeSort(int x[], int left, int right)
{
    int mid, i, j, k;

    if(left >= right)
        return;
    
    mid = (left + right) / 2;
    MergeSort(x, left, mid);
    MergeSort(x, mid + 1, right);

    //x[left]からx[mid]を作業領域にコピー
    for (i = left; i <= mid; i++)
        temp[i] = x[i];
    
    //x[mid+1]からx[right]は逆順にコピー
    for (i = mid + 1, j = right; i <= right; i++, j--)
        temp[i] = x[j];
    
    printf(", left=%d, mid=%d, right=%d, この時点の配列tempは\n", left, mid, right);
    printout(temp);

    i = left;
    j = right;

    for (k = left; k <= right; k++)
        if (temp[i] <= temp[j])
            x[k] = temp[i++];
        else
            x[k] = temp[j--];
    
    count++;
    printf("for文を%d回まわした後の配列xは以下のとおり\n", count);
    printout(x);
}

int main(void)
{
    int i;
    int x[ ] = {9, 4, 6, 2, 1, 8, 0, 3, 7, 5};

    printf("ソート前のデータ: ");
    printout(x);

    MergeSort(x, 0, MAX_DATA -1);

    printf("ソート後のデータ: ");
    printout(x);
}