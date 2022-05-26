// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    void helper(int curr,string str,int n,unordered_set<string> &set){
	        if(curr==n){
	            set.insert(str);
	            return;
	        }
	        for(int i=curr;i<n;i++){
	            swap(str[curr],str[i]);
	            helper(curr+1,str,n,set);
	            swap(str[curr],str[i]);
	            
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    unordered_set<string> set;
		    helper(0,S,S.size(),set);
		    vector<string> res;
		    for(auto x:set){
		        res.push_back(x);
		    }
		    sort(res.begin(),res.end());
		    return res;
		}
};

 

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends