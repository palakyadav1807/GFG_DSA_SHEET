// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        unordered_map<int,int> map;
        int curr_sum=0;
        int res=0;
        for(int i=0;i<n;i++){
            curr_sum+=arr[i];
            if(curr_sum==0){
                res=max(res,i+1);
            }
            auto it=map.find(curr_sum);
            if(it==map.end()){
                map.insert({curr_sum,i});
            }else{
                res=max(res,i-(it->second));
            }
        }
        return res;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends