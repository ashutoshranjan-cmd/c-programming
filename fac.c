/*This program will help you to find factorial with use of recurrsion*/
#include<stdio.h>
int main()
{
    int a,fac =1;
    printf("Enter the number whose factorial you want\n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        fac = fac*i;
        

    }
    printf("The factorial of the %d is %d\n",a,fac);
    return 0;
}