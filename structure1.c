#include <stdio.h>
typedef struct Book
{
    int id, price;
    char name[100];
}a;
int main()
{
    a b;
    printf("Enter the id of the book\n");
    scanf("%d", &b.id);
    printf("Enter the name of the book\n");
    scanf("%s", &b.name);
    printf("Enter the price of the book\n");
    scanf("%d", &b.price);
    printf("The id of the book is %d\n", b.id);
    printf("The name of the bool is %s\n", b.name);
    printf("The price of the book is %d\n", b.price);
    return 0;
}