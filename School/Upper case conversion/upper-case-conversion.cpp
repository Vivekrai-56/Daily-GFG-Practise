//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string s)
{
    // code here
    
    bool isfirst = true;
    for(int i=0;i<s.length();i++){
        if(s[i] !=' ' && isfirst== true){
            s[i] = toupper(s[i]);
        }
        isfirst = (s[i] == ' ' ? true: false);
        // if current char is space then ture else false
    }
    
    return s;
}