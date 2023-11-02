#include<stdio.h>
int main()
{
    float salary,HRA,DA;
    scanf("%f%f%f",&salary,&HRA,&DA);
    float PF=(0.12)*salary;
    float GrossSalary=salary+HRA+DA+PF;
    printf("%.2f
",PF);
    printf("%.2f",GrossSalary);
}