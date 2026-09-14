#include <stdio.h>
int main()
{
 int n,r,temp,sum=0;
 printf("Enter the number\n");
 scanf("%d",&n);
 temp=n;
 while(n!=0)
 {
  r=n%10;
  sum=sum+(r*r*r);
  n/=10;
 }
if(temp==sum)
printf("Armstrong no.");
else
printf("Not armstrong no.");
return 0;
}
