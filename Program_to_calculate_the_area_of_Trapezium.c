#include<stdio.h>
int main()
{
    int base1,base2,height;
    scanf("%d%d%d",&base1,&base2,&height);
    float a=0.5*(base1+base2)*height;
    printf("%.4f",a);
}