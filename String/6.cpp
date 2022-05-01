// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    unordered_map<char, int> seen;
    int res=0;
    int start=0;
    for(int end=0;end<S.size();end++){
        if(seen.find(S[end])!=seen.end()){
            start=max(start,seen[S[end]]+1);
        }
        seen[S[end]]=end;
        res=max(res,end-start+1);
    }
    return res;
}