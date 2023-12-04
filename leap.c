
#include <stdio.h>
int main()
{
  int yr;
  scanf("%d",&yr);
  if(yr%4==0 && yr%100 || yr%400==0)
  printf("Leap");
  else
  printf("Not a leap");
  return 0;
}
