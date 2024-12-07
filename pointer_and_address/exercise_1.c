#include <stdio.h>

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int a = 10, b = 20;
	printf("元の数字はa = %d、b =%d\n", a, b);

	swap(&a, &b);
	printf("swap後の数字はa = %d、b = %d\n", a, b);
}