#include <stdio.h>

void print_info(int count);

int main(void)
{
    print_info(5);
    
    return 0;
}

void print_info(int count)
{
    for(int i = 0; i < count; i++){
        printf("hello\n");
    }
}