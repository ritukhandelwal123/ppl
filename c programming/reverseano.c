#include <stdio.h>
int main()
{
    int n, r, sum = 0;
    printf("Enter no:");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    printf("reverse = %d", sum);
}