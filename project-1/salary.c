
#include <stdio.h>

int main() {
    float base_salary, HRA, DA, TA, gross_salary;

    printf("Enter base salary: ");
    scanf("%f", &base_salary);

    HRA = (10.0 / 100) * base_salary;
    DA = (5.0 / 100) * base_salary;
    TA = (8.0 / 100) * base_salary;

    gross_salary = base_salary + HRA + DA + TA;

    printf("\nGross Salary = %.2f\n", gross_salary);

    return 0;
}
