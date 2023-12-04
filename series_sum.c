// 1+(1+2)+(1+2+3)+(1+2+3+4)+..................+(1+2+3+.....n).
#include <stdio.h>
int main() 
{
    int n, sum = 0,innerSum=0;
    printf("\t********INPUT*********\n\n");
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            innerSum += j;
        }
        sum += innerSum;
    }
    printf("\t********OUTPUT*********\n\n");
    printf("The sum of the series is: %d\n", sum);
    return 0;
}
