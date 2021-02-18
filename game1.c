#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
int display(char comp, char player);
int main()
{
    char d[100], r, p, s, player, comp;
    printf("Enter your name below\n");
    gets(d);
    srand(time(NULL));
    int n;
    
    n = rand() % 2;
    if (n == 0)
    {
        comp = 'p';
    }
    else if (n == 1)
    {
        comp = 'r';
    }
    else if (n == 2)
    {
        comp = 's';
    }
    printf("Enter p for paper , r for rock and s for scissor\n");
    scanf("%c", &player);
    printf("Mr %s your result is \n", d);
        display(comp, player);
    
    return 0;
}
int display(char comp, char player)
{
    if (comp == 's' && player == 'p')
    {
        printf("you loss and computer win\n");
    }
    else if (comp == 's' && player == 'r')
    {
        printf("you win and computer loss\n");
    }
    else if (comp == 'r' && player == 'p')
    {
        printf("you win and computer loss\n");
    }
    else if (comp == 'r' && player == 's')
    {
        printf("you loss and computer win\n");
    }
    else if (comp == 'p' && player == 's')
    {
        printf("you win and computer loss\n");
    }
    else if (comp == 'p' && player == 'r')
    {
        printf("you loss and computer win\n");
    }
    else if (comp == player)
    {
        printf("Its a draw\n");
    }
}