// Prgoram to print armstrong number between 1 and given number
#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, j, temp1, temp2, sum = 0;
    printf("Enter the number here\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum = 0;
        temp1 = i;
        temp2 = i;
        while (temp1 > 0)
        {
            j = temp1 % 10;
            sum = sum + pow(j, 3);
            temp1 = temp1 / 10;
        }
        if (sum == temp2)
        {
            printf("%d", sum);
            printf("\n");
        }
        
        
    }
    return 0;
}