#include <stdio.h>
int main()
{
    int arr[10], n, i;
    int positive = 0, negative = 0, zero = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }}
    printf("Positive=%d, Negative=%d, Zero=%d",positive, negative, zero);
    return 0;
}
