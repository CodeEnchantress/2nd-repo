#include<stdio.h>
 void main ()
  {
     int rows , i , j ;
     printf (" enter the number of rows :");
     scanf ("%d", &rows);
      for (i =rows; i>=1; --i)
      {
         printf ("\n");
          for (j=1; j<=i; j++)
          printf ("*");

      }
  }