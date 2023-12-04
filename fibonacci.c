#include <stdio.h>
int main() 
{
    int n, first = 0, second = 1, next;
    printf("\t********INPUT*********\n\n");
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    printf("\t********OUTPUT*********\n\n");
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) 
    {
        if (i == 1) 
        {
            printf("%d", first);
        } 
        else if (i == 2) 
        {
            printf(", %d", second);
        } 
        else 
        {
            next = first + second;
            printf(", %d", next);
            first = second;
            second = next;
        }
    }
    printf("\n");
    return 0;
}
