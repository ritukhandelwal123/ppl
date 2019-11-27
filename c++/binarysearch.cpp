#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, x, mid;
    cout << "enter size:";
    cin >> n;
    cout << "Enter elements:";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element to be search:";
    cin >> x;
    int beg = 0, end = n - 1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (x == a[mid])
        {
            cout << "element prsent";
            exit(0);
        }
        else
        {
            if (x > a[mid])
            {
                beg = mid + 1;
            }
            else
            {
                {
                    end = mid - 1;
                }
            }
        }
        if (beg > end)
        {
            cout << "not present";
        }
    }
}