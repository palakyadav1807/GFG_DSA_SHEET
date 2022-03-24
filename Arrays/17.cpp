// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        long long sumA=0;
        for(int i=0;i<n;i++){
            sumA+=A[i];
        }
        long long sumB=0;
        for(int i=0;i<m;i++){
            sumB+=B[i];
        }
        if(abs(sumA-sumB)%2!=0){
            return -1;
        }
        long long target=(sumA-sumB)/2;
        //find 2 elements a from A and b from B such that
        //a-b==target
        sort(A, A + n); 
        sort(B, B + m); 
        int i=0;int j=0;
        while(i<n&&j<m){
            if((A[i]-B[j])==target){
                return 1;
            }else if((A[i]-B[j])<target){
                i++;
            }else{
                j++;
            }
        }
        return -1;
	}
 

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends