#include<stdio.h>
int main()
{
    int X,A,B;
    scanf("%d%d%d",&X,&A,&B);
    int n=A+B*2;
    if(X>n)
    {
        printf("Not Qualify");
    }
    else
    {
        printf("Qualify");
    }
}