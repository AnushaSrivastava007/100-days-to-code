#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter three sides of triangle:");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b<=c||a+c<=b||b+c<=a)
    {
    printf("Triangle is not valid\n");}
else
{
    if(a==b && b==c)
    printf("Equilateral triangle\n");
    else if(a==b||b==c||a==c)
    printf("isosceles triangle\n");
    else
    printf("Scalene triangle\n");
}
    return 0;
}
