#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        float s;
        s=sqrt(i);
        sum=sum+s;
    }
    printf("%.2f",sum);
}