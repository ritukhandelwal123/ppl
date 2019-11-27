#include <stdio.h>
int main()
{
    int r, c, a[100][100], b[100][100], diff[100][100], i, j;
    printf("Enter row and columns:");
    scanf("%d", &r);
    scanf("%d", &c);
    printf("\nEnter elements in first matrix:");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("\nEnter elements in second matrix:");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)

            scanf("%d", &b[i][j]);

    printf("The diff of matrix is:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            diff[i][j] = a[i][j] - b[i][j];
            printf("%d\t", diff[i][j]);
        }

        printf("\n");
    }
}
`