#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*This pointer will hole the base address of the block created */
    int *ptr;
    int n, i;
    //Get the number of elements of the array
    n = 5;
    printf("Entered number of elemetns: %d\n", n);
    //Dynamically allocae memory using malloc()

    ptr = (int *)malloc(n * sizeof(int));
    /*check the memory has been successfully allocated by malloc or not */
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        //Memory has been successfully allocated
        printf("Memory successfully allocated using mallloc\n");
        for (i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }
        //Print the element of the array
        printf(" The elements of the array are:");
        for (i = 0; i < n; i++)
        {
            printf("%d,", ptr[i]);
        }
    }

    return 0;
}