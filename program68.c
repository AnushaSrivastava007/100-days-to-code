#include<stdio.h>
int main()
{
    int n,i,arr[100],pos;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position from which the number to be deleted:");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("The array after deletion is:");
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d] = %d",i,arr[i]);
    }
    return 0;
}
