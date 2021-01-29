//basic array program using memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;
    printf("Enter the number of inputs you want \n");
    scanf("%d",&n);
    printf("Please enter the numbers\n");
    ptr =(int *)malloc(n*sizeof(ptr));
    //for imput
    for(int i =1;i<=n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    // for display
    printf("The number you have entered are \n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",ptr[i]);

    }
    return 0;
    }