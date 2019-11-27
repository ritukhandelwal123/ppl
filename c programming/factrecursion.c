#include <stdio.h>
int fac(int);
int main()
{
    int n, facto;
    printf("Enter no:");
    scanf("%d", &n);
    facto = fac(n);
    printf("\nfactorial of %d is:%d", n, facto);
    return (0);
}
int fac(int n)
{
    if (n == 0)
        return (1);
    else
        return (n * fac(n - 1));
}