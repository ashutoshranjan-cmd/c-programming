//Program to find whether the number is prime or not
#include<stdio.h>
int main()
{
    int a,c;
    printf("Enter the number here\n");
    scanf("%d",&a);
    for(int i =2;i<a;i++)
    {
        if(a%i==0)
        {
            c=1;
            break;
        }
        
        

    }
    if(c==1)
    {
        printf("The number is not prime\n");

    }
    else
    {
        printf("The number is prime\n");

    }
    return 0;
    
}