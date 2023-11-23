#include <stdio.h>
 int sum (int, int );
  void main()
  {int a,b,s;
   printf (" enter the no. :");
   scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("sumis : %d", s);
    }
     int sum (int x , int y )
     {int sum= x+y;
      return sum;}