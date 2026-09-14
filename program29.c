#include <stdio.h>
int main()
{
   int n,i=1;
   unsigned long long factorial=1;
   printf("Enter the number:\n");
   scanf("%d",&n);
   while(i<=n)
   {
   factorial=factorial*i;
   i++;
   }
   printf("Factorial of %d =%llu\n",n,factorial);
    return 0;
}  
