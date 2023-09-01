#include <stdio.h>
int main ()
{
     printf ("hello world \n");
     int i , age ;
     for (i=0; i<10;i++){
        printf("%d\n,enter your age", i   );
        scanf("%d, &age");
        if (age >10){
            break;
        }
     }
}