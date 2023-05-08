#include<stdio.h>
int main()
{
    int n,s,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n==i*i)
        {
            s=i*i;
        }
    }
        if(n==s)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
}