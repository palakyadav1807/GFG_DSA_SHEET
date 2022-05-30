// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void helper(vector<vector<int>> &res,vector<int> ans,int left[],int lowerLeft[],int upperLeft[],int col,int n){
        if(col==n){
            res.push_back(ans);
            return;
        }
        for(int row=0;row<n;row++){
            if(left[row]==0&&lowerLeft[row+col]==0&&upperLeft[(n-1)+col-row]==0){
                left[row]=1;
                lowerLeft[row+col]=1;
                upperLeft[(n-1)+col-row]=1;
                ans.push_back(row+1);
                helper(res,ans,left,lowerLeft,upperLeft,col+1,n);
                left[row]=0;
                lowerLeft[row+col]=0;
                upperLeft[(n-1)+col-row]=0;
                ans.pop_back();
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> res;
        int left[n]={0};
        int lowerLeft[2*n-1]={0};
        int upperLeft[2*n-1]={0};
        vector<int> ans;
        helper(res,ans,left,lowerLeft,upperLeft,0,n);
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends