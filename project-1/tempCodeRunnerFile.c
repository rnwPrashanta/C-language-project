#include<stdio.h>
int main(){
    float base_salery,HRA,DA,TA,gross_salary;
        printf("enter base salary");
        scanf("%f",&base_salery);

        HRA=(10.0/100)*base_salery;
        DA=(5.0/100)*base_salery;
        TA=(8.0/100)*base_salery;

        gross_salary=base_salery+HRA+DA+TA;

        printf("\ngross slary = %.2f",gross_salary);

}