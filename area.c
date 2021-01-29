#include <stdio.h>
#include <math.h>
#define pi 3.14
typedef struct
{
    float area, volume, perimeter;

} a;
int main()
{
    a circle, square, rectangle, cube, sphere;
    char shape;
    float r1, side1, side2, side3, side4, r2;
    printf("Enter c for circle\n Enter s square \n Enter r for rectangle \n Enter u for cube \n Enter o for sphere\n");
    scanf("%c", &shape);
    switch (shape)
    {
    case 'c':
    {
        printf("Enter the radius of circle\n");
        scanf("%f", &r1);
        circle.area = pi * pow(r1, 2);
        circle.perimeter = 2 * pi * r1;
        printf("The area of the circle is %.2f\n", circle.area);
        printf("The perimeter of the circle is %.2f\n", circle.perimeter);
        break;
    }
    case 's':
    {
        printf("Enter the side of the square \n");
        scanf("%f", &side1);
        square.area = pow(side1, 2);
        square.perimeter = 4 * side1;
        printf("The area of the square is %.2f\n", square.area);
        printf("The perimeter of the square is %.2f\n", square.perimeter);
        break;
    }
    case 'r':
    {
        printf("Enter the length and the breadth of the rectangle\n ");
        scanf("%f%f", &side2, &side3);
        rectangle.area = side2 * side3;
        rectangle.perimeter = 2 * (side2 + side3);
        printf("The area of the rectangle is %.2f\n",rectangle.area);
        printf("The perimeter of the rectangle is %.2f\n ",rectangle.perimeter);
        break;
    }
    case 'u':
    {
        printf("Enter the side of the cube\n");
        scanf("%f", &side4);
        cube.volume = pow(side4, 3);
        cube.area = 6 * pow(side4, 2);
        printf("The area of the cube is %.2f\n", cube.area);
        printf("The volume of the cube is %.2f\n", cube.volume);
        break;
    }
    case 'o':
    {
        printf("Enter the radius of the sphere\n");
        scanf("%f", &r2);
        sphere.volume = 4*pi*pow(r2,3)*1/3;
        sphere.area = 6 * pi * pow(r2, 2);
        printf("The area of the sphere is %.2f\n", sphere.area);
        printf("The volume of the sphere is %.2f\n", sphere.volume);
        break;
    }
    default:
    {
        printf("Please enter the correct input\n");
        break;
    }
    }
    return 0;
}