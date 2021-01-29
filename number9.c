//print all prime number within given number
#include<stdio.h>
int main()
{
    int a,count =0;
    printf("Enter the number \n");
    scanf("%d",&a);
    printf("The prime number up to %d are\n",a);
    for(int i =1;i<=a;i++)
    {
        count =0;
        for(int j = 1;j<=i;j++)
        {
            if(i%j==0)
            {
                count ++;
            }
        }
        if(count == 2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}