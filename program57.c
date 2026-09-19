#include<stdio.h>
int main()
{
  int arr[10],n,i,sum=0;
printf("Enter the number of elements:\n");
scanf("%d",n);
printf("Enter the elements in the array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
sum+=arr[i];
}
printf("Sum of the elements=%d",sum);
return 0;
}
