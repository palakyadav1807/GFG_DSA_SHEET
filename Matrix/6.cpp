// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &mat, int r, int c){
        int min=INT_MAX,max=INT_MIN;
        for(int i=0;i<r;i++){
            if(mat[i][0]<min){
                min=mat[i][0];
            }
            if(mat[i][c-1]>max){
                max=mat[i][c-1];
            }
        }
        int req_count=r*c/2;
        int res;
        while(min<=max){
            int mid=(min+max)/2;
            int count=0;
            for(int i=0;i<r;i++){
                //use this to count no. of elements smaller than or equal to a number(here that number is mid)
                count+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
            }
            if(count>req_count){
                max=mid-1;
            }else{
                min=mid+1;
            }
        }
        return min;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends