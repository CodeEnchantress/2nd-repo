//use to jump in 
#include <stdio.h>
int main ()
{
    label:
    printf ("we are inside label");
    got end ;
    printf("hello world\n");
    goto label; 
    end:
    printf ("we are at end");
    return 
}