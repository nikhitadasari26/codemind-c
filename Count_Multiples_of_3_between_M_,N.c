#include<stdio.h>
int main()
{
    int a,b,i,cnt=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%3==0)
        cnt=cnt+1;
    }
    printf("%d",cnt);
}