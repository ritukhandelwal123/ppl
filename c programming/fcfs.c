#include <stdio.h>
void main()
{
    int i, j, n, bt[30], at[30], wt[30], tat[30], temp[30];
    float awt = 0, atat = 0;
    printf("Enter the no of processes:");
    scanf("%d", &n);
    printf("Enter the busrt time :");
    for (i = 0; i < n; i++)
        scanf("%d", &bt[i]);
    printf("Enter the arrival time :");
    for (i = 0; i < n; i++)
        scanf("%d", &at[i]);
    temp[0] = 0;
    printf("process\t burst time\t arrival time\t waiting time\t turn around time\t\n   ");
    for (i = 0; i < n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;
        temp[i + 1] = temp[i] + bt[i];
        wt[i] = temp[i] - at[i];
        tat[i] = wt[i] + bt[i];
        awt = awt + wt[i];
        atat = atat + tat[i];
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n\n", i + 1, bt[i], at[i], wt[i], tat[i]);
    }
    awt = awt / n;
    atat = atat / n;
    printf("average waiting time %f\n", awt);
    printf("average turn around  time %f\n", atat);
}