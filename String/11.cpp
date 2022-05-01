// { Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string printSequence(string S)
{
    const int CHAR=26;
    string value[CHAR];
    fill(value,value+CHAR,"");
    int counter=0;
    int add=2;
    int i=0;
    for(;i<CHAR;i++){
        string c=to_string(add);
        switch(counter){
            case 0:value[i]+=c;break;
            case 1:value[i]+=(c+c);break;
            case 2:
                value[i]+=(c+c+c);
                if(value[i]=="777"||value[i]=="999"){
                    counter=-3;break;
                }else{
                    counter=-1;add++;
                    break;
                }
            case -2:value[i]=c+c+c+c;counter=-1;add++;break;
        }
        counter++;
    }
    string res="";
    for(int i=0;i<S.size();i++){
        if(S[i]==' '){
            res+="0";
        }else{
          res+=value[S[i]-65];  
        }
    }
    return res;
}