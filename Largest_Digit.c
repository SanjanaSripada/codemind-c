#include<stdio.h>
int main()
{
    int n,i,l=0,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        if(l<rem)
        {
            l=rem;
        }
          n=n/10;
    }
    printf("%d",l);
}