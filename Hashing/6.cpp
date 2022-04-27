// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int sum) {
        vector<vector<int>> res;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<=n-4;i++){
            for(int j=i+1;j<=n-3;j++){
                int pair_sum=sum-(arr[i]+arr[j]);
                int start=j+1;
                int end=n-1;
                while(start<end){
                    if((arr[start]+arr[end])==pair_sum){
                        vector<int> temp;
                        temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[start]);
                        temp.push_back(arr[end]);
                        res.push_back(temp);
                        start++;
                        end--;
                        while(arr[start]==arr[start-1]&&arr[end+1]==arr[end])
                        {
                            start++;
                            end--;
                        }
                    }else if((arr[start]+arr[end])>pair_sum){
                        end--;
                    }else{
                        start++;
                    }
                }
                while(j<=n-3&&arr[j]==arr[j+1]){
                    j++;
                }
            }
            while(i<=n-4&&arr[i]==arr[i+1]){
                    i++;
                }
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends