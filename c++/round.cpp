#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, n, time, remain, temp = 0, time_quantum;
    int wt = 0, tat = 0;
    cout << "Enter total no of process:";
    cin >> n;
    remain = n;
    vector<int> at(n);
    vector<int> bt(n);
    vector<int> rt(n);
    cout << "Enter the arrival time,burst time for all the processes:";
    for (i = 0; i < n; i++)
    {
        cin >> at[i];
        cin >> bt[i];
        rt[i] = bt[i];
    }
    cout << "Enter value of time quantum:";
    cin >> time_quantum;
    cout << "\nprocess\t:timearound time:waiting time\n";
    for (time = 0; i = 0; remain != 0)
    {
        if (rt[i] < time_quantum && rt[i] > 0)
        {
            time += rt[i];
            rt[i] = 0;
            temp = 1;
        }
        else if (rt[i] > 0)
        {
            rt[i] -= time_quantum;
            time += time_quantum;
        }
        if (rt[i] == 0 && temp == 1)
        {
            remain--;
            printf("Process{%d}\t:\t%d\t:\t%d\n", i + 1, time - at[i], time - at[i] - bt[i]);
            cout << endl;
            wt += time - at[i] - bt[i];
            tat += time - at[i];
            temp = 0;
        }
        if (i == n - 1)
            i = 0;
        else if (at[i + 1] <= time)
            i++;
        else
            i = 0;
    }
    cout << "Average waiting time" << wt * 1.0 / n << endl;
    cout << "Average turn around time" << tat * 1.0 / n << endl;
}
