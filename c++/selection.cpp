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
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "after selection sort:";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}