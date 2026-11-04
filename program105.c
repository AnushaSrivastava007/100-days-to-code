#include <stdio.h>
int main()
{
    int nums[100], n, i, j, count;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    for(i = 0; i < n; i++)
    {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }}
        if(count > n / 2)
        {
            printf("%d", nums[i]);
            return 0;
        }}
    printf("-1");
    return 0;
}
