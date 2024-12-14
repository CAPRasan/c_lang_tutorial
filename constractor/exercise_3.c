#include <stdio.h>

typedef struct Product {
    char name[16];
    int price;
} Product;

void print_info(const Product *p)
{
    printf("商品名: %s, 価格: %d\n", p->name, p->price);
}

int total_price(const Product *p1, Product *p2)
{
    int sum = p1->price + p2->price;
    return sum;
}

void change_price(Product *p, int new_price)
{
    p->price = new_price;
}

int main(void)
{
    Product p1 = { "pen", 270};
    Product p2 = { "notebook", 160};

    print_info(&p1);
    print_info(&p2);
    printf("総額は%dです\n", total_price(&p1, &p2));

    printf("値段を上げます\n");
    change_price(&p1, 5000);
    print_info(&p1);
    printf("新しい総額は%dです\n", total_price(&p1, &p2));
}
