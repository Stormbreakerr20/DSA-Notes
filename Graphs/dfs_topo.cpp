class Solution {
private:
    void dfs(vector<vector<int>>& g,stack<int> &s, vector<bool>& visited,int node)
    {
        visited[node] = 1;
        for(auto i: g[node]){
            if(!visited[i]) dfs(g,s,visited,i);
        }
        s.push(node);
    }

public:
    vector<int> findOrder(int n , vector<vector<int>>& pre) {

        // dfs toposort
        vector<vector<int>> g(n);
        for(auto i: pre) g[i[1]].push_back(i[0]);

        stack<int> s;
        vector<bool> visited(n);
        for(int i = 0;i<n;i++){
            if(!visited[i]) dfs(g,s,visited,i);
        }

        vector<int> ans;
        while(!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        return ans;
    }
};