// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++
//DLRU
class Solution{
    public:
    void helper(int row,int col,string ans,vector<vector<int>> &m,int n,vector<vector<bool>> &visited,vector<string> &res){
        if(row==n-1&&col==n-1){
            res.push_back(ans);
            return;
        }
        if(row+1<n&&!visited[row+1][col]&&m[row+1][col]==1){
            visited[row][col]=true;
            helper(row+1,col,ans+"D",m,n,visited,res);
            visited[row][col]=false;
        }
        if(col-1>=0&&!visited[row][col-1]&&m[row][col-1]==1){
            visited[row][col]=true;
            helper(row,col-1,ans+"L",m,n,visited,res);
            visited[row][col]=false;
        }
        if(col+1<n&&!visited[row][col+1]&&m[row][col+1]==1){
            visited[row][col]=true;
            helper(row,col+1,ans+"R",m,n,visited,res);
            visited[row][col]=false;
        }
        if(row-1>=0&&!visited[row-1][col]&&m[row-1][col]==1){
            visited[row][col]=true;
            helper(row-1,col,ans+"U",m,n,visited,res);
            visited[row][col]=false;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<vector<bool>> visited(n,vector<bool> (n,false));
        vector<string> res;
        if(m[0][0]) helper(0,0,"",m,n,visited,res);
        return res;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends