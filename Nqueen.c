#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef int index;
index n;
index col[100];

bool promising(index i);

void queens(index i)
{
    index j;

    if (promising(i))
        if (i == n)
        {
            for (index k = 1; k <= n; k++)
                cout << col[k] << " ";
            cout << endl;
        }
        else
            for (j = 1; j <= n; j++) {
                col[i + 1] = j;
                queens(i + 1);
            }
}

bool promising(index i)
{
    index k;
    bool switch_var;

    k = 1;
    switch_var = true;
    while (k < i && switch_var) {
        if (col[i] == col[k] || abs(col[i] - col[k]) == i - k)
            switch_var = false;
        k++;
    }
    return switch_var;
}

int main()
{
    cout << "Enter n: ";
    cin >> n;
    queens(0);
    return 0;
} 