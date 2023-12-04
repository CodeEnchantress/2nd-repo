#include<stdio.h>
int main()
{
int x;
printf("enter the value of x");
scanf("%d",&x);
int z;
if(x>=0&&x<=10)
{
    z=(x*x)+2;
    printf("%d",z);
}
else if(x>=11&&x<=20)
{
    z=(x*x)+2*x;
    printf("%d",z);
}
else if(x>=21&&x<=30)
{
    z=(x*x*x)+2*x*2;
    printf("%d",z);
}
else
{
    z=0;
    printf("%d",z);
}
return 0;
}


