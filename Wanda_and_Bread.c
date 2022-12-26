#include<stdio.h>
int main()
{
    int N,M,K,T;
    scanf("%d%d%d%d",&N,&M,&K,&T);
    T=M*K;
    if(T>=N)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}