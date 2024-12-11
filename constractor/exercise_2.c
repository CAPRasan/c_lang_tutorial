#include <stdio.h>
#include <string.h>

int count(char *str)
{
    int count = 0;
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == 'F') {
            count++;
        }
    }
    return count;
}

int main(void) {
    char str[32];
    scanf("%s", str);
    
    printf("%d\n", count(str));
}