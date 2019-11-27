#include <stdio.h>
void main()
{
    int i, j, n, temp, bt[30], wt[30], pr[30], tat[30], pos;
    float awt = 0, atat = 0;
    printf("Enter the number of processes:");
    scanf("%d", &n);
    printf("Enter the burst time :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }
    printf("Enter priority of the process:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &pr[i]);
    }
    for (i = 0; i < n; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (pr[j] < pr[pos])
            {
                pos = j;
            }
        }
        temp = pr[i];
        pr[i] = pr[pos];
        pr[pos] = temp;

        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;
    }
    wt[0] = 0;
    printf("process \tburst time \tpriority \twaiting time\tturn around time\n");
    for (i = 0; i < n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;
        for (j = 0; j < i; j++)
        {
            wt[i] = wt[i] + bt[j];
        }
        tat[i] = wt[i] + bt[i];
        awt = awt + wt[i];
        atat = atat + tat[i];
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, bt[i], pr[i], wt[i], tat[i]);
    }
    awt = awt / n;
    atat = atat / n;
    printf("\navaerage waiting time=%f", awt);
    printf("\navaerage turn around time=%f", atat);
}