#include<stdio.h>
int main()
{
   int a,b;
   void swap(int a,int b);
   printf("enter two numbers");
   scanf("%d%d",&a,&b);
   swap(a,b);
}
void swap(int a,int b)
{
    int t=a;
        a=b;
        b=t;
    printf("\n swap value of a=%d",a);
    printf("\n swap value of b=%d",b);
}

