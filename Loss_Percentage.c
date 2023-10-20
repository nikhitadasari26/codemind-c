#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    float n=X-Y;
    float lp=((n)*100/X);
    printf("%.2f",lp);
}