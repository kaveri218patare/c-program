#include<stdio.h>
 int main()
{
    int i,n;
    printf("enter limit");
    scanf("%d",&n);
    printf("even numbres=");
    for(i=1;i<=n;i++)
     {
       if(i%2==0)
       printf("%d\t",i);
      } 
}
