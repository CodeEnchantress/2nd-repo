#include <stdio.h>
int main()
{ int num;
    // take a num as an input from the user 
    printf("enter the num whose multipication table should be printed\n ");
    scanf("%d ",num );
    for (int i=0 ; i<10 ;i++)
    {
    printf("%d X %d = %d \n" , num , i+1 ,i*num);
    }
    return 0;
 }
 