#include<stdio.h>

double average(double a, double b, double c);

int main(void)
{
    double a, b, c;

    printf("3つの値を入力してください。\n");
    printf("1つめの値: "); scanf("%lf", &a);
    printf("2つめの値: "); scanf("%lf", &b);
    printf("3つめの値: "); scanf("%lf", &c);

    printf("%.4f、%.4f、%.4fの平均値は%.4fです\n", a, b, c, average(a, b, c));

    return 0;
}

double average(double a, double b, double c)
{
    return (a + b + c) / 3;
}
