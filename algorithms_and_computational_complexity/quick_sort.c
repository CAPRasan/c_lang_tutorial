#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int partition (int array[], int left, int right)
{
    int i, j, pivot;
    i = left;
    j = right + 1;
    pivot = left;


    do {
        do { i++; } while (array[i] < array[pivot]);
        do { j--; } while (array[pivot] < array[j]);
        //pivotより小さいものを左へ、大きいものを右へ
        if (i < j) { swap(&array[i], &array[j]); }
    } while (i < j);

    swap(&array[pivot], & array[j]); //pivotを更新

    return j;
}

void quick_sort (int array[], int left, int right) {
    int pivot;

    if (left < right) {
        pivot = partition(array, left, right);
        quick_sort(array, left, pivot - 1);
        quick_sort(array, pivot + 1, right);
    }
}

int main(void) {
    int array[10] = { 2, 1, 8, 5, 4, 7, 9, 0, 6, 3 };
    int i;

    printf("before sort: ");
    for(i = 0; i < 10; i++) { printf("%d ", array[i]); }
    printf("\n");

    quick_sort(array, 0, 9);

    printf("after sort: ");
    for (i = 0; i < 10; i++) { printf("%d ", array[i]); }
    printf("\n");

    return 0;
}