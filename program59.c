#include<stdio.h>
int main()
{
  int arr[10],n,i,countEven=0,countOdd=0;
printf("Enter the number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]%2==0)
countEven++;
else
  countOdd++;
}
printf("Number of even elements:%d\n",countEven);
printf("Number of odd elements:%d",countOdd);
return 0;
}
