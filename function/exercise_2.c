#include<stdio.h>

double rectangle_area(double width, double height);

int main(void)
{
    double width, height;
    printf("幅(cm): "); scanf("%lf", &width);
    printf("高さ(cm): "); scanf("%lf", &height);
    printf("幅%.2fcm、高さ%.2fcmの長方形の面積は、%.2fcm2です\n", width, height,rectangle_area(width,height));

    return 0;
}

double rectangle_area(double width, double height)
{
    return width * height;
}
