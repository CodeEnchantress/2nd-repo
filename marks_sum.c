#include<stdio.h>
 int main()
{ 
float a,b,c,d,e,sum,percentage ;
printf("Enter the marks of the 5 subjects.\n");
    scanf ("%f%f%f%f%f", &a, &b, &c, &d,&e);
    sum=a+b+c+d+e;
    percentage= sum/5;
    printf("Total Marks = %f\n", sum);
    printf("Percentage = %f", percentage);
    return 0;
}
