#include <stdio.h>
#include "triangle.h"

int main(void)
{
	double area = triangle_area(3,5);
	printf("三角形の面積は%.2lf\n", area);
}