// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool cmp(string a,string b){
	    string a_b=a+b;
	    string b_a=b+a;
	    return (a_b)>(b_a);
	}
	string printLargest(vector<string> &arr) {
	    sort(arr.begin(),arr.end(),cmp);
	    string res="";
	   for (int i = 0; i < arr.size(); i++)
             res+=arr[i];
	    return res;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends