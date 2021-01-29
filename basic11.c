/*A company decide to give bonus to all its employes on new year. A 5% bonu on salary is given to male workers and 10% bonus on salary is given to female workers . 
write a C program to enter the salary and gender of the employee . If the salary salary is Less than 10,000 then the employee gets an extra 2% bonus on salary. Calculate the bonus that
has to be givern to the empoyee and display the salary that the employee will get*/
#include <stdio.h>
int main()
{
    float salary, bonus;
    char gender;
    printf("Enter F or f for female and M or m for male\n");
    scanf("%c", &gender);
    printf("Enter your salary\n");
    scanf("%f", &salary);
    if (gender == 'm' || gender == 'M')
    {
        bonus = salary * 0.05;
        if (salary < 10000)
        {
            bonus = salary * 0.05 + salary * 0.02;
            printf("Your bonus is %f\n", bonus);
        }
        else
        {
            printf("Your bonus is %f\n", bonus);
        }
    }
    if (gender == 'f' || gender =='F')
    {
        bonus = salary * 0.1;
        if (salary < 10000)
        {
            bonus = salary * 0.1 + salary * 0.02;
            printf("Your bonus is %f\n", bonus);
        }
        else
        {
            printf("Your bonus is %f\n", bonus);
        }
    }
    return 0;
}
