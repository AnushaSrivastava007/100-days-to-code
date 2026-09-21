#include <stdio.h>
int main()
{
    int a[100], n, i, num;
    int first,last, mid;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &num);

    first = 0;
    last = n - 1;
    while(first <= last)
    {
        mid = (first + last) / 2;
        if(a[mid] == num)
        {
            printf("Element found at position %d", mid + 1);
            return 0;
        }
        else if(a[mid] < num)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }}
    printf("Element not found");
    return 0;
}
