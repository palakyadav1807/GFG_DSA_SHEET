// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long int optimalKeys(int N){
        long long int res[N+1];
        if(N<=6){
            return N;
        }
        for(long long int i=1;i<7;i++){
            res[i]=i;
        }
        for(int i=7;i<=N;i++){
            res[i]=0;
            long long int max=0;
            for(long long int j=i-3;j>=1;j--){
                long long int curr=(i-j-1)*res[j];
                if(curr>res[i]){
                    res[i]=curr;
                }
            }
        }
        return res[N];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.optimalKeys(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends