//To find whether number is in palindrome or not
#include<stdio.h>
int main()
{
    int a,b,sum=0,k;
    printf("Enter the number here\n");
    scanf("%d",&a);
    k=a;
    while(a!=0)
    {
        b = a%10;
        sum = (sum * 10)+b;
        a = a/10;

    }
    if(k == sum)
    {
        printf("The number is in palindorme\n");

    }
    else
    {
        printf("The number is not in palilndrome\n");
    }
    
    return 0;

}