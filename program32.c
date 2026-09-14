#include<stdio.h>
int main()
{
 int num,original,rev=0,d;
 printf("Enter the number");
 scanf("%d",&num);
 original=num;
while(num!=0)
 {
   d=num%10;
   rev=rev*10+d;
    num/=10;
  }
  if(original==rev)
   printf("Palindrome");
  else
   printf("Not palindrome");
  return 0;
}
