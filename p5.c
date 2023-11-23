#include<stdio.h>
 void main ()
 {int i, j , n;
  printf("enter the number:");
   scanf ("%d", &n);
    for (i=1;i<=n; i++)
     {printf("\n"); 
      for (j=1; j<i ; j++)
       { if ((i+j)%2==0)
        printf ("1");
        else 
         printf ("0");}}}