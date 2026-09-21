#include<stdio.h>
int main()
{
    int n,i,num,arr[100],pos;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
printf("Enter the number to be inserted");
scanf("%d",&num);
printf("Enter the postion at which the element is to be inserted");
scanf("%d",pos);
for(i=n-1;i<pos;i--)
{
    arr[i+1]=arr[i];
}
arr[pos]=num;
n++;
printf("the array after insertion of %d is:",num);
for(i=0;i<0;i++)
{
    printf("\t %d",arr[i]);
}
    return 0;

}
