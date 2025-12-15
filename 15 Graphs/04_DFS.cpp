#include <bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>>&adj, int node, vector<int> &vis){
    cout << node << " ";
    vis[node] = 1;
    for(auto x : adj[node]) if(!vis[x]) DFS(adj,x,vis);
}

int main() {
    int n = 6;
    vector<vector<int>> adj(n + 1);
    adj[1] = {2, 3};
    adj[2] = {1, 4};
    adj[3] = {1, 5};
    adj[4] = {2, 5, 6};
    adj[5] = {3, 4};
    adj[6] = {4};

    vector<int> vis(n + 1, 0);
    int start = 1;

    DFS(adj, start, vis);
    return 0;
}
