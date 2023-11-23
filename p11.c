// series print for odd number 

// by  using for loop
 
#include<stdio.h>
#include <math.h>
 void main ()
  { int n, sum ; 
  printf ("enter range :");
   scanf ("%d", &n);
    sum =0;
     for (int i=1; i<=n; i+=2)
      { sum = sum + pow (i, 2);}
       printf ("%d", sum );}