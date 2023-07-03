//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string convert(string a);
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            string s;
            cin>>s;
            string ans=convert(s);
            cout<<ans<<endl;
            
        }
}

// } Driver Code Ends


string convert(string s)
{
    // code here.
    for(auto &x : s){
        if(x>='a' &&x<='z') 
         x = 'z'-(x-'a');
        else 
         x = 'Z'-(x-'A');
    }
    return s;
}