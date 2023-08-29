#include <stdio.h>

int main()
{
    int age;
    printf("enter you age \n");
    scanf("%d",&age);
    switch (age)
    {
        case3: 
        printf ("the age is 3");
        break;
        case 13 :
        printf("the age is 13 ");
        break;
        case 23:
        printf("the age is 23");
        break; 
        default:
        printf ("the age is not 3 ,13 and 23 ");
        break;
    }
    
}