/* This program will help to average of numbers using while loop*/
#include<stdio.h>
int main()
{
    int a,i=0,sum=0,num;
    float avg;
    printf("Enter the number of digits \n");
    scanf("%d",&a);
    printf("Now enter numbers here\n");
    while(i<a)
    {
        scanf("%d",&num);
        sum = sum + num;
        i++;

    }
    avg = sum/a;
    printf("The sum of the given number is %d\n",sum);
    printf("The average of %d number is %f\n",a,avg);
    return 0;
    }