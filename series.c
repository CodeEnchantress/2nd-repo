// 1-1/3+1/5-1/7+1/9..............upto n terms. 
// sum of the series 
#include <stdio.h> 
int main() 
{
    int n;
    double sum = 0.0;
    int sign = 1;
    printf("\t********INPUT*********\n\n");
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        double term = 1.0 / (2 * i - 1);
        sum += sign * term;
        sign = -sign;
    }
    printf("\t********OUTPUT*********\n\n");
    printf("The sum of the series is: %lf\n", sum);
    return 0;}
