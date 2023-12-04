//input 5 integer and then print the smallest of them 
#include <stdio.h>
int main() 
{
    int num1, num2, num3, num4, num5, smallest;
    printf("\t********INPUT*********\n\n");
    printf("Enter five integers, one at a time:\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    smallest = num1;
    if (num2 < smallest) 
    {
        smallest = num2;
    }
    if (num3 < smallest) 
    {
        smallest = num3;
    }
    if (num4 < smallest) 
    {
        smallest = num4;
    }
    if (num5 < smallest) 
    {
        smallest = num5;
    }
    printf("\t********OUTPUT*********\n\n");
    printf("The smallest number is: %d\n", smallest);
    return 0;
}

