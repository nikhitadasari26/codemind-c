#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    float n=(Y-X);
    float res=(n*100)/X;
    printf("%.2f",res);
}