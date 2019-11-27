#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count, j, n, time, remain, flag = 0, timeslice;
    int waiting = 0, tat = 0, at[10], bt[10], remaining[10];
    system("clear");
    cout << "Enter the number of processes:";
    cin >> n;
    remain = n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nProcess" << i + 1 << ":" << endl;
        cout << "arrival:";
        cin >> at[i];
        cout << "Burst:";
        cin >> bt[i];
        remaining[i] = bt[i];
        system("clear");
    }
    cout << "\nEnter the time slice:";
    cin >> timeslice;
    cout << "\n\nProcess\t\tturnaround\twaiting\n\n";
    for (time = 0; count = 0; remain != 0)
    {
        if (remaining[count] <= timeslice && remaining[count] > 0)
        {
            time += remaining[count];
            remaining[count] = 0;
            flag = 1;
        }
        else if (remaining[count] > 0)
        {
            remaining[count] = remaining[count] - timeslice;
            time = time + timeslice;
        }
        if (remaining[count] == 0 && flag == 1)
        {
            remain--;
            cout << count + 1 << "\t\t" << time - at[count] << "\t\t" << time - at[count] - bt[count] << "\n";
            waiting += time - at[count] - bt[count];
            tat += time - at[count];
            flag = 0;
        }
        if (count == n - 1)
            count = 0;
        else if (at[count + 1] <= time)
            count++;
        else
        {
            count = 0;
        }
    }
    cout << "awt=" << waiting / n;
    cout << endl;
    cout << "att=" << tat / n;
    cout << endl;
    return 0;
}