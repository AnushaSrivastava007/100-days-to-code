#include<stdio.h>
int main()
{
  int arr[10],n,i,min,max;
printf("Enter the elements:");
scanf("%d",&n);
printf("Enter the number of elements in the array:\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&arr[i]);
}
max=arr[0];
min=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
if(arr[i]<min)
{
min=arr[i];
}}
printf("Minimum element=%d",min);
printf("Maximum element=%d",max);
return 0;
}
