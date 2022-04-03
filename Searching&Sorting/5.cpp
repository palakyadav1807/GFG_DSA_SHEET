// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long n)
    {
        helper(arr,0,n-1);
    }
    long long helper(long long arr[],long long l,long long r){
        long long res=0;
        if(l<r){
            long long mid=(l+r)/2;
            res+=helper(arr,l,mid);
            res+=helper(arr,mid+1,r);
            res+=countAndMerge(arr,l,mid,r);
        }
        return res;
    }
    long long countAndMerge(long long arr[],long long l,long long m, long long r){
        long long n1=m-l+1,n2=r-m,arr1[n1], arr2[n2];
        for(long long i=0;i<n1;i++){
            arr1[i]=arr[l+i];
        }
        for(long long i=0;i<n2;i++){
            arr2[i]=arr[m+i+1];
        }
        long long i=0,j=0,k=l,res=0;
        while(i<n1&&j<n2){
            if(arr1[i]<=arr2[j]){
                arr[k++]=arr1[i++];
            }else{
                arr[k++]=arr2[j++];
                res+=(n1-i);
            }
        }
        while(i<n1){
            arr[k++]=arr1[i++];
        }
        while(j<n2){
            arr[k++]=arr2[j++];
        }
        return res;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends