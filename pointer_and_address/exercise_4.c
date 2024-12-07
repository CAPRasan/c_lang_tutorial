#include <stdio.h>

void with_tax(int price)
{
	printf("税込で%d円です。\n", (int)(price * 1.1));
}

void without_tax(int price)
{
	printf("税抜きで%d円です。\n", price);
}

void print_price(void (*pF)(int), int price)
{
	printf("お買い求めありがとうございます。\n価格は、");
	(*pF)(price);
}

int main(void)
{
	print_price(with_tax, 10000);
	print_price(without_tax, 1000);
}