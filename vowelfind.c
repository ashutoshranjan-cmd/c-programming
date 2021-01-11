/*This program will help you  to find either inputed character is vowel or not*/
#include <stdio.h>

int main()
{
    char c;
    printf("Enter the character \n");
    scanf("%c", &c);
    switch (c)
    {

    case 'a':
    case 'A':
 
        printf("The character is  vowel \n");
        break;
 
    case 'e':
    case 'E':
    
        printf("The character is a vowel\n");
        break;
    
    case 'i':
    case 'I':
    
        printf("The character is a vowel\n");
        break;
    
    case 'o':
    case 'O':
    
        printf("The character is a vowel\n");
        break;

    

    case 'u':

    case 'U':

    
        printf("the characer is vowel\n");
        break;
    
    default:
    
        printf("The character is not a vowel\n");
    
    }
        return 0;
    }