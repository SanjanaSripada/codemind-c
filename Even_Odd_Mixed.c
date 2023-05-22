#include<stdio.h>
int main()
{
    int n,c=0,d=0,e=0,x;
    scanf("%d",&n);
    while(n!=0)
    {
        x=n%10;
        e++;
        if(x%2==0)
        {
            c++;
        }
        else
            d++;
            n=n/10;
    }
        if(c==e)
        printf("Even");
        else if(d==e)
        printf("Odd");
        else
        printf("Mixed");
}