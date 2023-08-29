#include <stdio.h>
int main (void)
{
    int age ;
    printf("enter your age \n");
    scanf ("%d", &age );
    printf("you have endered %d as your age \n, age ");
    if (age >=18 ){
        printf("you can vote!");
    } 
    else if (age >10){
        printf("you are btw 10 to 18 and you cannoy vote");
    }
    else {
        printf("you cannot vote !");

    }
}