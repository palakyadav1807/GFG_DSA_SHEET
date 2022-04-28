// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int res=0;
        for(int i=0;i<str.size();i++){
            char c=str[i];
            if(!((i==0&&c=='-')||(c>='0'&&c<='9'))){
                return -1;
            }
            if(c=='-') continue;
            res=res*10+(c-48);
        }
        return str[0]=='-'?(-1*res):res;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends