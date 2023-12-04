#include <stdio.h>
#include <math.h>
int main() 
{
    float a, b, c;
    float discriminant, root1, root2;
    printf("\t********INPUT*********\n\n");
    printf("Enter the coefficient a: ");
    scanf("%f", &a);
    printf("Enter the coefficient b: ");
    scanf("%f", &b);
    printf("Enter the coefficient c: ");
    scanf("%f", &c);
    discriminant = b * b - 4 * a * c;
    printf("\t********OUTPUT*********\n\n");
    if (discriminant > 0) 
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %f\n", root1);
        printf("Root 2 = %f\n", root2);
    } else if (discriminant == 0) 
    {
        root1 = -b / (2 * a);
        printf("Root 1 = Root 2 = %f\n", root1);
    }
 else 
    {
        printf("Imaginary Solutions");
    }

    return 0;
}
