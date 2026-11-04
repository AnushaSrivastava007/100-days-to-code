#include <stdio.h>
int main()
{
    int arr[100], n, k, i, j;
    int sum, maxSum;
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
        sum = 0;
        for(j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }
        if(i == 0 || sum > maxSum)
        {
            maxSum = sum;
        }}
    printf("%d", maxSum);
    return 0;
}
