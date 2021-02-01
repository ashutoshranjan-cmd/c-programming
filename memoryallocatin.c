#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Please enter numbrs here\n");
    ptr = (int*)malloc(n*sizeof(ptr));
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&ptr[i]);

    }
    for(int i = 1;i<=n;i++)
    {
        printf("%d",ptr[i]);

    }
    return 0;
}
