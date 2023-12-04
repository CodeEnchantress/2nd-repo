#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,i,c=0;
    printf("\t********INPUT*********\n\n");
    printf ("Enter a Number\n");
    scanf ("%d",&n);
    a=pow(n,0.5);
    for (i=2;i<=a;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    printf("\t********OUTPUT*********\n\n");
    if(c==0)
    printf("The no %d is prime\n",n);
    else
    printf("The no is not prime\n");

}
