//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void printPattern(int n)
    {
        // Write Your Code here
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++)
            {
                cout<<"*";
            }
            cout<<" ";
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.printPattern(N);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends