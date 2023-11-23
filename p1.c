#include <stdio.h>
 void tri()
  {
     float a1,a2, a3;
      printf ("enter all the angles:");
      scanf ("%f%f%f", &a1,&a2,&a3);
      if ((a1+a2+a3)==180)
      printf("triange is valid");
      else 
      printf("triangle is invalid");

  }
   void main()
   {tri();}