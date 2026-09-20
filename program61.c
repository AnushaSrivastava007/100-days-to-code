int main()
{
    int a[10],num,i,n,found=0,pos=-1;
    printf("\n Enter the no. elements in the array:");
    scanf("%d",&n);
    printf("\n Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the no. to be searched:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            found=1;
            pos=i;
            printf("\n %d is found in the position = %d",num,i);
        }
        else
        printf("\n %d is not found in the position = %d",num,i);
    }
   return 0; 
}
