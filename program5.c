#include <stdio.h>
#include <math.h>
int main()
{
float celcius,fahrenheit;
    printf("Enter teperature in celcius:");
    scanf("%f",&celcius);
    fahrenheit=(celcius*(9.0/5.0))+32.0;
    
printf("%.2f celcius= %.2f fahrenheit\n",celcius,fahrenheit);
    return 0;
}
