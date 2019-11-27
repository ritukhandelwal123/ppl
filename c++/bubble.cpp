#include <iostream>
using namespace std;
int main()
{
    int i, j, n, a[100], temp;
    cout << "Enter size:";
    cin >> n;
    cout << "Enter elements:";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "after bubble sort:";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}