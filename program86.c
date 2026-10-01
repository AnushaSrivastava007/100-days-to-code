#include <stdio.h>
int main()
{
    char str[100];
    int i, length = 0, flag = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    while(str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            flag = 1;
            break;
        }}
    if(flag == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}
