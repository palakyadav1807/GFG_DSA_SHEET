// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    const int CHAR=256;
    int freq[CHAR];
    fill(freq,freq+CHAR,0);
    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
        if(freq[s[i]]==2){
            string res="";
            res+=s[i];
            return res;
        }
    }
    return "-1";
}