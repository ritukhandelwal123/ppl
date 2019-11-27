#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i;
    cout << "Enter the size:";
    cin >> n;
    cout << "Enter elements:";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "elements in reverse order is:";
    for (i = n - 1; i >= 0; i--)
    {
        cout << a[i];
        cout << "\t";
    }
}