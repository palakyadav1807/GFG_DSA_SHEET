// { Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        unordered_set<int> set;
        for(int i=0;i<n;i++){
            if(set.find(arr[i])==set.end()){
                set.insert(arr[i]);
            }else{
                set.erase(arr[i]);
            }
        }
        int ans=*set.begin();
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}  // } Driver Code Ends