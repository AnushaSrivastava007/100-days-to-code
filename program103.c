#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int totalSum = 0, leftSum = 0, rightSum;
    int pivot = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        totalSum = totalSum + arr[i];
    }

    for(i = 0; i < n; i++)
    {
        rightSum = totalSum - leftSum - arr[i];

        if(leftSum == rightSum)
        {
            pivot = i;
            break;
        }

        leftSum = leftSum + arr[i];
    }

    printf("%d", pivot);

    return 0;
}
