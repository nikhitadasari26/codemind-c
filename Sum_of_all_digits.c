#include<stdio.h>
int main()
{
    int N,r,sum=0;
    scanf("%d",&N);
    while(N!=0)
    {
        r=N%10;
        sum=sum+r;
        N=N/10;
    }
    printf("%d",sum);
}