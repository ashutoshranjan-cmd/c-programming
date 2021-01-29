//Basic program to find bigggest among three numbers
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers here\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is the greatest among three numbers\n",a);
    }
    else if(b>c && b>a)
    {
        printf("%d is the greatest among the three numbers \n",b);

    }
    else
    {
        printf("%d is the greatest among the three numbers \n",c);
    }
    return 0;
    

}