#include <bits/stdc++.h>
using namespace std;

void print(int* arr, int rows , int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i * cols + j] << " ";}
        cout << endl;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m;
    cin >> n >> m;
    int adj[n+1][n+1];
    while(m--){
        int u,v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    print(&adj[0][0],n+1,n+1);
    return 0;
}