#include<stdio.h>
int main() {
  int n,j,i;
  scanf("%d%d", &n,&j);
  for (i = 1; i <=j; ++i)
  {
    if(i%2!=0)
    printf("%d x %d = %d
",n,i,n*i);
  }
  return 0;
}