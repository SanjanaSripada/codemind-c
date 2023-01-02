#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    printf("Prime");
    else
    printf("Not Prime");
}