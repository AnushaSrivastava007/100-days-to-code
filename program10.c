#include<stdio.h>
int main()
{
    int timeinsec, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &timeinsec);

    hours = timeinsec / 3600;
    minutes = (timeinsec % 3600) / 60;
    seconds = timeinsec % 60;

    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
