#include<stdio.h>
int main()
{
   int a[100],i,n,num,cnt=0;
   printf("enter limit");
   scanf("%d",&n);
   printf("enter number");
   for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
   printf("enter number to count");
   scanf("%d",&num);
   for(i=0;i<n;i++)
   {
    if(a[i]==num)
     cnt++;
   }
    printf("number count=%d",cnt);
}

