// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &mat, int n, int m)
        {
            int res_c=INT_MAX;
            int res;
            for(int r=0;r<n;r++){
                int one_found_at=m;
                int left=0;
                int right=m-1;
                while(left<=right){
                    int mid=(left+right)/2;
                    if(mat[r][mid]==0){
                        left=mid+1;
                    }else{
                        one_found_at=mid;
                        right=mid-1;
                    }
                }
                if(one_found_at<res_c){
                    res_c=one_found_at;
                    res=r;
                }
            }
            return res;
        }
};

// { Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}  // } Driver Code Ends