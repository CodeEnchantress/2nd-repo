// infinte label will be there 



#include <stdio.h>
int main ()
{
    label:
    printf ("we are inside label ");
    printf ("hello world \n");
    goto label;
     return 0;
}