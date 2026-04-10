#include<stdio.h>
int main()
{
    int choice;
    printf("Choose CPU Scheduling Algorithm:\n");
    printf("1. FCFS\n2. SJF\n3. Priority\n4. Round Robin\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    int n, i, j;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    int p[n], at[n], bt[n], ct[n], tat[n], wt[n];
    for(i = 0; i < n; i++)
        p[i] = i + 1;
    switch(choice)
    {
        case 1:
        {
            int temp;

            for(i = 0; i < n; i++)
            {
                printf("Enter AT & BT for P%d: ", i+1);
                scanf("%d %d", &at[i], &bt[i]);
            }
            for(i = 0; i < n-1; i++)
            {
                for(j = 0; j < n-i-1; j++)
                {
                    if(at[j] > at[j+1])
                    {
                        temp = at[j]; at[j] = at[j+1]; at[j+1] = temp;
                        temp = bt[j]; bt[j] = bt[j+1]; bt[j+1] = temp;
                        temp = p[j];  p[j]  = p[j+1];  p[j+1]  = temp;
                    }
                }
            }
            ct[0] = at[0] + bt[0];
            for(i = 1; i < n; i++)
            {
                if(ct[i-1] < at[i])
                    ct[i] = at[i] + bt[i];
                else
                    ct[i] = ct[i-1] + bt[i];
            }
            break;
        }
        case 2:
        {
            int time = 0, completed = 0, min, idx;
            int done[n];
            for(i = 0; i < n; i++)
            {
                done[i] = 0;
                printf("Enter AT & BT for P%d: ", i+1);
                scanf("%d %d", &at[i], &bt[i]);
            }
            while(completed < n)
            {
                min = 9999;
                idx = -1;
                for(i = 0; i < n; i++)
                {
                    if(at[i] <= time && done[i] == 0 && bt[i] < min)
                    {
                        min = bt[i];
                        idx = i;
                    }
                }
                if(idx == -1)
                    time++;
                else
                {
                    time += bt[idx];
                    ct[idx] = time;
                    done[idx] = 1;
                    completed++;
                }
            }
            break;
        }
        case 3:
        {
            int time = 0, completed = 0, min, idx;
            int pr[n], done[n];
            for(i = 0; i < n; i++)
            {
                done[i] = 0;
                printf("Enter AT, BT & Priority for P%d: ", i+1);
                scanf("%d %d %d", &at[i], &bt[i], &pr[i]);
            }
            while(completed < n)
            {
                min = 9999;
                idx = -1;
                for(i = 0; i < n; i++)
                {
                    if(at[i] <= time && done[i] == 0 && pr[i] < min)
                    {
                        min = pr[i];
                        idx = i;
                    }
                }
                if(idx == -1)
                    time++;
                else
                {
                    time += bt[idx];
                    ct[idx] = time;
                    done[idx] = 1;
                    completed++;
                }
            }
            break;
        }
        case 4:
        {
            int tq, time = 0, completed = 0;
            int rt[n];
            for(i = 0; i < n; i++)
            {
                printf("Enter AT & BT for P%d: ", i+1);
                scanf("%d %d", &at[i], &bt[i]);
                rt[i] = bt[i];
            }
            printf("Enter Time Quantum: ");
            scanf("%d", &tq);
            while(completed < n)
            {
                int found = 0;
                for(i = 0; i < n; i++)
                {
                    if(at[i] <= time && rt[i] > 0)
                    {
                        found = 1;

                        if(rt[i] > tq)
                        {
                            time += tq;
                            rt[i] -= tq;
                        }
                        else
                        {
                            time += rt[i];
                            ct[i] = time;
                            rt[i] = 0;
                            completed++;
                        }
                    }
                }

                if(found == 0)
                    time++;
            }
            break;
        }

        default:
            printf("Invalid choice!\n");
            return 0;
    }
    for(i = 0; i < n; i++)
    {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
    }
    printf("\nP\tAT\tBT\tCT\tTAT\tWT\n");
    for(i = 0; i < n; i++)
    {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
               p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }
    return 0;
}