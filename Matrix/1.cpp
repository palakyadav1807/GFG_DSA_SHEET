// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int m, int n, vector<vector<int>> mat) {
        if(m==1 || n==1) return mat;
        int left=0,right=n-1,top=0,bottom=m-1,prev,curr;
        while(top<bottom&&left<right){
            prev=mat[top+1][left];
            for(int i=left;i<=right;i++){
                curr=mat[top][i];
                mat[top][i]=prev;
                prev=curr;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                curr=mat[i][right];
                mat[i][right]=prev;
                prev=curr;
            }
            right--;
            for(int i=right;i>=left;i--){
                curr=mat[bottom][i];
                mat[bottom][i]=prev;
                prev=curr;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                curr=mat[i][left];
                mat[i][left]=prev;
                prev=curr;
            }
            left++;
        }
        return mat;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(N, M, Mat);
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}  // } Driver Code Ends