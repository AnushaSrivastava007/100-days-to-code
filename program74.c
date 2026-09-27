#include <stdio.h>
int main()
{
    int i, j, i1, j1, mat[10][10], trans[10][10];
    printf("Enter the no. of rows: ");
    scanf("%d", &i);
    printf("Enter the no. of columns: ");
    scanf("%d", &j);
    printf("Enter the elements in the matrix:\n");
    for(i1 = 0; i1 < i; i1++)
    {
        for(j1 = 0; j1 < j; j1++)
        {
            scanf("%d", &mat[i1][j1]);
        }}
    for(i1 = 0; i1 < i; i1++)
    {
        for(j1 = 0; j1 < j; j1++)
        {
            trans[j1][i1] = mat[i1][j1];
        }}
    printf("Transposed matrix:\n");
    for(i1 = 0; i1 < j; i1++)
    {
        for(j1 = 0; j1 < i; j1++)
        {
            printf("%d\t", trans[i1][j1]);
        }
        printf("\n");
    }
    return 0;
}
