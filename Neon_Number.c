#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    int c=n*n;
    while(c!=0)
    {
        r=c%10;
        s=s+r;
        c=c/10;
    }
    if(n==s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}