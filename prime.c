#include<stdio.h>
void main()
{
   int n,i,s=0;
   printf("enter number");
   scanf("%d",&n);
   for(i=2;i<n;i++)
   {
    if(n%10==0)
    s=s+i;
   }
    if(s==0)
    printf("number is prime");
   else
    printf("number is not prime");
}
