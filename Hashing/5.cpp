// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        vector<int> res;
        int n=v1.size();
        int m=v2.size();
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[v1[i]]++;
        }
        for(int i=0;i<m;i++){
            auto it=map.find(v2[i]);
            if(it!=map.end()){
                res.push_back(it->first);
                (it->second)--;
                if(it->second==0){
                    map.erase(it);
                }
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}  // } Driver Code Ends