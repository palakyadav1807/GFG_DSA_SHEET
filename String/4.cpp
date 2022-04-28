// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int value(char c){
        int res;
        switch(c){
            case 'I':res=1;break;
            case 'V':res=5;break;
            case 'X':res=10;break;
            case 'L':res=50;break;
            case 'C':res=100;break;
            case 'D':res=500;break;
            case 'M':res=1000;break;
        }
        return res;
    }
    int romanToDecimal(string &str) {
        int prev=value(str[0]);
        int res=0;
        int curr_value;
        for(int i=1;i<str.size();i++){
            curr_value=value(str[i]);
            if(curr_value>prev){
                res-=prev;
            }else{
                res+=prev;
            }
            prev=curr_value;
        }
        res+=value(str[str.size()-1]);
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends