#include<stdio.h>



int main ()
{ int num;

    printf("enter the num you want multipilaction table of .\n");
    scanf("%d", &num);
    printf ("multiplication table of %d is as follows :\n", num);
     
     //printf("%d X 1 = %d \n", num, num*1);
      //printf("%d X 2 = %d \n", num, num*1);
     // printf("%d X 1 = %d \n", num, num*1);
      //printf("%d X 1 = %d \n", num, num*1);
      //printf("%d X 1 = %d \n", num, num*1);
      //printf("%d X 1 = %d \n", num, num*1);
      for (int i=0; i<10; i++)
      {
        printf ("%d x %d = %d\n", num, i , num*i);

      }
      return 0;
}
