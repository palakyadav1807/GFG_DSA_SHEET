// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    const int CHAR=256;
	    int freq[CHAR];
	    fill(freq,freq+CHAR,0);
	    string res="";
	    for(int i=0;i<S.size();i++){
	        freq[S[i]]++;
	        if(freq[S[i]]==1){
	            res+=S[i];
	        }
	    }
	    return res;
	}
};

// { Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}  // } Driver Code Ends