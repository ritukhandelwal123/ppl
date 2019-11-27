#include <iostream>
using namespace std;
int main()
{
    int n, i, j, temp, a[100];
    cout << "Enter elements:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j > 0; j--)
        {
            if (a[j] < a[j - 1])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    cout << "after insertion sort:";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}