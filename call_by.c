#include <stdio.h>
void changeValue (int* address)
{
    *address = 345;

}
int main ()
{
     int a = 34;  int b = 56 ;
     printf(" the value of a now is %d\n", a);
     changeValue (&a);
     printf("the value of a now is %d\n ", a);
      return 0;    
}
