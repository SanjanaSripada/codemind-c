#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        int p;
        p=n*i;
        printf("%d x %d = %d
",n,i,p);
    }
}