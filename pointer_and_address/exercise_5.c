#include <stdio.h>

void func(int *p)
{
    *p *= 10;
}

int main(void)
{
    int i = 10;
    func(&i);
    printf("iの値は%d\n", i);
}
