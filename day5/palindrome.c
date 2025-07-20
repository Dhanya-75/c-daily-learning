#include<stdio.h>
int main()
{
  int num, temp, digit, reverse=0;
  printf("enter number:");
  scanf("%d", &num);
  temp=num;
  while(temp!=0)
  {
     digit=temp%10;
     reverse=reverse*10+digit;
     temp=temp/10;
  }
if(reverse==num)
  printf("%d is a palindrome",num);
else
  printf("%d is not a palindrome",num);
return 0;
}
