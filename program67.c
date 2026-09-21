#include <stdio.h>

int main()
{
    int i,j,n,num,arr[10];
    printf("Enter the no. of elements in an array:");
scanf("%d",&n);
printf("Enter the elements in ascending order in the array:");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter the no. to be inserted:");
scanf("%d",&num);
for(i=0;i<n;i++)
{
    if(arr[i]>num)
    {
        for(j=n-1;j>=i;j--)
        
            arr[j+1]=arr[j];
        
        arr[i]=num;
        break;
    }
    
}
n++;
printf("The array after insertion of %d is:",num);
for( i=0;i<n;i++)
printf(" \t %d",arr[i]);
    return 0;
}
