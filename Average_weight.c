#include<stdio.h>
int main()
{
    int Average,Boy1weight,Boy2weight;
    scanf("%d%d%d",&Average,&Boy1weight,&Boy2weight);
    int n=(3*Average)-(Boy1weight+Boy2weight);
    printf("%d",n);
}