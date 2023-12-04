#include <stdio.h>
int main()
{
  int a,b,c;
  printf("enter first number");
  scanf("%d",&a);
  printf("enter second number");
  scanf("%d",&b);
  c=a;
  b=a;
  a=c;
  printf("now first number is" "%d",a);
  printf("now second number is" "%d",b);
  return 0;
}
