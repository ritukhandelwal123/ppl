#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, s, count = 0;
    cout << "Enter the value of n:";
    cin >> n;
    cout << "\nEnter elements:";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element to be search:";
    cin >> s;
    for (i = 0; i < n; i++)
    {
        if (s == a[i])
        {
            count = 1;
            break;
        }
        if (count == 1)
            cout << "element prsent";
        else
        {
            cout << "not prsent";
            return 0;
        }
    }
}