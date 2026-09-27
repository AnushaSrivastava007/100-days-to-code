#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int largest, secondLargest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }}
    for(i = 0; i < n; i++)
    {
        if(arr[i] != largest)
        {
            secondLargest = arr[i];
            break;
        }}
    for(i = 0; i < n; i++)
    {
        if(arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }}
    printf("Largest element = %d\n", largest);
    printf("Second largest element = %d\n", secondLargest);
    return 0;
}
