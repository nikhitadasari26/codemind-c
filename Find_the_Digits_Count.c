#include<stdio.h>
int main()
{
    int i,n,r,dc;
    scanf("%d%d%d",&n,&r,&dc);
    for(i=1;i<=n;i++)
    {
        n=n/10;
        r=n%10;
        dc=dc+1;
    }
    printf("%d",i);
}