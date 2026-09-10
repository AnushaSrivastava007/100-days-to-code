#include <stdio.h>
int main()
{
    int num,pos=0,neg=0,zero=0;
char ch='y';
while(ch=='y'||ch=='Y')
{
    printf("Enter number:");
    scanf("%d",&num);
    if(num>0)
    pos++;
    else if(num<0)
    neg++;
    else
    zero++;
    printf("Continue?(y/n) :");
    scanf("%c",&ch);
    
}
    printf("positive:%d ,negative:%d,zeros:%d\n",pos,neg,zero);

    return 0;
}
