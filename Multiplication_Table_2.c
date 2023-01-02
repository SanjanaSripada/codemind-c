#include<stdio.h>
int main()
{
    int n,i,R;
    scanf("%d%d",&n,&R);
    for(i=1;i<=R;i++)
    {
        int p;
        p=n*i;
        printf("%d x %d = %d
",n,i,p);
    }
}