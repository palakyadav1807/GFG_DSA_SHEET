// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    void reverse(string &str,int start,int end){
        while(start<end){
            char temp=str[start];
            str[start]=str[end];
            str[end]=temp;
            start++;
            end--;
        }
    }
    string reverseWords(string S) 
    { 
        int start=0;
        int i;
        for(i=0;i<S.size();i++){
            if(S[i]=='.'){
                reverse(S,start,i-1);
                start=i+1;
            }
        }
        reverse(S,start,i-1);
        reverse(S,0,S.size()-1);
        return S;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends