// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            int m=pat.size();
            int n=txt.size();
            vector<int> res;
            const int d=5;
            const int q=9973;//largest prime number under 10,000
            int h=1;
            //calculating (d^(m-1))%q
            for(int i=1;i<=m-1;i++){
                h=(h*d)%q;
            }
            //compute p and t0;
            int p=0,t=0;
            for(int i=0;i<m;i++){
                p=(p*d+pat[i])%q;
                t=(t*d+txt[i])%q;
            }
            for(int i=0;i<=n-m;i++){
                bool flag=true;
                for(int j=0;j<m;j++){
                    if(pat[j]!=txt[i+j]){
                        flag=false;
                        break;
                    }
                }
                if(flag==true){
                    res.push_back(i+1);
                }
                //computing t(i+1) using t(i)
                if(i<n-m){
                    t=(d*(t-txt[i]*h)+txt[i+m])%q;
                    if(t<0){//beacuse we dont want negative values
                        t=t+q;
                    }
                }
            }
            if(res.empty()){
                res.push_back(-1);
                return res;
            }
            return res;
        }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends