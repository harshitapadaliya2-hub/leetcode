class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> adj(n +1);
        for (auto &r :roads) {
            int u = r[0], v = r[1], w = r[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        queue<int> q;
        vector<int> vis(n + 1,0);
        q.push(1);
        vis[1] =1;
        int ans = INT_MAX;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (auto &[nbr, wt] : adj[node]) {
                ans = min(ans, wt);
                if (!vis[nbr]) {
                    vis[nbr] = 1;
                q.push(nbr);
                }
            }
        }
        return ans; 
    }
};