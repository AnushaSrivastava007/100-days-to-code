#include <stdio.h>
int main()
{
    int arr[100], n, x;
    int i, ceilIndex = -1;
    printf("enter the size of the array:");
    scanf("%d", &n);
    printf("enter sorted array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter x:");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            ceilIndex = i;
            break;
        }
    }
    printf("index of ceil=%d\n", ceilIndex);
    return 0;
}
