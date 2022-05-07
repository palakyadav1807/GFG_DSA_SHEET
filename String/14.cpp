// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            int const CHAR=256;
            int freqA[CHAR]={0};
            int freqB[CHAR]={0};
            string res="";
            for(int i=0;i<A.size();i++){
                freqA[A[i]]++;
            }
            for(int i=0;i<B.size();i++){
                freqB[B[i]]++;
            }
            for(int i=0;i<CHAR;i++){
                if(freqA[i]>0&&freqB[i]==0){
                    res+=(char)i;
                }
                if(freqA[i]==0&&freqB[i]>0){
                    res+=(char)i;
                }
            }
            return res==""?"-1":res;
        }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends