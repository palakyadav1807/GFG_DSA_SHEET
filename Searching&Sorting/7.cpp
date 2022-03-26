#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main()
 {
    int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    vector<int> arr;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        arr.push_back(x);
	    }
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++){
	        m[arr[i]]++;
	    }
	    sort(arr.begin(),arr.end(),[&](int a,int b){
	        if(m[a]==m[b]){
	            return a<b;
	        }else{
	            return m[a]>m[b];
	        }
	    });
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}