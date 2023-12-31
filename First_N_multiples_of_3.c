#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i*3;
        if(a%3==0)
        {
            printf("%d ",a);
        }
        
    }

}