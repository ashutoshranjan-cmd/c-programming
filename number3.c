//To print the reverse a number
#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter the number here\n");
    scanf("%d",&a);
    while(a!=0)
    {
        b = a%10;
        sum = (sum * 10)+b;
        a = a/10;

    }
    printf("The reverse of the number is %d\n", sum );
    return 0;

}