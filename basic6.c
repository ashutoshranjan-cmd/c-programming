//Basic program to swap two numbers without using 3rd variable
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of number a and b\n");
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The swap value of a and b is %d and %d\n",a,b);
    return 0;
}