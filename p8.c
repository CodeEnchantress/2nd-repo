#include <stdio.h>
 void main()
  {int i , j , k , n ; 
  printf ("enter the number :");
   scanf ("%d", &n);
    for (i=1; i<=n ; i++)
     {printf ("\n");
      for (j=1; j<=i; j++)
      {printf (" ");}
       for (k=i; k<=n; k++)
        printf ("*");}}