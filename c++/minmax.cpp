#include <iostream>
using namespace std;
int main()
{
    int n, a[10], i, max = 0, min = 0;
    cout << "\nEnter size of an array:";
    cin >> n;
    cout << "\nEnter the elements in an array:";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    cout << "The maximum element is=" << max;
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    cout << "The maximum element is=" << min;
}