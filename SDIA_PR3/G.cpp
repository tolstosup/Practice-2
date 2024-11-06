#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

void dfs(int v, std::vector<std::vector<int>>& adj, std::vector<int>& dp);

int main() {
    int n, m;
    std::ifstream in("longpath.in");
    in >> n >> m;

    std::vector<std::vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        in >> u >> v;
        adj[u].push_back(v);
    }

    std::vector<int> dp(n + 1, -1);

    for (int i = 1; i <= n; i++) {
        if (dp[i] == -1) {
            dfs(i, adj, dp);
        }
    }

    std::ofstream out("longpath.out");
    out << *max_element(dp.begin(), dp.end());

    return 0;
}

void dfs(int v, std::vector<std::vector<int>>& adj, std::vector<int>& dp) {
    if (dp[v] != -1) return;

    dp[v] = 0;

    for (int neighbor : adj[v]) {
        dfs(neighbor, adj, dp);
        dp[v] = std::max(dp[v], dp[neighbor] + 1);
    }
}
