#include<stdio.h>
int main()
{
    int n,z;
    printf("enter a number");
    scanf("%d",&n);
    int c=0;
    while(n<=100000)
    {
        n=2*n;
        c++;
    }
    printf("%d",c);
    return 0;
} 
