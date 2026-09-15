#include <stdio.h>
int main()
{
long long binary, temp, place = 1, complement = 0;
int digit;
 printf("Enter a binary number: ");
 scanf("%lld", &binary);
temp = binary;
 while(temp > 0)
 {
  digit = temp % 10;
  if(digit == 0)
  digit = 1;
  else
 digit = 0;
complement = complement + digit * place;
place = place * 10;
temp = temp / 10;
}
 printf("1's complement = %lld", complement);
return 0;
}
