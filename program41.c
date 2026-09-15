#include <stdio.h>
int main()
{
    int n, temp, first, last, digits = 0, power = 1, middle, result;
    int i;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp > 0)
    {
       digits++;
      temp = temp / 10;
    }
    for(i = 1; i < digits; i++)
    {
     power = power * 10;
    }
    first = n / power;
    last = n % 10;
    middle = (n % power) / 10;
    result = last * power + middle * 10 + first;
    printf("Number after swapping = %d", result);
    return 0;
}
