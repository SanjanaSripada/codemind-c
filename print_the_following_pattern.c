#include <stdio.h>  
int main(void) {  
  int n,m;
  scanf("%d",&m);  
  for(int i=1;i<=m;i++)  
  {  
    for(int j=1;j<=m;j++)  
    {  
       if(i==j || j==(m-i+1))  
       {  
         printf("x");  
       }  
       else  
       {  
         printf("0");  
       }  
    }  
    printf("
");  
  }  
  return 0;  
}