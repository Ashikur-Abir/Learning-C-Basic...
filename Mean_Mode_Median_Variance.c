#include <stdio.h>
#include <math.h>
int main()
{
    // for array size
    int n, i;
    printf("Please Enter The value of n:");
    scanf("%d", &n);

    // value
    float value[n];
    for (i = 0; i < n; i++)
    {
        printf(" Value-%d: ", i + 1);
        scanf("%f", &value[i]);
    }

    // Others Variable
    int j, MaxCount = 0, Count;
    float Mean, sum = 0, temp, Median, Variance = 0, Mode = value[0];

    // mean
    for (i = 0; i < n; i++)
    {
        sum = sum + value[i];
    }
    Mean = sum / n;
    printf("Mean =%.2f\n", Mean);

    // mode
    for (i = 0; i < n; i++)
    {
        Count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (value[i] == value[j])
            {
                Count++;
            }
        }

        if (Count > MaxCount)
        {
            MaxCount = Count;
            Mode = value[i];
        }
    }
    if (MaxCount > 1)
    {
        printf("Mode =%f\n", Mode);
    }
    else
    {
        printf("There is no Mode found\n");
    }

    // median
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (value[i] > value[j])
            {
                temp = value[i];
                value[i] = value[j];
                value[j] = temp;
            }
        }
    }
    if (n % 2 == 0)
        Median = (value[n / 2] + value[(n / 2) - 1]) / 2;
    else
        Median = value[n / 2];
    printf("Median =%.2f\n", Median);

    // Variance
    for (i = 0; i < n; i++)
    {
        Variance = Variance + ((value[i] - Mean) * (value[i] - Mean));
    }
    Variance = Variance / n;
    printf("Variance =%.2f ", Variance);

    return 0;
}