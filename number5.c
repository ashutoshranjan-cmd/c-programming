//Sum of all integer divisible by 2 between two number
#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter two numbers below\n");
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            c = c+i;
        }

    }
    printf("The sum of all numbers between two numbers divisible 2 is %d\n",c);
    return 0;
}