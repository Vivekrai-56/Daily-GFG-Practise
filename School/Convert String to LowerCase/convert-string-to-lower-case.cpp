//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string toLower(string s) {
        // code here
        string str;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                str.push_back(s[i]+32);
            }
            else if(s[i]>='a' && s[i]<='z'){
            str.push_back(s[i]);
            }
        }
        
        
        return str;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    }
    return 0;
}

// } Driver Code Ends