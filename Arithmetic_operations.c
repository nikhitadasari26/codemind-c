#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int Sum=a+b;
    int Difference=a-b;
    int Product=a*b;
    int Quotient=a/b;
    int Remainder=a%b;
    printf("Sum:%d
",Sum);
    printf("Difference:%d
",Difference);
    printf("Product:%d
",Product);
    printf("Quotient:%d
",Quotient);
    printf("Remainder:%d",Remainder);
}