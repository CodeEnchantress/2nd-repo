//use to jump in 
// hello world print nhi hoga kuki vo loop sedha goto end k baad , end mai chala jaega .
#include <stdio.h>
int main ()
{
    label:
    printf ("we are inside label\n");
    goto end ;
    printf("hello world\n");
    goto label; 
    end:
    printf ("we are at end");
    return 0;
}