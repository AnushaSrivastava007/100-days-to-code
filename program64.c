#include <stdio.
int main()
{
    long long num;
    int count[10] = {0};
    int digit, maxDigit = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    if (num < 0)
        num = -num;
    if (num == 0)
    {
        printf("Most frequent digit = 0\n");
        return 0;
    }
    while (num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }
    for (int i = 1; i < 10; i++)
    {
        if (count[i] > count[maxDigit])
        {
            maxDigit = i;
        }}
    printf("Most frequent digit = %d\n", maxDigit);
    printf("It occurs %d times.\n", count[maxDigit]);
    return 0;
}
