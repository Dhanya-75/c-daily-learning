#include<stdio.h>
int main()
{
   int a,b;
   printf("enter two numbers:");
   printf("a=");
   scanf("%d", &a);
   printf("b=");
   scanf("%d", &b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("after swapping=a=%d,b=%d\n",a,b);
   return 0;
}
