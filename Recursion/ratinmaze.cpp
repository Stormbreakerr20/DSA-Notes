// Rat in a Maze Problem: https://practice.geeksforgeeks.org/pr...
#include <iostream>
#include <vector>
using namespace std;
#include<algorithm>
class Solution{
    private:
    bool isSafe(vector<vector<int>>&main,int x,int y,int n,vector<vector<int>> visited){
    if((x>=0 && x<n)&&(y>=0 && y<n) && (main[x][y]==1)&&(visited[x][y]==0)){
        return true;
    }
    return false;
}
    void path(vector<vector<int>>&main, vector<vector<int>> visited, string route, vector<string>&ans,int x, int y,int n){
        //currently at x,y
        visited[x][y]=1;
    
        //base
        if(x==n-1 && y==n-1){
            ans.push_back(route);
            return;
        }
    
        //down left up right
    
        //down
        if(isSafe(main,x+1,y,n,visited)){
            route.push_back('D');
            path(main,visited,route,ans,x+1,y,n);
            route.pop_back();
        }
        //up
        if(isSafe(main,x-1,y,n,visited)){
            route.push_back('U');
            path(main,visited,route,ans,x-1,y,n);
            route.pop_back();
        }
        //left
        if(isSafe(main,x,y-1,n,visited)){
            route.push_back('L');
            path(main,visited,route,ans,x,y-1,n);
            route.pop_back();
        }
        //right
        if(isSafe(main,x,y+1,n,visited)){
            route.push_back('R');
            path(main,visited,route,ans,x,y+1,n);
            route.pop_back();
        }
        
        visited[x][y]=0;
    
    }

    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<vector<int>> visited=m;
        vector<string> ans;
        if(m[0][0]==0){
            return ans;
        }
        for (int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        string route="";
        path(m,visited,route,ans,0,0,n);
        sort(ans.begin(),ans.end());
        
        return ans;
        
        
    }
};