#include <stdio.h>
int main() {
    int n, i;
    double number, sum = 0, average;
    printf("\t********INPUT*********\n\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Using a for loop:\n");
    for (i = 1; i <= n; i++) 
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &number);
        sum += number;
    }
   printf("\t********OUTPUT*********\n\n");
    average = sum / n;
    printf("Sum: %lf\n", sum);
    printf("Average: %lf\n\n",average);
    i = 1;
    sum = 0;
    printf("Using a while loop:\n");
    printf("\t********INPUT*********\n\n");
    while (i <= n) 
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &number);
        sum += number;
        i++;
    }
    average = sum / n;
    printf("\t********OUTPUT*********\n\n");
    printf("Sum: %lf\n", sum);
    printf("Average: %lf\n\n",average);
    i = 1; 
    sum = 0; 
    printf("Using a do-while loop:\n");
    printf("\t********INPUT*********\n\n");
    do {
        printf("Enter number %d: ", i);
        scanf("%lf", &number);
        sum += number;
        i++;
    } while (i <= n);
    printf("\t********OUTPUT*********\n\n");
    average = sum / n;
    printf("Sum: %lf\n", sum);
    printf("Average: %lf\n\n",average);
    return 0;
}
