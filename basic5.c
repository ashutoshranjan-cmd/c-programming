//Basic program to swap two number using 3rd variable
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value for a and b\n");
    scanf("%d%d", &a, &b);
    c=b;
    b=a;
    a=c;
    printf("The swap value of a and b is %d and %d\n", a, b);
    return 0;
}