#include<stdio.h>
int main()
{
    int X,Y,Z;
    scanf("%d%d%d",&X,&Y,&Z);
    int n=2*(Y+X);
    int res=n*Z;
    printf("%d",res);
}