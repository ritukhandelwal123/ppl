#include <stdio.h>
int main()
{
    int i, n, sum;
    printf("Enter number of terms:");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + (i * i * i);
        }
    }
    printf("the sum of %d sequence is ", sum);
}