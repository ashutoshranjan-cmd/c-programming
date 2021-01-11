/*This program will help you to find transpose of the determinant*/
#include<stdio.h>
int main()
{
    int a,b,m,n,i,j;
    printf("Enter the size of the array\n");
    scanf("%d%d",&a,&b);
    printf("Enter the size of the matrix\n");
    scanf("%d%d",&m,&n);
    int k[a][b];
    /*for input of the matrix*/
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&k[i][j]);

        }
    }
    /*For display*/
    printf("The given matrix is below\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)

        {
            printf("%d",k[i][j]);

        }
        printf("\n");
    }
    /*for transpose*/
    printf("The transpose is given below\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("%d",k[j][i]);
        }
        printf("\n");
    }
    return 0;

}