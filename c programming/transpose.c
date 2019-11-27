#include <stdio.h>
int main()
{
    int r, c, i, j, a[100][100], trans[100][100];
    printf("Enter row and columns:");
    scanf("%d %d", &r, &c);
    printf("Enter elements:");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            trans[j][i] = a[i][j];
        }
    printf("transpose of a matrix is:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
}