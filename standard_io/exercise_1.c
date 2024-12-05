#include <stdio.h>

int main(void)
{

    char st[80];
    
    printf("string = ");
    fgets(st, 80, stdin);

    puts(st);
    printf("%s\n", st);

    return 0;
}