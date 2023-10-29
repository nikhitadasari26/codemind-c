#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int H=n/3600;
    int M=(n%3600)/60;
    int S=n%60;
    printf("H:M:S-%d:%d:%d",H,M,S);
}