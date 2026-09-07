#include<stdio.h>
#include<math.h>
int main()
{
  float principal,rate,time,si,ci,amt;
printf("Enter the principal amount:");
scanf("%f",&principal);
printf("Enter the rate:");
scanf("%f",&rate);
printf("Enter the time period:");
scanf("%f",&time);
si=(principal*rate*time)/100.0;
amt = principal * pow((1 + rate / 100), time);
ci=amt-principal;
    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}

