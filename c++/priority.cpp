//non preemptive priority scheduling
#include <iostream>
#include <stdlib.h>
using namespace std;

struct process
{
    int pid, arrival, burst, priority, completion, turn_around, waiting;
};

void swap_priority(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    system("clear");
    int no;
    cout << "Enter the number of process: ";
    cin >> no;
    process process[no];
    system("clear");
    for (int i = 0; i < no; i++)
    {
        cout << "\nProcess " << i + 1 << ":\n";
        process[i].pid = i + 1;
        cout << "Arrival: ";
        cin >> process[i].arrival;
        cout << "Burst: ";
        cin >> process[i].burst;
        cout << "Priority: ";
        cin >> process[i].priority;
        system("clear");
    }

    for (int i = 0; i < no - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < no; j++)
            if (process[j].priority < process[min_idx].priority)
                min_idx = j;

        swap_priority(&process[min_idx].priority, &process[i].priority);
        swap_priority(&process[min_idx].arrival, &process[i].arrival);
        swap_priority(&process[min_idx].burst, &process[i].burst);
        swap_priority(&process[min_idx].pid, &process[i].pid);
    }

    int sum = 0;
    for (int i = 0; i < no; i++)
    {
        process[i].completion = sum + process[i].burst;
        sum = sum + process[i].burst;
    }
    for (int i = 0; i < no; i++)
    {
        process[i].turn_around = process[i].completion - process[i].arrival;
    }
    for (int i = 0; i < no; i++)
    {
        process[i].waiting = process[i].turn_around - process[i].burst;
    }

    cout << "Process\tArrival\tBurst\tPriority\tCompletion\tTurn_around\tWaiting\n";
    for (int i = 0; i < no; i++)
    {
        cout << process[i].pid << "\t" << process[i].arrival << "\t" << process[i].burst << "\t" << process[i].priority << "\t\t" << process[i].completion << "\t\t" << process[i].turn_around << "\t\t" << process[i].waiting << endl;
    }
    cout << "------------------------------------------------------------------------------" << endl;
    int tot_tt = 0;
    int tot_wt = 0;
    for (int i = 0; i < no; i++)
    {
        tot_tt += process[i].turn_around;
        tot_wt += process[i].waiting;
    }
    cout << "AWT=" << tot_tt / no;
    cout << endl;
    cout << "ATT=" << tot_wt / no;
    cout << endl;
    return 0;
}