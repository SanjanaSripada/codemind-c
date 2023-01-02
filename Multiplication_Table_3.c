#include<stdio.h>
int main()
{
    int n,A,B,i;
    scanf("%d%d%d",&n,&A,&B);
    for(i=A;i<=B;i++)
    {
        int p;
        p=n*i;
        printf("%d x %d = %d
",n,i,p);
    }
}