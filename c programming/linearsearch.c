#include <stdio.h>
int main()
{
    int a[100], n, i, x;
    printf("\nEnter the size:");
    scanf("%d", &n);
    printf("\nEnter elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter element to be searched:");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            printf("%d present at the location %d. \n", i + 1);
            break;
        }
        if (i > n)
        {
            printf("element not prsent", x);
        }
    }
}