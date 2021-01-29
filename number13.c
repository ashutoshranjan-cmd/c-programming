//program to print perfect number
#include <stdio.h>
int main()
{
    int a, b = 0, c;
    printf("Enter the number here\n");
    scanf("%d", &a);
    for (int i = 1; i < a; i++)
    {
        c = a % i;
        if (c == 0)
        {
            b = b + i;
        }
    }
    if (b == a)

    {
        printf("The number is perfect number\n");
    }
    else
    {
        printf("The number is not perfect\n");
    }
}