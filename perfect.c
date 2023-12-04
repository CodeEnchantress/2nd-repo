#include <stdio.h>

int main() {
    int n, sum_of_divisors = 0;
    printf("\t********INPUT*********\n\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i<n; i++) 
    {
        if (n % i == 0) 
        {
            sum_of_divisors += i;
        }
    }
    printf("\t********OUTPUT*********\n\n");
    if (sum_of_divisors == n) 
    {
        printf("%d is a perfect number.\n", n);
    } 
    else 
    {
        printf("%d is not a perfect number.\n", n);
    }
    return 0;
}
