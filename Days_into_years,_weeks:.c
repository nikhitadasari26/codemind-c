#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int y=n/365;
    int w=(n%365)/7;
    printf("%d
",y);
    printf("%d",w);
}