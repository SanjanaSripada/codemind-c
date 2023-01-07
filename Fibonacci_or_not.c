#include<stdio.h>
int main()
{
    int n,i,a=0,c,b=1,cnt=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        c=a+b;
        if(c==n)
        {
            cnt++;
            break;
        }
        else
        {
            a=b;
            b=c;
        }
    }
    if(cnt!=0)
    printf("True");
    else
    printf("False");
}