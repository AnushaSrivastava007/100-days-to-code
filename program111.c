#include <stdio.h>
int main()
{
    int arr[100], n, k, i, j, firstNegative;
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
        firstNegative = 0;
        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                firstNegative = arr[j];
                break;
            }}
        printf("%d", firstNegative);
        if(i < n - k)
        {
            printf(" ");
        }}
    return 0;
}
