#include <stdio.h>
int main()
{
    int arr[100], n, k, i, j, max;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    for(i = 0; i <= n - k; i++)
    {
        max = arr[i];
        for(j = i; j < i + k; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
            }}
        printf("%d", max);
        if(i < n - k)
        {
            printf(" ");
        }}
    return 0;
}
