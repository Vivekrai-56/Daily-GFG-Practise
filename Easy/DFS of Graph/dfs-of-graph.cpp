//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void solve( vector<int> adj[],vector<int>&vis,vector<int>&res,int  s ){
    res.push_back(s);
    vis[s]=1;
    for(auto x: adj[s])
    {
        if(!vis[x])
        {
            solve(adj, vis, res, x);
        }
    }
}
    
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>vis(V, 0);
        vector<int>res;
        solve(adj, vis , res, 0);
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends