#include <iostream>
using namespace std;

int a[100][100];
bool visited[100];
int n;

void dfs(int node) {
    visited[node] = true;
    cout << node << " ";

    for (int i = 1; i <= n; i++) {
        if (a[node][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    int e;
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        a[u][v] = 1;
        a[v][u] = 1; // remove for directed graph
    }

    dfs(1);
}