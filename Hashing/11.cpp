// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ){
        ll res=0;
        ll curr_sum=0;
        unordered_map<ll,ll> map;
        for(int i=0;i<n;i++){
            curr_sum+=arr[i];
            if(curr_sum==0){
                res++;
            }
            if(map.find(curr_sum)!=map.end()){
                auto it=map.find(curr_sum);
                res+=(it->second);
            }
            map[curr_sum]++;
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
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends