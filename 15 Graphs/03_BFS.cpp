#include <bits/stdc++.h>
using namespace std;
void BFS(vector<vector<int>> adj,int start,int n){
    queue<int> q;
    q.push(start);
    vector<int> vis(n+1,0);

    vis[start]++;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int x : adj[u]){
            if(!vis[x]){
                vis[x]=1;
                q.push(x);
            }
        }
    }
}
int main() {
    int n = 5;
    vector<vector<int>> adj(n + 1);
    adj[1] = {2, 3};
    adj[2] = {1, 4, 5};
    adj[3] = {1, 5};
    adj[4] = {2};
    adj[5] = {2, 3};
    int start = 1;
    BFS(adj,start,n);
    return 0;
}
