#include <stdio.h>
int main()
{
    int r, c, i, j, a[100][100], b[100][100], mul[100][100];
    printf("\nEnter rows and columns:");
    scanf("%d %d", &r, &c);
    printf("Enter elements in first matrix:");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    printf("Enter elements in second matrix:");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    printf("multiplication of a matrix:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = a[i][j] * b[i][j];
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
}