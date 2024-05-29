#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> bfs(int V, vector<int> adj[])
{
    int vis[V] = {0};
    vis[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> orderOfBFS;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        orderOfBFS.push_back(node);

        for (auto it : adj[node])
        {
            if (vis[it] == 0)
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    return orderOfBFS;
}

int main()
{

    return 0;
}