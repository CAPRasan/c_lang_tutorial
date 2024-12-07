#include <stdio.h>

void func(int *p)
{
	p[0] = 98;
	p[1] = 99;
	p[2] = 100;
}

int main(void)
{
	int scores[] = { 10, 20, 30 };
	for(int i = 0; i < 3; i++) {
		printf("scores[%d]の値は%d\n", i, scores[i]);
	}
	
    printf("func(scores)で書き換え\n");
	func(scores); //引数には、配列の先頭のアドレスを渡す
	for(int i = 0; i < 3; i++) {
		printf("scores[%d]の値は%d\n", i, scores[i]);
	}
}