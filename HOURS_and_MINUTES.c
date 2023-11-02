#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int Hour=n/60;
    int Minute=n%60;
    printf("%d Hour(s) %d Minute(s)",Hour,Minute);
}