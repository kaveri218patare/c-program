#include<stdio.h>
int main()
{
   int n,d;
   printf("enter number");
   scanf("%d",&n);
   printf("reverse number");
   while(n>0)
   {
    d=n%10;
    printf("%d",d);
    n=n/10;
   }
}
