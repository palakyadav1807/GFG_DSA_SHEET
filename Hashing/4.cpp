// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int n, int m, int x)
    {
        vector<pair<int,int>> res;
        unordered_set<int> set;
        for(int i=0;i<m;i++){
            set.insert(B[i]);
        }
        for(int i=0;i<n;i++){
            if(set.find(x-A[i])!=set.end()){
                res.push_back(make_pair(A[i],x-A[i]));
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};


// { Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}  // } Driver Code Ends