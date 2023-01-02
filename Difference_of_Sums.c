#include<stdio.h>
int main()
{
    int n,d,s1,s2;
    scanf("%d",&n);
    s1=n*(n+1)/2;
    s2=n*(n+1)*(2*n+1)/6;
    d=(s1*s1)-s2;
    printf("%d",d);
}