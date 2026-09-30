#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, flag = 0;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i][i] == a[j][j])
            {
                flag = 1;
                break;
            }
        }

    }

    if(flag == 0)
        printf("Diagonal elements are distinct.");
    else
        printf("Diagonal elements are not distinct.");

    return 0;
}
