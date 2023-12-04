#include <stdio.h>
int main()
{
    float basic_salary, dearness_allowance, house_rent_allowance, gross_salary;
    printf("Enter the basic salary of Mr. X: ");
    scanf("%f", &basic_salary);
    dearness_allowance = 0.40* basic_salary;
    house_rent_allowance = 0.20* basic_salary;
    gross_salary = basic_salary + dearness_allowance + house_rent_allowance;
    printf("The gross salary of Mr. X is: %f\n", gross_salary);
    return 0;
}

