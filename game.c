#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char a[100];
    printf("Enter your name here\n");
    gets(a);
    srand(time(NULL));
    int b, count1 = 0, count2 = 0, k = 2;
    printf("Enter 1 for rock \n Enter 2 for paper \n Enter 3 for scissor\n");
    for (int i = 1; i <= 3; i++)
    {
        scanf("%d", &b);

        if (b == rand() % 3)
        {
            printf("Its a draw\n");
        }
        else if (rand() % 3 == 3 && b == 1)
        {
            printf("You win and computer loss\n");
            count1++;
        }
        else if (rand() % 3 == 2 && b == 1)
        {
            printf("You loss and copmuter win\n");
            count2++;
        }

        else if (rand() % 3 == 3 && b == 2)
        {
            printf("You loss and computer win\n");
            count2++;
        }

        else if (rand() % 3 == 1 && b == 2)
        {
            printf("You win and computer loss \n");
            count1++;
        }

        else if (rand() % 3 == 2 && b == 3)
        {
            printf("You win and computer loss\n");
            count1++;
        }

        else if (rand() % 3 == 1 && b == 3)
        {
            printf("You loss and comuter win\n");
            count2++;
        }
        else if (b == 0)
        {
            printf("You loss and computer win\n");
            count2++;
        }
        else if (rand() == 0)
        {
            printf("You win and computer loss\n");
            count1++;
        }
        else if( b>3)
        {
            printf("You loss and computer win\n");
            count2++;
        }
        else
        {
            printf(" You win conmputer loss\n");
            count1++;
        }

        printf("%d attempt remaining\n", k);
        k = k - 1;
    }

    if (count1 > count2)
    {
        printf("Congratulation Mr %s you win\n", a);
    }
    else if (count1 == count2)
    {
        printf("Oh its a draw Mr %s\n", a);
    }
    else
    {
        printf("Sorry to say but you loss Mr %s\n", a);
    }

    return 0;
}