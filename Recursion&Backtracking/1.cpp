// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string rremove(string s){
        string res="";
        int i=0;
        int n=s.size();
        bool flag=false;
        while(i<n){
            if(i==n-1||s[i]!=s[i+1]){
                res+=s[i];
                i++;
            }
            if(i<n-1&&s[i]==s[i+1]){
                flag=true;
                while(i<n-1&&s[i]==s[i+1]){
                    i++;
                }
                i++;
            }        
        }
        if(res.empty()||!flag) return res;
        return rremove(res);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends