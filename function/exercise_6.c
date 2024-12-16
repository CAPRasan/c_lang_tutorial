#include <stdio.h>

void put10(int n)
{
    printf("%dは10進数表記で%d\n", n, n);
}

void put16(int n)
{
    printf("%dは16進数表記で%X\n", n, n);
}

int main(void)
{
    int n, i;
    printf("数値を入力してください: "); scanf("%d", &n);
    printf("10進数であれば0を、16進数であれば1を入力してください: \n");
    scanf("%d", &i);
    
    switch (i) {
        case 0:
            put10(n);
            break;
        case 1:
            put16(n);
            break; 
    }
}